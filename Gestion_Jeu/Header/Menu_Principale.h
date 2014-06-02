#pragma once

/*!
 * \file Menu_Principale.h
 * \brief Classe de gestion du menu principal
 * \author Quentin GROS, Mounia HAMEDI (relecture)
 */
#include "PageJeu.h"
#include "EcranJeu.h"
#include "GestionnairePage.h"
#include "Util/Header/functions.h"


/*!
 * \class Menu_Principale 
 * \brief Classe de gestion du menu principal
 */
class Menu_Principale :	public PageJeu{

private:
	int intro = INTRO_0000; /*!< Image d'introduction */
	bool intro_fini = false; /*!< Booleen de l'etat de l'introduction */
	EcranJeu *ecranjeu; /*!< Pointeur vers l'ecran de jeu */

	/*!
	 * \enum Surligner
	 * \brief Enumeration pour connaitre la selection du joueur
	 */
	enum Surligner{
		AUCUN,
		JOUER,
		HIGH_SCORE,
		QUITTER
	};
	Fenetre *fenetre; /*!< Pointeur vers la fenetre */
	Surligner select; /*!< bouton selectionne */
public:
	/*!
	 * \brief Constructeur 
	 */
	Menu_Principale();

	/*!
	 * \brief Destructeur 
	 */
	~Menu_Principale();

	/*!
	 * \brief Fonction de mise a jour du jeu 
	 */
	virtual void update();

	/*!
	 * \brief Fonction de dessin
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

