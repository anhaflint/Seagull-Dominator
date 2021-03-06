#include "Module_Corde/header/rope.h"

/*!
 * \file Rope.cpp
 * \brief Classe repr�sentant la corde et le boulet
 */

Rope::Rope(b2Vec2* pos, int length) : length(length)
{
	position = new b2Vec2(*pos);

	affichage = Affichage::Instance();
	int i;
	// Crees les morceaux de la corde 
	for (i = 0; i < length; i++){
		circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle)); // Instancie de nouveaux rectangles
		circles.back().get()->setPhysics(densityCorde, bouncingCorde, frictionCorde); // Modifies les proprietes physiques du nouveau morceau
		circles.back().get()->setup(GestionnairePage::box2d.getWorld(), position->x, position->y, radius); // Definie sa position et sa taille
		circles.back().get()->fixture.filter.groupIndex = -5; // Ajoute le morceau au groupe des autres morceaux, afin d'empecher qu'ils ne se touchent/percutent (collide)
		position->y -= radius; // Le morceau suivant sera ajout� juste en dessous du morceau courant
	}

	circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
	ptrBoulet = circles.back().get();
	circles.back().get()->setPhysics(densityBoulet, bouncingBoulet, frictionBoulet);
	circles.back().get()->setup(GestionnairePage::box2d.getWorld(), position->x, position->y, tailleBoulet);
	circles.back().get()->fixture.filter.groupIndex = -5;
	position->y -= 40.0f;


	circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
	circles.back().get()->setPhysics(70, 0.1, 5);
	circles.back().get()->setup(GestionnairePage::box2d.getWorld(), position->x, position->y, 0.1f);
	circles.back().get()->fixture.filter.groupIndex = -5;
	position->y -= 0.1f;

	// Les 2 attaches du joints 
	b2Vec2* anchor1 = new b2Vec2();
	b2Vec2* anchor2 = new b2Vec2();
	length += 2;

	// Pour chaque morceaux-1, ajoute un joint entre chaque 
	for (int i = 1; i < length; i++) {
		// Les 2 attaches seront au niveau du centre de gravit� de chaque morceaux 
		*anchor1 = circles[i - 1].get()->body->GetWorldCenter();
		*anchor2 = circles[i].get()->body->GetWorldCenter();
		//anchor1->Set(anchor1->x, anchor1->y + (0.3));
		//anchor2->Set(anchor2->x, anchor2->y - (0.3));

		joints.push_back(ofPtr<ofxBox2dDistanceJoint>(new ofxBox2dDistanceJoint())); // Instancie le joint
		joints.back().get()->setup(GestionnairePage::box2d.getWorld(), circles[i - 1].get()->body, circles[i].get()->body, *anchor1, // Definie ses proprietes physiques
			*anchor2, 0, 0.0f, false);
		joints.back().get()->setLength(radius); // La longueur du joint egal � la hauteur d'un morceau. De ce fait chaque joint aura une moiti� sur la partie
		// basse du precedent morceau, et l'autre moitie sur la partie haute du nouveau morceau
	}
}


Rope::~Rope()
{
}

void Rope::setTailleBoulet(float v){
	ptrBoulet->setRadius(v);
	tailleBoulet = v;
}

