#pragma once

/*!
 * \file Jeu.h
 * \brief Gestion du jeu 
 * \author Quentin GROS, Claire REMY (ajouts), Thibault HUCKERT (ajouts)
 */
#include "../example-Simple/src/Module_Chateau/Header/Castle.h"
#include "ScoreCounter.h"


#define EMPLACEMENT_CHATEAU 8 /*!< Nombre de chateaux dans une page de jeu */

/*!
 * \class Jeu
 * \brief Gestion du jeu 
 */
class Jeu
{
private:
	int season; /*!< Saison en cours */
	float time; /*!< Temps */
	int score; /*!< Score*/
	int point; /*!< point */
	int year; /*!< Annee en cours*/
	ofPtr<b2Vec2> DownPos[EMPLACEMENT_CHATEAU], UpPos[EMPLACEMENT_CHATEAU]; /*!< Tableaux de positions des chateaux */
	int prevCallBackSize; /*!< CallBack precedent pour compter les points */
	int currentCallBackSize; /*!< Callback courant pour compter les points */

public:
	/*!
	 * \brief Fonction d'incrementation du temps et d'incrementation des saisons et annees
	 */
	bool maybeNewYear();

	/*!
	 * \brief Fonction permettant de decider si un nouveau chateau peut etre affiche a l'ecran
	 */
	void NewChateaux();

	/*!
	 * \brief Fonction permettant de dessiner un chateau a l'ecran
	 */
	void drawChateau();

	/*!
	 * \brief Fonction permettant d'initialiser le jeu
	 */
	void initJeu();

	/*!
	 * \brief Fonction permettant d'acceder au nombre d'annee du jeu
	 */
	inline int getYearNumber() { return year; }

	/*!
	 * \brief Constructeur
	 */
	Jeu();

	/*!
	 * \brief Destructeur 
	 */
	~Jeu();

	ofPtr<Castle> tabCastle[EMPLACEMENT_CHATEAU]; /*!< Tableau des chateaux */
	bool over(); /*!< */

	/*!
	* \brief Accesseur vers le score du jeu
	*/
	int getScore();

	/*!
	* \brief Setter vers le score du jeu
	*/
	void setScore(int score);


};

/*!
 * \enum seasons
 * \brief Gestion des saisons du jeu 
 * \author Quentin GROS, Claire REMY (relecture)
 */
enum seasons{
	SPRING,
	SUMMER,
	FALL,
	WINTER
};