#ifndef _CASTLE_H
#define _CASTLE_H


/*!
 * \file Castle.h
 * \brief Classe château
 * \author Claire REMY
 */
#include "ofMain.h"
#include "ofxBox2d.h"
#include "Module_Chateau\Header\Bloc.h"

/*! 
 * \class Castle
 * \brief Classe château
 */
class Castle : public ObjetPhysique {
protected :
	ofPtr<Bloc> base; /*!< Pointeur vers le bloc de base */
	ofPtr<Bloc> med; /*!< Pointeur vers le bloc intermédiaire */
	ofPtr<Bloc> top;  /*!< Pointeur vers le dernier bloc */
	int nbGrains; /*!< Nombre de grains composant le château */

public :
	/*!
	 * \brief Constructeur de la classe Castle
	 * 
	 * \param mouseX position X du château
	 * \param mouseY position Y du château
	 */
	Castle(int mouseX, int mouseY);

	/*! 
	 * \brief Destructeur de la classe Castle
	 */
	~Castle();

	/*!
	 * \brief Fonction permettant de dessiner un château à l'écran
	 */
	virtual void draw();

	/*!
	 * \brief Fonction retournant le nombre de grains composant un château
	 */
	int getNbGrains();

	/*!
	 * \brief Fonction permettant la destruction de tous les blocs composant un château
	 */
	void destroy();
};

#endif