#ifndef _GRAINS_H
#define _GRAINS_H

/*!
 * \file Grains.h
 * \brief Classe repr�sentant un grain d'un bloc
 * \author Claire REMY
 */

#include "ofxBox2d.h"
#include "ofMain.h"
#include "ofxBox2dRect.h"
#include "Util\Header\Timer.h"
#include "Module_Chateau\Header\ObjetPhysique.h"

/*!
 * \class
 * \brief Classe repr�sentant un grain d'un bloc
 * h�rite de la classe ofxBox2dRect
 */
class Grains : public ObjetPhysique, public ofxBox2dRect {
protected:
	Timer timer; /*!< Timer permettant de d�compter le temps jusqu'� la disparition d'un grain */
	ofVec2f current; /*!< Position courante du grain, fonctionnalit� pas encore utilis�e */
public:
	static const int size = 5; /*!< taille d'un grain */

	/*! 
	 * \brief Constructeur par d�faut de la classe grain
	 */
	Grains();

	/*!
	 * \brief Constructeur de la classe Grain permettant de stocker la position
	 * Cette Fonctionnalit� n'est pas encore utilis�e
	 */
	Grains(ofVec2f);

	/*!
	 * \brief Fonction permettant la disparition d'un grain apr�s un certain temps
	 */
	void disparition();

	/*!
	 * \brief Fonction permettant de dessiner un grain � l'�cran
	 */
	virtual void draw();
};

#endif