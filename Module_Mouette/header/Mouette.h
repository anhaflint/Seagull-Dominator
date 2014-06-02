#pragma once

/*!
 * \file Mouette.h
 * \brief Classe permettant de creer une mouette et de la gerer
 * \author Claire REMY, Quentin GROS
 */
#include "ofmain.h"
#include "ofxbox2d.h"
#include "Module_Chateau/Header/ObjetPhysique.h"
#include "Util/Header/Affichage.h"


/*!
 * \class Mouette
 * \brief Classe permettant de creer une mouette et de la gerer
 */
class Mouette : public ObjetPhysique {
private:
	Affichage *affichage; /*!< Pointeur vers une instance de la classe affichage afin de gerer les images */
	unsigned int spriteMouette; /*!< Sprite de la mouette */
	int resistance; /*!< Resistance de la mouette : cette fonctionnalite n'est pas encore utilisee */
	ofPtr<ofxBox2dCircle> mouette; /*!< Pointeur vers la mouette */
public : 
	/*!
	 * \brief Constructeur
	 */
	Mouette();

	/*!
	 * \brief Destructeur
	 */
	~Mouette();

	/*!
	 * \brief Fonction permettant de déplacer la mouette
	 * \param x Deplacement en x
	 * \param y Deplacement en y
	 */
	void move(float, float);

	/*!
	 * \brief Fonction permettant de detruire la mouette
	 */
	void destroy();
	 
	static const int radius = 40; /*!< Taille de la mouette */
	
	/*!
	 * \brief Accesseur a la position de la mouette en X
	 */
	float getPositionX();

	/*! 
	 * \brief Accesseur a la position de la mouette en Y 
	 */
	float getPositionY();

	/*!
	 * \brief Accesseur au corps de la mouette
 	 */
	inline ofPtr<ofxBox2dCircle> getBody(){ return mouette; }

	/*!
	 * \brief Fonction permettant de dessiner la mouette
 	 */
	virtual void draw();
};

enum _moveState{
	MS_STOP,
	MS_RIGHT,
	MS_LEFT,
};
