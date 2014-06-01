#ifndef _CASTLE_H
#define _CASTLE_H


/*!
 * \file Castle.h
 * \brief Classe ch�teau
 * \author Claire REMY
 */
#include "ofMain.h"
#include "ofxBox2d.h"
#include "Module_Chateau\Header\Bloc.h"

/*! 
 * \class Castle
 * \brief Classe ch�teau
 */
class Castle : public ObjetPhysique {
protected :
	ofPtr<Bloc> base; /*!< Pointeur vers le bloc de base */
	ofPtr<Bloc> med; /*!< Pointeur vers le bloc interm�diaire */
	ofPtr<Bloc> top;  /*!< Pointeur vers le dernier bloc */
	int nbGrains; /*!< Nombre de grains composant le ch�teau */

public :
	/*!
	 * \brief Constructeur de la classe Castle
	 * 
	 * \param mouseX position X du ch�teau
	 * \param mouseY position Y du ch�teau
	 */
	Castle(int mouseX, int mouseY);

	/*! 
	 * \brief Destructeur de la classe Castle
	 */
	~Castle();

	/*!
	 * \brief Fonction permettant de dessiner un ch�teau � l'�cran
	 */
	virtual void draw();

	/*!
	 * \brief Fonction retournant le nombre de grains composant un ch�teau
	 */
	int getNbGrains();

	/*!
	 * \brief Fonction permettant la destruction de tous les blocs composant un ch�teau
	 */
	void destroy();
};

#endif