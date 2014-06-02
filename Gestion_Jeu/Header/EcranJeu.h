#pragma once

/*!
 * \file EcranJeu.h
 * \brief Gestion de l'ecran de jeu et de l'interaction avec le joueur
 * \author Quentin GROS, Claire REMY (ajouts), Thibault HUCKERT (ajouts)
 */
#include "PageJeu.h"
#include "Module_Chateau\Header\Castle.h"
#include "GestionnairePage.h"
#include "Module_Joueur/header/Joueur.h"
#include "Gestion_Jeu\Header\Menu_ameliorations.h"
#include "Gestion_Jeu\Header\Jeu.h"
#include "ScoreCounter.h"
#include "Menu_pause.h"
#include "Util/Header/EnumImg.h"


/*!
 * \class EcranJeu 
 * \brief Gestion de l'ecran de jeu et de l'interaction avec le joueur
 */
class EcranJeu : public PageJeu
{
private:
	ofPtr<Jeu> jeu; /*!< Pointeur vers le jeu */
	bool keyIsDown[4]; /*!< Tableau des touches appuyees */
	Fenetre *fenetre; /*!< Pointeur vers la fenetre */
public:
	/*!
	 * \brief Constructeur
	 */
	EcranJeu();

	/*!
	 * \brief Destructeur
	 */
	~EcranJeu();

	/*!
	 * \brief Fonction permettant d'acceder au joueur du jeu
	 */
	inline ofPtr<Joueur> getPlayer(){ return player; }

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

	ofPtr<Joueur> player; /*!< Joueur */

};

/*!
 * \enum _key
 * \brief Enumeration pour la gestion des touches appuyees
 * \author Claire REMY
 */
enum _key{
	LEFT, /*!< Touche gauche appuyee */
	UP, /*!< Touche haut appuyee */
	RIGHT, /*!< Touche droite appuyee */
	DOWN, /*!< Touche bas appuyee */
};