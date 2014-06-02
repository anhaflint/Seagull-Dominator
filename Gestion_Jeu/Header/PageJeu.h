#pragma once

/*!
 * \file PageJeu.h
 * \brief Classe de gestion d'une page du jeu
 * \author Quentin GROS, Mounia HAMEDI (relecture)
 */
#include "Util\Header\Fenetre.h"


/*!
 * \class PageJeu
 * \brief Classe de gestion d'une page du jeu
 */
class PageJeu{

public:

	/*!
	* \brief Fonction permettant la mise a jour du jeu a chaque timestep
	* Fonctionnalite openFrameworks
	*/
	virtual void update();

	/*!
	* \brief Fonction permettant le dessin de l'ecran de jeu
	*/
	virtual void draw();


	/*!
	* \brief Fonction permettant de gerer les touches appuyees
	* \param key Touche appuyee
	*/
	virtual void keyPressed(int key);

	/*!
	* \brief Fonction permettant de gerer les touches liberees
	* \param key Touche liberee
	*/
	virtual void keyReleased(int key);

	/*!
	* \brief Fonction permettant de gerer le deplacement de la souris
	*/
	virtual void mouseMoved(int x, int y);

	/*!
	* \brief Fonction permettant de gerer les interactions de la souris avec l'ecran
	*/
	virtual void mouseDragged(int x, int y, int button);

	/*!
	* \brief Fonction permettant de gerer les appuis sur les boutons de la souris
	*/
	virtual void mousePressed(int x, int y, int button);

	/*!
	* \brief Fonction permettant de gerer les boutons relaches de la souris
	*/
	virtual void mouseReleased(int x, int y, int button);

	/*!
	* \brief Fonction permettant de gerer la taille de la fenetre
	*/
	virtual void resized(int w, int h);
};