void Rope::joinBegin(b2Body* body){
	b2Vec2 anchor1 = circles[0].get()->body->GetWorldCenter(); // La position du premier morceau de la corde
	b2Vec2 anchor2 = body->GetWorldCenter(); // L'attache sur le nouvel objet sera au niveau de son centre de gravit�
	joints.push_back(ofPtr<ofxBox2dDistanceJoint>(new ofxBox2dDistanceJoint()));
	joints.back().get()->setup(GestionnairePage::box2d.getWorld(), circles[0].get()->body, body, anchor1,
		anchor2, 0, 0.0f, false);
	joints.back().get()->setLength(radius);
}
void Rope::joinEnd(b2Body* body){
	b2Vec2 anchor1 = circles[length - 1].get()->body->GetWorldCenter(); // La position du dernier morceau de la corde
	b2Vec2 anchor2 = body->GetWorldCenter(); // L'attache sur le nouvel objet sera au niveau de son centre de gravit�
	joints.push_back(ofPtr<ofxBox2dDistanceJoint>(new ofxBox2dDistanceJoint()));
	joints.back().get()->setup(GestionnairePage::box2d.getWorld(), circles[length - 1].get()->body, body, anchor1,
		anchor2, 0, 0.0f, false);
	joints.back().get()->setLength(radius);
}
void Rope::grow(int n){ // n est le nombre d'elements supplementaires a ajouter
	/// Le code fonctionne de la meme maniere que le constructeur de Rope
	/// A part qu'on ajoute le premier element nouvellement instancie � la fin de la corde

	int prevLength = length;

	ptrBoulet->setRadius(radius);

	int i;
	b2Vec2* anchor1 = new b2Vec2();
	b2Vec2* anchor2 = new b2Vec2();
	for (i = 0; i < n; i++){
		circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
		circles.back().get()->setPhysics(densityCorde, bouncingCorde, frictionCorde);
		circles.back().get()->setup(GestionnairePage::box2d.getWorld(), circles.at(length + i - 1).get()->body->GetWorldCenter().x + radius, // rects.at(length+i-1) recupere l'avant dernier morceau (celui juste avant celui qui vient d'etre instancie)
			circles.at(length + i - 1).get()->body->GetWorldCenter().y + radius, radius);
		circles.back().get()->fixture.filter.groupIndex = -5;
		*anchor1 = circles[length + i - 1].get()->body->GetWorldCenter(); // Recupere la position de l'avant dernier morceau (celui juste avant celui qui vient d'etre instancie)
		*anchor2 = circles[length + i].get()->body->GetWorldCenter(); // Recupere la position du morceau qui vient d'etre instancie

		position->y -= radius;
	}
	length += n;


	// Pour chaque morceaux-1, ajoute un joint entre chaque 
	for (int i = prevLength-1 ; i < length; i++) {
		// Les 2 attaches seront au niveau du centre de gravit� de chaque morceaux 
		*anchor1 = circles[i - 1].get()->body->GetWorldCenter();
		*anchor2 = circles[i].get()->body->GetWorldCenter();
		//anchor1->Set(anchor1->x, anchor1->y + (0.3));
		//anchor2->Set(anchor2->x, anchor2->y - (0.3));

		joints.push_back(ofPtr<ofxBox2dDistanceJoint>(new ofxBox2dDistanceJoint())); // Instancie le joint
		joints.back().get()->setup(GestionnairePage::box2d.getWorld(), circles[i - 1].get()->body, circles[i].get()->body, *anchor1, // Definie ses proprietes physiques
			*anchor2, 0, 0.0f, false);
		joints.back().get()->setLength(radius); // La longueur du joint egal � la hauteur d'un morceau. De ce fait chaque joint aura une moiti� sur la partie
		// basse du precedent morceau, et l'autre moitie sur la partie haute du nouveau morceau
	}
}

void Rope::reduce(int n){
	for (int i = 0; i < n; i++){
		circles.back().get()->destroy();
		joints.back().get()->destroy();
		length--;
	}
}

void Rope::draw(){
	// On dessine les morceaux
	for (int i = 0; i < length+1; i++) {
		if (i < length) {
			ofFill();
			ofSetColor(90, 60, 17);
			circles[i].get()->draw(); 
		}
		else {
			ofSetColor(255, 255, 255);	//Image claire
			this->affichage->aff_img((IMG)BOULET, (int)circles[length + 1].get()->getPosition().x - tailleBoulet, (int)circles[length + 1].get()->getPosition().y - tailleBoulet, tailleBoulet*2, tailleBoulet*2);
			//ofSetColor(182, 182, 182);
			//circles[length + 1].get()->draw();
		}
	}

	

	// On dessine les joints 
	for (int i = 0; i < joints.size(); i++) {
		ofSetHexColor(0x444342);
		joints[i].get()->draw();
	}
	
}


void Rope::destroy() {
	if (circles.front() != NULL) {
		for (ofPtr<ofxBox2dCircle> c : circles) {
			c->destroy();
		}
	}
}