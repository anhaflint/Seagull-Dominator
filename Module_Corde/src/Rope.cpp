#include "Module_Corde/header/rope.h"

/* Constructeur */
Rope::Rope(b2Vec2* pos, int length, ofxBox2d* box2d) : length(length), box2d(box2d)
{
	int i;
	/* Crees les morceaux de la corde */
	for (i = 0; i < length; i++){
		rects.push_back(ofPtr<ofxBox2dRect>(new ofxBox2dRect)); // Instancie de nouveaux rectangles
		rects.back().get()->setPhysics(20.0, 0.1, 5); // Modifies les proprietes physiques du nouveau morceau
		rects.back().get()->setup(box2d->getWorld(), pos->x, pos->y, w, h); // Definie sa position et sa taille
		rects.back().get()->fixture.filter.groupIndex = -5; // Ajoute le morceau au groupe des autres morceaux, afin d'empecher qu'ils ne se touchent/percutent (collide)
		pos->y -= h; // Le morceau suivant sera ajouté juste en dessous du morceau courant
	}

	/* Les 2 attaches du joints */
	b2Vec2* anchor1 = new b2Vec2();
	b2Vec2* anchor2 = new b2Vec2();

	/* Pour chaque morceaux-1, ajoute un joint entre chaque */
	for (int i = 1; i < length; i++) {
		/* Les 2 attaches seront au niveau du centre de gravité de chaque morceaux */
		*anchor1 = rects[i - 1].get()->body->GetWorldCenter();
		*anchor2 = rects[i].get()->body->GetWorldCenter();
		/*anchor1->Set(anchor1->x, anchor1->y + (0.3));
		anchor2->Set(anchor2->x, anchor2->y - (0.3));*/

		joints.push_back(ofPtr<ofxBox2dDistanceJoint>(new ofxBox2dDistanceJoint())); // Instancie le joint
		joints.back().get()->setup(box2d->getWorld(), rects[i - 1].get()->body, rects[i].get()->body, *anchor1, // Definie ses proprietes physiques
			*anchor2, 0, 0.0f, false); 
		joints.back().get()->setLength(h); // La longueur du joint egal à la hauteur d'un morceau. De ce fait chaque joint aura une moitié sur la partie
		// basse du precedent morceau, et l'autre moitie sur la partie haute du nouveau morceau
	}
}


Rope::~Rope()
{
}

void Rope::joinBegin(b2Body* body){
	b2Vec2 anchor1 = rects[0].get()->body->GetWorldCenter(); // La position du premier morceau de la corde
	b2Vec2 anchor2 = body->GetWorldCenter(); // L'attache sur le nouvel objet sera au niveau de son centre de gravité
	joints.push_back(ofPtr<ofxBox2dDistanceJoint>(new ofxBox2dDistanceJoint()));
	joints.back().get()->setup(box2d->getWorld(), rects[0].get()->body, body, anchor1,
		anchor2, 0, 0.0f, false);
	joints.back().get()->setLength(h);
}
void Rope::joinEnd(b2Body* body){
	b2Vec2 anchor1 = rects[length-1].get()->body->GetWorldCenter(); // La position du dernier morceau de la corde
	b2Vec2 anchor2 = body->GetWorldCenter(); // L'attache sur le nouvel objet sera au niveau de son centre de gravité
	joints.push_back(ofPtr<ofxBox2dDistanceJoint>(new ofxBox2dDistanceJoint()));
	joints.back().get()->setup(box2d->getWorld(), rects[length-1].get()->body, body, anchor1,
		anchor2, 0, 0.0f, false);
	joints.back().get()->setLength(h);
}
void Rope::grow(int n){
	/// Le code fonctionne de la meme maniere que le constructeur de Rope
	/// A part qu'on ajoute le premier element nouvellement instancie à la fin de la corde
	int i;
	b2Vec2* anchor1 = new b2Vec2();
	b2Vec2* anchor2 = new b2Vec2();
	for (i = 0; i < n; i++){
		rects.push_back(ofPtr<ofxBox2dRect>(new ofxBox2dRect));
		rects.back().get()->setPhysics(20.0, 0.1, 5);
		rects.back().get()->setup(box2d->getWorld(), rects.at(length+i-1).get()->body->GetWorldCenter().x+h, // rects.at(length+i-1) recupere l'avant dernier morceau (celui juste avant celui qui vient d'etre instancie)
			rects.at(length + i - 1).get()->body->GetWorldCenter().y+w, w, h);
		rects.back().get()->fixture.filter.groupIndex = -5;
		*anchor1 = rects[length + i - 1].get()->body->GetWorldCenter(); // Recupere la position de l'avant dernier morceau (celui juste avant celui qui vient d'etre instancie)
		*anchor2 = rects[length+i].get()->body->GetWorldCenter(); // Recupere la position du morceau qui vient d'etre instancie

		joints.push_back(ofPtr<ofxBox2dDistanceJoint>(new ofxBox2dDistanceJoint()));
		joints.back().get()->setup(box2d->getWorld(), rects[length+i - 1].get()->body, rects[length+i].get()->body, *anchor1,
			*anchor2, 0, 0.0f, false);
		joints.back().get()->setLength(h);
	}
	length += n;
}

/* NE MARCHE PAS - Pourquoi ? (conduit a un seg fault) */
void Rope::reduce(int n){
	for (int i = 0; i < n; i++){
		rects.back().get()->destroy();
		length--;
	}
}

/* NON TESTE */
void Rope::setPosition(b2Vec2* pos){
	float diffX = rects.at(0).get()->getPosition().x - pos->x;
	float diffY = rects.at(0).get()->getPosition().y - pos->y;
	for (int i = 0; i < length; i++){
		rects.at(i).get()->setPosition(rects.at(i).get()->getPosition().x + diffX, rects.at(i).get()->getPosition().y + diffY);
	}
}

void Rope::draw(){
	/* On dessine les morceaux */
	for (int i = 0; i < length; i++)
		rects.at(i).get()->draw();

	/* On dessine les joints */
	for (int i = 0; i < joints.size(); i++) {
		ofSetHexColor(0x444342);
		joints[i].get()->draw();
	}

}
