#pragma once
#include "ofMain.h"
#include "ofxBox2d.h"
#include "../../Joints/ofxBox2dDistanceJoint.h"

class Rope
{
private:
	vector<ofPtr<ofxBox2dCircle>> circles; // Le corps de la corde
	vector<ofPtr<ofxBox2dDistanceJoint>> joints; // Les jointures entre chaque morceaux de la corde
	int length; // Sa longueur
	ofxBox2d* box2d; // Un pointeur vers le 'jeu'. On en a besoin pour recuperer le World dans certaines fonctions
	const float radius = 5.0f; // La largeur
	//const float h = 5.0f; // L'hauteur
public:
	Rope(b2Vec2* pos, int length, ofxBox2d* box2d); // Constructeur
	~Rope();
	void joinBegin(b2Body* body); // Ajouter un objet physique au d�but de la corde (la mouette par exemple)
	void joinEnd(b2Body* body); // Ajouter un objet physique � la fin de la corde (un boulet par exemple)
	void grow(int n); // Ajoute n morceaux � la corde
	void reduce(int n); // Retire n morceaux � la corde
	void setPosition(b2Vec2* pos); // Modifie la position du d�but de la corde - NON TESTEE
	inline b2Vec2 getEndPosition(){ return circles.at(length - 1).get()->body->GetWorldCenter(); } // Accesseur � la position du dernier �l�ment de la corde
	inline b2Vec2 getBeginPosition(){ return circles.at(0).get()->body->GetWorldCenter(); } // Accesseur � la position du premier �l�ment de la corde
	void draw(); // Dessine la corde
};