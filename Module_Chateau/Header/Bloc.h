#ifndef _BLOC_H
#define _BLOC_H

/*!
 * \file Bloc.h
 * \brief Classe bloc composant un château
 * \author Claire REMY
 */


#include "ofxBox2d.h"
#include "ofMain.h"
#include "Module_Chateau\Header\Grains.h"
#include "Module_Chateau\Header\ObjetPhysique.h"
#include "Util\Header\Affichage.h"
#include "Gestion_Jeu\Header\GestionnairePage.h"

/*!
 * \class Bloc
 * \brief Classe bloc composant un château
 */
class Bloc : public ObjetPhysique {
protected : 
	int length; /*!< Longueur du bloc */
	int height; /*!< Hauteur du bloc */
	int nbGrains; /*!< Nombre de grains dans un bloc */
	Affichage *affichage; /*!< Pointeur vers une instance de classe Affichage afin de gérer les images */
	vector <ofPtr<Grains>> grains; /*!< Vecteur de grains composant le château */

public : 
	/*!
	 * \brief Constructeur de la classe Bloc
	 *
	 * \param length longueur du bloc
	 * \param height hauteur du bloc
	 * \param mouseX position du bloc en X
	 * \param mouseY position du bloc en Y
	 */
	Bloc(int length, int height, int mouseX, int mouseY);

	/*!
	 * \brief Fonction retournant le nombre de grains composant un château
	 */
	inline int getNbGrains(){ return length*height; }

	/*!
	 * \brief Fonction permettant de dessiner un bloc à l'écran
	 */
	virtual void draw();

	/*!
	 * \brief Fonction retournant la longueur d'un bloc
	 */
	inline int getLength() { return this->length; }

	/*!
	 * \brief Fonction retournant la hauteur d'un bloc
	 */
	inline int getHeight() { return this->height; }

	/*!
	 * \brief Fonction permettant la suppression d'un bloc
	 * Cette fonction supprime tous les grains composant un bloc
	 */
	void destroy();

	/*!
	 * Destructeur de la classe Bloc
	 */
	~Bloc();
};


#endif