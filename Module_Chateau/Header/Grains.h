#ifndef _GRAINS_H
#define _GRAINS_H

/*!
 * \file Grains.h
 * \brief Classe représentant un grain d'un bloc
 * \author Claire REMY
 */

#include "ofxBox2d.h"
#include "ofMain.h"
#include "ofxBox2dRect.h"
#include "Util\Header\Timer.h"
#include "Module_Chateau\Header\ObjetPhysique.h"

/*!
 * \class
 * \brief Classe représentant un grain d'un bloc
 * hérite de la classe ofxBox2dRect
 */
class Grains : public ObjetPhysique, public ofxBox2dRect {
protected:
	Timer timer; /*!< Timer permettant de décompter le temps jusqu'à la disparition d'un grain */
	ofVec2f current; /*!< Position courante du grain, fonctionnalité pas encore utilisée */
public:
	static const int size = 5; /*!< taille d'un grain */

	/*! 
	 * \brief Constructeur par défaut de la classe grain
	 */
	Grains();

	/*!
	 * \brief Constructeur de la classe Grain permettant de stocker la position
	 * Cette Fonctionnalité n'est pas encore utilisée
	 */
	Grains(ofVec2f);

	/*!
	 * \brief Fonction permettant la disparition d'un grain après un certain temps
	 */
	void disparition();

	/*!
	 * \brief Fonction permettant de dessiner un grain à l'écran
	 */
	virtual void draw();
};

#endif