#pragma once

/*!
 * \file Fenetre.h 
 * \brief Classe de gestion d'une fenetre
 * \author Quentin GROS, Mounia HAMEDI (relecture)
 */
#include "Affichage.h"
#include <string>


/*!
 * \class Fenetre
 * \brief Classe de gestion d'une fenetre
 */
class Fenetre
{
private:
	Affichage *affichage; /*< Pointeur vers l'instance de la classe Affichage afin de gerer les images */
public:
	/*!
	 * \brief Fonction d'affichage d'une fenetre
	 * \param IMG Image a afficher
	 * \param pos position
	 */
	void aff_fenetre(IMG, int, int);

	/*!
	 * \brief Constructeur
	 */
	Fenetre();
	
	/*!
	 * \brief Destructeur
	 */
	~Fenetre();
};

