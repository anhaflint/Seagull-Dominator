#pragma once

/*!
 * \file ObjetPhysique.h
 * \brief Classe servant à gérer les objets physiques
 * \author Quentin GROS
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





