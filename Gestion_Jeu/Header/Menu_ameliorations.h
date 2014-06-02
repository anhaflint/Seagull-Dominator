#pragma once

/*!
 * \file Menu_ameliorations.h
 * \brief Classe permettant de gerer l'amelioration des attributs du joueur 
 * \author Thibault HUCKERT, Quentin GROS (édition)
 */
#include "PageJeu.h"
#include "EcranJeu.h"
#include "GestionnairePage.h"
#include "Util/header/functions.h"

/*!
 * \class Menu_ameliorations
 * \brief Classe permettant de gerer l'amelioration des attributs du joueur
 */
class Menu_ameliorations : public PageJeu
{
private:
	Fenetre *fenetre; /*!< Pointeur vers la fenetre */
	IMG select; /*!< Image selectionnee */
	ofTrueTypeFont fontBoulet; /*!< Police d'ecriture boulet */
	ofTrueTypeFont fontMouette; /*!< Police d'ecriture mouette */
	ofTrueTypeFont fontCorde; /*!< Police d'ecriture corde */

	Joueur *joueur; /*!< Pointeur vers le joueur */
	int compteurBoulet; /*!< Compteur des attributs du boulet */
	int compteurCorde; /*!< Compteur des attributs de la corde */
	int compteurMouette; /*!< Compteur des attributs de la mouette */

public:
	/*! 
	 * \brief Constructeur 
	 * \param joueur Pointeur vers le joueur 
	 */
	Menu_ameliorations(Joueur* joueur);

	/*!
	 * \brief Destructeur 
	 */
	~Menu_ameliorations();

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

