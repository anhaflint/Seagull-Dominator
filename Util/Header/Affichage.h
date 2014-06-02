#pragma once

/*!
 * \file Affichage.h
 * \brief Classe de gestion de tout l'affichage du jeu
 * \author Quentin GROS, Claire REMY (relecture)
 */
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

/*!
 * \class Affichage
 * \brief Classe de gestion de tout l'affichage du jeu
 * Classe singleton
 */
class Affichage
{
public:
	/*!
	 * \brief Permet de recuperer l'instance courante
	 */
	static Affichage* Instance();

	/*!
	 * \brief Affiche l'image
	 *
	 * \param IMG image a afficher
	 * \param pos position
	 * \param largeur Largeur de l'image
	 * \param hauteur Hauteur de l'image
	 */
	void aff_img(IMG, ofVec2f, int, int);

	/*!
	 * \brief Affiche l'image avec des coordonnees
	 *
	 * \param IMG image a afficher
	 * \param x Position en x
	 * \param y Position en y
	 * \param largeur Largeur de l'image
	 * \param hauteur Hauteur de l'image
	 */
	void aff_img(IMG, int, int, int, int);

private:
	ofImage *demarrage_neutre; /*!< Ecran de demarrage neutre */
	ofImage *demarrage_jouer; /*!< Ecran de demarrage avec jouer en surbrillance */
	ofImage *demarrage_highscore; /*!< Ecrand des highscores */
	ofImage *demarrage_quitter; /*!< Ecran quitter*/

	ofImage *corde_plus; /*!< Ecran Corde plus */
	ofImage *corde_moins; /*!< Ecran Corde Moins */
	ofImage *mouette_plus; /*!< Ecran mouette plus */
	ofImage *mouette_moins; /*!< Ecran mouette moins */
	ofImage *boulet_plus; /*!< Ecran boulet plus */
	ofImage *boulet_moins; /*!< Ecran boulet moins */
	ofImage *confirmer; /*!< Ecran Confirmer */
	ofImage *amelioration_aucun; /*!< Ecran rien selectionne */

	ofImage *background; /*!< Fond durant jeu */
	ofImage *texture_grains; /*!< Texture des grains */

	ofImage *boulet; /*!< Image du boulet */

	ofImage *mouette_d0;/*!< Sprite mouette */
	ofImage *mouette_d1;/*!< Sprite mouette */
	ofImage *mouette_d2;/*!< Sprite mouette */
	ofImage *mouette_d3;/*!< Sprite mouette */
	ofImage *mouette_d4;/*!< Sprite mouette */
	ofImage *mouette_d5;/*!< Sprite mouette */
	ofImage *mouette_d6;/*!< Sprite mouette */
	ofImage *mouette_d7;/*!< Sprite mouette */
	ofImage *mouette_d8;/*!< Sprite mouette */
	ofImage *mouette_g0;/*!< Sprite mouette */
	ofImage *mouette_g1;/*!< Sprite mouette */
	ofImage *mouette_g2;/*!< Sprite mouette */
	ofImage *mouette_g3;/*!< Sprite mouette */
	ofImage *mouette_g4;/*!< Sprite mouette */
	ofImage *mouette_g5;/*!< Sprite mouette */
	ofImage *mouette_g6;/*!< Sprite mouette */
	ofImage *mouette_g7;/*!< Sprite mouette */
	ofImage *mouette_g8;/*!< Sprite mouette */

