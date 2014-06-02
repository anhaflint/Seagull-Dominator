#pragma once

/*!
 * \file Rope.h
 * \brief Classe représentant la corde et le boulet
 * \author Thibault HUCKERT, Claire REMY (relecture, édition)
 */
#include "ofMain.h"
#include "ofxBox2d.h"
#include "../../Joints/ofxBox2dDistanceJoint.h"
#include "Util\Header\Affichage.h"



/*!
 * \class Rope
 * \brief Implémentation d'une corde lestee d'un boulet
 */
class Rope
{
private:
	Affichage *affichage; /*!< Pointeur vers une instance de classe Affichage afin de gerer les images */
	vector<ofPtr<ofxBox2dCircle>> circles; /*!< Corps de la corde */
	vector<ofPtr<ofxBox2dDistanceJoint>> joints; /*!< Les jointures entre chaque morceaux de la corde */
	int length; /*!< Longueur de la corde */
	ofxBox2dCircle *ptrBoulet;
	ofxBox2d* box2d; /*!< Pointeur vers le jeu */
	const float radius = 2.5f; /*!< Largeur de la corde */

	const float densityCorde = 10.0; /*!< Densite de la corde */
	const float bouncingCorde = 0.0; /*!< Rebondissement de la corde */
	const float frictionCorde = 15.0; /*!< Friction de la corde */

	const float densityBoulet = 20.0; /*!< Densite du boulet */
	const float bouncingBoulet = 0.1; /*!< Rebondissement du boulet */
	const float frictionBoulet = 5.0; /*!< Friction du boulet */
	float tailleBoulet = 20.0f; /*! Taille du boulet */

public:
	/*!
	 * \brief Constructeur
	 * 
	 * \param pos pointeur vers la position de la corde
	 * \param length longueur de la corde
	 * \param box2d pointeur vers le monde
	 */
	Rope(b2Vec2* pos, int length, ofxBox2d* box2d);

	/*! 
	 * \brief Destructeur
	 */
	~Rope();

	/*!
	 *\brief Ajoute un objet phyisque au debut de la corde
	 * \param body Corps a ajouter
	 */
	void joinBegin(b2Body* body); 

	/*!
	 * \brief Ajoute un objet physique a la fin de la corde
	 * \param body Corps a ajouter
	 */
	void joinEnd(b2Body* body); 

	/*!
	 * \brief Ajoute n morceaux a la corde
	 * \param n Nombre de morceaux a ajouter a la corde
	 */
	void grow(int n); 

	/*! 
	 * \brief Retire n morceaux a la corde
	 * \param n Nombre de morceaux a retirer a la corde
	 */
	void reduce(int n); 

	/*!
	 * \brief Modifie la position du debut de la corde 
	 * \param pos Position du debut de la corde
	 * Cette fonction n'est pas encore testee
	 */
	void setPosition(b2Vec2* pos); 

	/*!
	 * \brief  Accesseur a la position du dernier element de la corde
	 */
	inline b2Vec2 getEndPosition(){ return circles.at(length - 1).get()->body->GetWorldCenter(); }
	
	/*! 
	 * \brief Accesseur a la position du premier element de la corde
	 */
	inline b2Vec2 getBeginPosition(){ return circles.at(0).get()->body->GetWorldCenter(); } 

	/*!
	 * \brief Fonction permettant de dessiner la corde et le boulet 
	 */
	void draw(); 

	/*! 
	 * \brief Accesseur a la longueur de la corde 
	 */
	inline int getLongueur(){ return length; }

	/*!
	 * \brief Accesseur a la taille du boulet
	 */
	inline int getTailleBoulet(){ return (int)tailleBoulet; }

	/*! 
	 * \brief Fonction permettant de fixer la taille du boulet 
	 * \param taille La taille du boulet
	 */
	void setTailleBoulet(float);

	/*!
	 * \brief Fonction permettant de détruire les elements de la corde et le boulet
	 */
	void destroy();
};