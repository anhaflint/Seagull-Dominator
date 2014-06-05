#pragma once

/*!
 * \file ObjetPhysique.h
 * \brief Classe servant a gerer les objets physiques
 * \author Quentin GROS, Claire REMY (relecture)
 */
#include <time.h>
#include "ofMain.h"

/*!
 * \class ObjetPhysique
 * \brief Classe servant a gerer les objets physiques
 */
class ObjetPhysique {
protected:
	ofVec2f pos;
public:
	ObjetPhysique(){}
	ObjetPhysique(ofVec2f Pos) :pos(Pos){}
};





