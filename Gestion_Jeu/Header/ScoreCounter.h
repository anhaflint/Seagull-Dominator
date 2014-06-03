#pragma once

/*!
 * \file ScoreCounter
 * \brief Classe de comptage des points du joueur 
 * \author Claire REMY, Thibault HUCKERT
 */
#include "ofMain.h"
#include "ofxBox2d.h"
#include "b2WorldCallbacks.h"

/*!
 * \class ScoreCounter
 * \brief Classe de comptage des points du joueur
 * Se base sur la fonction d' AreaQuerying de Box2D
 */
class ScoreCounter : public b2QueryCallback {
public :
	std::vector<b2Body*> foundBodies; /*!< Vectore des corps trouves */

	/*!
	 * \brief Fonction permettant de stocker les corps detectes dans l'aire scannee
	 */
	bool ReportFixture(b2Fixture* fixture) {
		printf("coucou \n");
		foundBodies.push_back(fixture->GetBody());
		return true;
	};
	
	/*!
	 * \brief Fonction permettant d'acceder au nombre de corps trouves
 	 */
	int getSize(){
		return foundBodies.size();
	}
};