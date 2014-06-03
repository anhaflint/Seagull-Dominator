#pragma once

/*!
* \file Page_highscore.h
* \brief Classe permettant d'afficher le score à la fin d'une partie
* \author Thibault HUCKERT
*/
#include "PageJeu.h"
#include "EcranJeu.h"
#include "GestionnairePage.h"
#include "Util/header/functions.h"

/*!
* \class Page_highscore
* \brief Classe permettant d'afficher le score à la fin d'une partie
*/
class Page_highscore : public PageJeu
{
private:
	Fenetre *fenetre; /*!< Pointeur vers la fenetre */
	IMG select; /*!< Image à afficher */
	ofTrueTypeFont fontScore; /*!< Police d'ecriture score */


	Jeu *jeu; /*!< Pointeur vers le jeu */


public:
	/*!
	* \brief Constructeur
	* \param joueur Pointeur vers le jeu
	*/
	Page_highscore(Jeu* jeu);

	/*!
	* \brief Destructeur
	*/
	~Page_highscore();

	/*!
	* \brief Fonction de mise a jour du jeu
	*/
	virtual void update();

	/*!
	* \brief Fonction de dessin
	*/
	virtual void draw();

	/*!
	* \brief Fonction permettant de gerer l'appui sur une touche
	*/
	virtual void keyPressed(int key);

	/*!
	* \brief Fonction permettant de gerer les touches relachees
	*/
	virtual void keyReleased(int key);

	/*!
	* \brief Fonction permettant de gerer le deplacement de la souris
	*/
	virtual void mouseMoved(int x, int y);

	/*!
	* \brief Fonction permettant de gerer l'interaction avec la souris
	*/
	virtual void mouseDragged(int x, int y, int button);

	/*!
	* \brief Fonction permettant de gerer l'appui sur un bouton de la souris
	*/
	virtual void mousePressed(int x, int y, int button);

	/*!
	* \brief Fonction permettant de gerer le relachement d'un bouton de la souris
	*/
	virtual void mouseReleased(int x, int y, int button);

	/*!
	* \brief Fonction permettant de gerer la taille de la fenetre
	*/
	virtual void resized(int w, int h);
};

