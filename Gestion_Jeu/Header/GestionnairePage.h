#pragma once

/*!
 * \file GestionnairePage.h
 * \brief Classe permettant de gerer les pages du jeu
 * \author Quentin GROS, Thibault HUCKERT (relecture)
 */
#include "PageJeu.h"
#include <stdio.h>
#include "ofxBox2d.h"


/*!
 * \class GestionnairePage
 * \brief Classe permettant de gerer les pages du jeu
 */
class GestionnairePage
{
public:
	/*!
	 * \brief Fonction permettant d'empiler une page du jeu 
	 * \param pagejeu Page a empiler
	 */
	static inline void EmpilerPage(PageJeu *pagejeu){ 
		PilePage.push(pagejeu); 
	}

	/*!
	 * \brief Fonction permettant de depiler une page du jeu
	 */
	static inline void DepilerPage(){ 
		PilePage.pop();
	}

	/*!
	 * \brief Fonction permettant d'acceder a la page courante
	 */
	static inline PageJeu* PageCourante(){ return PilePage.top(); }

	static ofxBox2d box2d; /*!< Monde Box2d */
	static stack<PageJeu *> PilePage;  /*!< Pile de pages du jeu */
};

