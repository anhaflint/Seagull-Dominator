#pragma once

/*!
 * \file Joueur.h
 * \brief Classe permettant de gerer le joueur et de le creer
 * \author Claire REMY, Quentin GROS (relecture)
 */
#include "ofMain.h"
#include "ofxBox2d.h"
#include "Module_Mouette/header/Mouette.h"
#include "Module_Corde/header/Rope.h"


/*!
 * \class Joueur
 * \brief Classe permettant de gerer le joueur et de le creer
 */
class Joueur {
private :
	string name; /*!< Nom du joueur, pas encore utilise */
	unsigned int score; /*!< Score du joueur */
	ofPtr<Rope> rope; /*!< Corde du joueur */
	ofPtr<Mouette> mouette; /*!< Mouette que manipule le joueur*/

public :
	/*!
	 * \brief Constructeur
	 * \param box2d le monde du jeu
	 */
	Joueur(ofxBox2d& box2d);

	/*!
	 * \brief Destructeur
	 */
	~Joueur();

	/*!
	 * \brief Fonction qui dessine le joueur
	 */
	virtual void draw();

	/*!
	 * \brief fonction permettant de faire bouger le joueur
	 * \param x Vitesse en x
	 * \param y Vitesse en y
 	 */
	void move(float, float);

	/*!
	 * \brief Fonction permettant de supprimer le joueur 
	 */
	void destroy();

	/*!
	 * \brief Accesseur vers le mouette
	 */
	inline ofPtr<Mouette> getMouette(){ return mouette; }

	/*!
	 * \brief Accesseur vers la force de la mouette
	 */
	int getForceMouette();

	/*!
	 * \brief Accesseur vers la taille de la corde
	 */
	int getTailleCorde();

	/*!
	 * \brief Accesseur vers la taille du boulet
	 */
	int getTailleBoulet();

	/*!
	 * \brief Setter de la force de la mouette
	 */
	void setForceMouette(int);

	/*!
	 * \brief Setter de la taille de la corde
	 */
	void setTailleCorde(int);

	/*!
	 * \brief Setter de la taille du boulet
	 */
	void setTailleBoulet(int);
};