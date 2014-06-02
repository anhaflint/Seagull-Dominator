#ifndef _CASTLE_H
#define _CASTLE_H


/*!
 * \file Castle.h
 * \brief Classe chateau
 * \author Claire REMY, Quentin GROS (relecture) 
 */
#include "ofMain.h"
#include "ofxBox2d.h"
#include "Module_Chateau\Header\Bloc.h"

/*! 
 * \class Castle
 * \brief Classe chateau
 */
class Castle : public ObjetPhysique {
protected :
	ofPtr<Bloc> base; /*!< Pointeur vers le bloc de base */
	ofPtr<Bloc> med; /*!< Pointeur vers le bloc intermediaire */
	ofPtr<Bloc> top;  /*!< Pointeur vers le dernier bloc */
	int nbGrains; /*!< Nombre de grains composant le chateau */

public :
	/*!
	 * \brief Constructeur de la classe Castle
	 * 
	 * \param mouseX position X du chateau
	 * \param mouseY position Y du chateau
	 */
	Castle(int mouseX, int mouseY);

	/*! 
	 * \brief Destructeur de la classe Castle
	 */
	~Castle();

	/*!
	 * \brief Fonction permettant de dessiner un chateau à l'ecran
	 */
	virtual void draw();

	/*!
	 * \brief Fonction retournant le nombre de grains composant un chateau
	 */
	int getNbGrains();

	/*!
	 * \brief Fonction permettant la destruction de tous les blocs composant un chateau
	 */
	void destroy();
};

#endif