	ofImage *intro0000;/*!< Sprite intro */
	ofImage *intro0001;/*!< Sprite intro */
	ofImage *intro0002;/*!< Sprite intro */
	ofImage *intro0003;/*!< Sprite intro */
	ofImage *intro0004;/*!< Sprite intro */
	ofImage *intro0005;/*!< Sprite intro */
	ofImage *intro0006;/*!< Sprite intro */
	ofImage *intro0007;/*!< Sprite intro */
	ofImage *intro0008;/*!< Sprite intro */
	ofImage *intro0009;/*!< Sprite intro */
	ofImage *intro0010;/*!< Sprite intro */
	ofImage *intro0011;/*!< Sprite intro */
	ofImage *intro0012;/*!< Sprite intro */
	ofImage *intro0013;/*!< Sprite intro */
	ofImage *intro0014;/*!< Sprite intro */
	ofImage *intro0015;/*!< Sprite intro */
	ofImage *intro0016;/*!< Sprite intro */
	ofImage *intro0017;/*!< Sprite intro */
	ofImage *intro0018;/*!< Sprite intro */
	ofImage *intro0019;/*!< Sprite intro */
	ofImage *intro0020;/*!< Sprite intro */
	ofImage *intro0021;/*!< Sprite intro */
	ofImage *intro0022;/*!< Sprite intro */
	ofImage *intro0023;/*!< Sprite intro */
	ofImage *intro0024;/*!< Sprite intro */
	ofImage *intro0025;/*!< Sprite intro */
	ofImage *intro0026;/*!< Sprite intro */
	ofImage *intro0027;/*!< Sprite intro */
	ofImage *intro0028;/*!< Sprite intro */
	ofImage *intro0029;/*!< Sprite intro */
	ofImage *intro0030;/*!< Sprite intro */
	ofImage *intro0031;/*!< Sprite intro */
	ofImage *intro0032;/*!< Sprite intro */
	ofImage *intro0033;/*!< Sprite intro */
	ofImage *intro0034;/*!< Sprite intro */
	ofImage *intro0035;/*!< Sprite intro */
	ofImage *intro0036;/*!< Sprite intro */
	ofImage *intro0037;/*!< Sprite intro */
	ofImage *intro0038;/*!< Sprite intro */
	ofImage *intro0039;/*!< Sprite intro */
	ofImage *intro0040;/*!< Sprite intro */
	ofImage *intro0041;/*!< Sprite intro */
	ofImage *intro0042;/*!< Sprite intro */
	ofImage *intro0043;/*!< Sprite intro */
	ofImage *intro0044;/*!< Sprite intro */
	ofImage *intro0045;/*!< Sprite intro */
	ofImage *intro0046;/*!< Sprite intro */
	ofImage *intro0047;/*!< Sprite intro */
	ofImage *intro0048;/*!< Sprite intro */
	ofImage *intro0049;/*!< Sprite intro */
	ofImage *intro0050;/*!< Sprite intro */
	ofImage *intro0051;/*!< Sprite intro */
	ofImage *intro0052;/*!< Sprite intro */
	ofImage *intro0053;/*!< Sprite intro */
	ofImage *intro0054;/*!< Sprite intro */
	ofImage *intro0055;/*!< Sprite intro */
	ofImage *intro0056;/*!< Sprite intro */
	ofImage *intro0057;/*!< Sprite intro */
	ofImage *intro0058;/*!< Sprite intro */
	ofImage *intro0059;/*!< Sprite intro */
	ofImage *intro0060;/*!< Sprite intro */
	ofImage *intro0061;/*!< Sprite intro */
	ofImage *intro0062;/*!< Sprite intro */
	ofImage *intro0063;/*!< Sprite intro */
	ofImage *intro0064;/*!< Sprite intro */
	ofImage *intro0065;/*!< Sprite intro */
	ofImage *intro0066;/*!< Sprite intro */
	ofImage *intro0067;/*!< Sprite intro */
	ofImage *intro0068;/*!< Sprite intro */
	ofImage *intro0069;/*!< Sprite intro */
	ofImage *intro0070;/*!< Sprite intro */
	ofImage *intro0071;/*!< Sprite intro */
	ofImage *intro0072;/*!< Sprite intro */
	ofImage *intro0073;/*!< Sprite intro */
	ofImage *intro0074;/*!< Sprite intro */
	ofImage *intro0075;/*!< Sprite intro */
	ofImage *intro0076;/*!< Sprite intro */
	ofImage *intro0077;/*!< Sprite intro */
	ofImage *intro0078;/*!< Sprite intro */
	ofImage *intro0079;/*!< Sprite intro */
	ofImage *intro0080;/*!< Sprite intro */
	ofImage *intro0081;/*!< Sprite intro */
	ofImage *intro0082;/*!< Sprite intro */
	ofImage *intro0083;/*!< Sprite intro */
	ofImage *intro0084;/*!< Sprite intro */
	ofImage *intro0085;/*!< Sprite intro */
	ofImage *intro0086;/*!< Sprite intro */
	ofImage *intro0087;/*!< Sprite intro */
	ofImage *intro0088;/*!< Sprite intro */
	ofImage *intro0089;/*!< Sprite intro */
	ofImage *intro0090;/*!< Sprite intro */
	ofImage *intro0091;/*!< Sprite intro */
	ofImage *intro0092;/*!< Sprite intro */
	ofImage *intro0093;/*!< Sprite intro */
	ofImage *intro0094;/*!< Sprite intro */
	ofImage *intro0095;/*!< Sprite intro */
	ofImage *intro0096;/*!< Sprite intro */
	ofImage *intro0097;/*!< Sprite intro */
	ofImage *intro0098;/*!< Sprite intro */
	ofImage *intro0099;/*!< Sprite intro */
	ofImage *intro0100;/*!< Sprite intro */
	ofImage *intro0101;/*!< Sprite intro */
	ofImage *intro0102;/*!< Sprite intro */
	ofImage *intro0103;/*!< Sprite intro */
	ofImage *intro0104;/*!< Sprite intro */
	ofImage *intro0105;/*!< Sprite intro */
	ofImage *intro0106;/*!< Sprite intro */
	ofImage *intro0107;/*!< Sprite intro */
	ofImage *intro0108;/*!< Sprite intro */
	ofImage *intro0109;/*!< Sprite intro */
	ofImage *intro0110;/*!< Sprite intro */
	ofImage *intro0111;/*!< Sprite intro */
	ofImage *intro0112;/*!< Sprite intro */
	ofImage *intro0113;/*!< Sprite intro */
	ofImage *intro0114;/*!< Sprite intro */
	ofImage *intro0115;/*!< Sprite intro */
	ofImage *intro0116;/*!< Sprite intro */
	ofImage *intro0117;/*!< Sprite intro */
	ofImage *intro0118;/*!< Sprite intro */
	ofImage *intro0119;/*!< Sprite intro */
	ofImage *intro0120;/*!< Sprite intro */
	ofImage *intro0121;/*!< Sprite intro */
	ofImage *intro0122;/*!< Sprite intro */
	ofImage *intro0123;/*!< Sprite intro */
	ofImage *intro0124;/*!< Sprite intro */
	ofImage *intro0125;/*!< Sprite intro */
	ofImage *intro0126;/*!< Sprite intro */
	ofImage *intro0127;/*!< Sprite intro */
	ofImage *intro0128;/*!< Sprite intro */
	ofImage *intro0129;/*!< Sprite intro */
	ofImage *intro0130;/*!< Sprite intro */
	ofImage *intro0131;/*!< Sprite intro */
	ofImage *intro0132;/*!< Sprite intro */
	ofImage *intro0133;/*!< Sprite intro */
	ofImage *intro0134;/*!< Sprite intro */
	ofImage *intro0135;/*!< Sprite intro */
	ofImage *intro0136;/*!< Sprite intro */
	ofImage *intro0137;/*!< Sprite intro */
	ofImage *intro0138;/*!< Sprite intro */
	ofImage *intro0139;/*!< Sprite intro */
	ofImage *intro0140;/*!< Sprite intro */
	ofImage *intro0141;/*!< Sprite intro */
	ofImage *intro0142;/*!< Sprite intro */
	ofImage *intro0143;/*!< Sprite intro */
	ofImage *intro0144;/*!< Sprite intro */
	ofImage *intro0145;/*!< Sprite intro */
	ofImage *intro0146;/*!< Sprite intro */
	ofImage *intro0147;/*!< Sprite intro */
	ofImage *intro0148;/*!< Sprite intro */
	ofImage *intro0149;/*!< Sprite intro */
	ofImage *intro0150;/*!< Sprite intro */
	ofImage *intro0151;/*!< Sprite intro */
	ofImage *intro0152;/*!< Sprite intro */
	ofImage *intro0153;/*!< Sprite intro */
	ofImage *intro0154;/*!< Sprite intro */
	ofImage *intro0155;/*!< Sprite intro */
	ofImage *intro0156;/*!< Sprite intro */
	ofImage *intro0157;/*!< Sprite intro */
	ofImage *intro0158;/*!< Sprite intro */
	ofImage *intro0159;/*!< Sprite intro */
	ofImage *intro0160;/*!< Sprite intro */
	ofImage *intro0161;/*!< Sprite intro */
	ofImage *intro0162;/*!< Sprite intro */
	ofImage *intro0163;/*!< Sprite intro */
	ofImage *intro0164;/*!< Sprite intro */
	ofImage *intro0165;/*!< Sprite intro */
	ofImage *intro0166;/*!< Sprite intro */
	ofImage *intro0167;/*!< Sprite intro */
	ofImage *intro0168;/*!< Sprite intro */
	ofImage *intro0169;/*!< Sprite intro */
	ofImage *intro0170;/*!< Sprite intro */
	ofImage *intro0171;/*!< Sprite intro */
	ofImage *intro0172;/*!< Sprite intro */
	ofImage *intro0173;/*!< Sprite intro */
	ofImage *intro0174;/*!< Sprite intro */
	ofImage *intro0175;/*!< Sprite intro */
	ofImage *intro0176;/*!< Sprite intro */
	ofImage *intro0177;/*!< Sprite intro */
	ofImage *intro0178;/*!< Sprite intro */
	ofImage *intro0179;/*!< Sprite intro */
	ofImage *intro0180;/*!< Sprite intro */
	ofImage *intro0181;/*!< Sprite intro */
	ofImage *intro0182;/*!< Sprite intro */
	ofImage *intro0183;/*!< Sprite intro */
	ofImage *intro0184;/*!< Sprite intro */
	ofImage *intro0185;/*!< Sprite intro */
	ofImage *intro0186;/*!< Sprite intro */
	ofImage *intro0187;/*!< Sprite intro */
	ofImage *intro0188;/*!< Sprite intro */

	static Affichage *m_instance; /*!< L'instance unique */
	Affichage(); /*!< Constructeur privé */
	~Affichage(); /*!< Destructeur privé */
};

