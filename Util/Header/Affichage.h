#pragma once

#include "EnumImg.h"
#include "ofxBox2d.h"

/*
Procedure pour rajouter une nouvelle image dans le jeu : 

		-Rajouter un "ofImage NOM_DE_L'IMAGE" en attribut de la classe
		-Rajouter les deux lignes dans le constructeur concernant le chargement de l'image comme fait pour les autres images
		-Rajouter dans aff_img les lignes concernant votre image
		-Rajouter dans l'enumeration le nom de l'image pour l'appel dans le programme
		-Appeler dans le programme la methode aff_img(NOM_DE_L'IMAGE, POSITION, HAUTEUR, LARGEUR)

*/


class Affichage
{
public:
	static Affichage* Instance();									//Permet de recuperer l'instance courrante
	void aff_img(IMG, ofVec2f, int, int);		//Affiche l'image avec une position
	void aff_img(IMG, int, int, int, int);		//Affiche l'image avec des coordonnées

private:
	ofImage *demarrage_neutre;				//Ecran de demarrage neutre
	ofImage *demarrage_jouer;				//Ecran de demarrage avec jouer en surbrillance
	ofImage *demarrage_highscore;
	ofImage *demarrage_quitter;

	ofImage *corde_plus;
	ofImage *corde_moins;
	ofImage *mouette_plus;
	ofImage *mouette_moins;
	ofImage *boulet_plus;
	ofImage *boulet_moins;
	ofImage *confirmer;
	ofImage *amelioration_aucun;

	ofImage *background;					//Fond durant jeu
	ofImage *texture_grains;				//Texture des grains

	static Affichage *m_instance;			//L'instance unique
	Affichage();							//Constructeur privé
	~Affichage();							//Destructeur privé
};

