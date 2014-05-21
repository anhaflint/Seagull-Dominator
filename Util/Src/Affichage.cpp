#include <iostream>
#include "Util\Header\Affichage.h"
#include "ofxBox2d.h"
#include "Util/Header/functions.h"

using namespace std;

Affichage *Affichage::m_instance = NULL;				//Initialisation à null du ptr d'instance

Affichage::Affichage()	//Constructeur appelé par instance une seule et unique fois
{
	this->demarrage_neutre = new ofImage;
	this->demarrage_neutre->loadImage(getAbsolutePath("Ecran_demarrage_neutre.png"));
	this->demarrage_jouer = new ofImage;
	this->demarrage_jouer->loadImage(getAbsolutePath("Ecran_demarrage_jouer.png"));
	this->background = new ofImage;
	this->background->loadImage(getAbsolutePath("background.gif"));
	this->texture_grains = new ofImage;
	this->texture_grains->loadImage(getAbsolutePath("sable.gif"));
	this->demarrage_highscore = new ofImage;
	this->demarrage_highscore->loadImage(getAbsolutePath("Ecran_demarrage_highscore.png"));
	this->demarrage_quitter = new ofImage;
	this->demarrage_quitter->loadImage(getAbsolutePath("Ecran_demarrage_quitter.png"));
	this->corde_plus = new ofImage;
	this->corde_plus->loadImage(getAbsolutePath("amelioration_corde_plus.png"));
	this->corde_moins = new ofImage;
	this->corde_moins->loadImage(getAbsolutePath("amelioration_corde_moins.png"));
	this->mouette_plus = new ofImage;
	this->mouette_plus->loadImage(getAbsolutePath("amelioration_mouette_plus.png"));
	this->mouette_moins = new ofImage;
	this->mouette_moins->loadImage(getAbsolutePath("amelioration_mouette_moins.png"));
	this->boulet_plus = new ofImage;
	this->boulet_plus->loadImage(getAbsolutePath("amelioration_boulet_plus.png"));
	this->boulet_moins = new ofImage;
	this->boulet_moins->loadImage(getAbsolutePath("amelioration_boulet_moins.png"));
	this->confirmer = new ofImage;
	this->confirmer->loadImage(getAbsolutePath("amelioration_ok.png"));
	this->amelioration_aucun = new ofImage;
	this->amelioration_aucun->loadImage(getAbsolutePath("amelioration_aucun.png"));

}

Affichage::~Affichage()				//Destructeur
{
}

Affichage* Affichage::Instance()				//Creation et renvoi de l'instance quand celle-ci est deja cree
{
	if (NULL == m_instance)
	{
		m_instance = new Affichage();
	}
	return m_instance;
}

void Affichage::aff_img(IMG img,ofVec2f pos,int largeur, int hauteur)
{
	aff_img(img, pos.x, pos.y, largeur, hauteur);
}

void Affichage::aff_img(IMG img, int x, int y, int largeur, int hauteur)
{
	switch (img)
	{
	case DEMARRAGE_NEUTRE:
		this->demarrage_neutre->draw(x, y, largeur, hauteur);
		break;

	case DEMARRAGE_JOUER:
		this->demarrage_jouer->draw(x, y, largeur, hauteur);
		break;

	case DEMARRAGE_HIGHSCORE:
		this->demarrage_highscore->draw(x, y, largeur, hauteur);
		break;

	case DEMARRAGE_QUITTER:
		this->demarrage_quitter->draw(x, y, largeur, hauteur);
		break;

	case CORDE_PLUS:
		this->corde_plus->draw(x, y, largeur, hauteur);
		break;

	case CORDE_MOINS:
		this->corde_moins->draw(x, y, largeur, hauteur);
		break;

	case BOULET_PLUS:
		this->boulet_plus->draw(x, y, largeur, hauteur);
		break;

	case BOULET_MOINS:
		this->boulet_moins->draw(x, y, largeur, hauteur);
		break;

	case MOUETTE_PLUS:
		this->mouette_plus->draw(x, y, largeur, hauteur);
		break;

	case MOUETTE_MOINS:
		this->mouette_moins->draw(x, y, largeur, hauteur);
		break;

	case CONFIRMER:
		this->confirmer->draw(x, y, largeur, hauteur);
		break;

	case AMELIORATION_AUCUN:
		this->amelioration_aucun->draw(x, y, largeur, hauteur);
		break;

	case BACKGROUND:
		this->background->draw(x, y, largeur, hauteur);
		break;

	case TEXTURE_GRAINS:
		this->texture_grains->draw(x, y, largeur, hauteur);
		break;

	default:
		cout << "Error aff_img : no picture specified" << endl;
		break;
	}
}