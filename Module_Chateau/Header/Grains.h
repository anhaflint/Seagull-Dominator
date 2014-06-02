#ifndef _GRAINS_H
#define _GRAINS_H

/*!
 * \file Grains.h
 * \brief Classe representant un grain d'un bloc
 * \author Claire REMY, Quentin GROS (relecture)
 */

#include "ofxBox2d.h"
#include "ofMain.h"
#include "ofxBox2dRect.h"
#include "Util\Header\Timer.h"
#include "Module_Chateau\Header\ObjetPhysique.h"

/*!
 * \class
 * \brief Classe representant un grain d'un bloc
 * herite de la classe ofxBox2dRect
 */
class Grains : public ObjetPhysique, public ofxBox2dRect {
protected:
	Timer timer; /*!< Timer permettant de decompter le temps jusqu'a la disparition d'un grain */
	ofVec2f current; /*!< Position courante du grain, fonctionnalite pas encore utilisee */
public:
	static const int size = 5; /*!< taille d'un grain */

	/*! 
	 * \brief Constructeur par defaut de la classe grain
	 */
	Grains();

	/*!
	 * \brief Constructeur de la classe Grain permettant de stocker la position
	 * Cette Fonctionnalite n'est pas encore utilisee
	 */
	Grains(ofVec2f);

	/*!
	 * \brief Fonction permettant la disparition d'un grain apres un certain temps
	 */
	void disparition();

	/*!
	 * \brief Fonction permettant de dessiner un grain a l'ecran
	 */
	virtual void draw();
};

#endif