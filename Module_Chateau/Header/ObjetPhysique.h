#pragma once

/*!
 * \file ObjetPhysique.h
 * \brief Classe servant a gerer les objets physiques
 * \author Quentin GROS, Claire REMY (relecture)
 */
#include <time.h>
#include "Position.h"
#include "ofMain.h"

class ObjetPhysique {
protected:
	ofVec2f pos;
public:
	ObjetPhysique(){}
	ObjetPhysique(ofVec2f Pos) :pos(Pos){}
};





