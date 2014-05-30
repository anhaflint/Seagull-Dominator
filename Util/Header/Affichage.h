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

	ofImage *boulet;

	ofImage *mouette_d0;
	ofImage *mouette_d1;
	ofImage *mouette_d2;
	ofImage *mouette_d3;
	ofImage *mouette_d4;
	ofImage *mouette_d5;
	ofImage *mouette_d6;
	ofImage *mouette_d7;
	ofImage *mouette_d8;
	ofImage *mouette_g0;
	ofImage *mouette_g1;
	ofImage *mouette_g2;
	ofImage *mouette_g3;
	ofImage *mouette_g4;
	ofImage *mouette_g5;
	ofImage *mouette_g6;
	ofImage *mouette_g7;
	ofImage *mouette_g8;

	ofImage *intro0000;
	ofImage *intro0001;
	ofImage *intro0002;
	ofImage *intro0003;
	ofImage *intro0004;
	ofImage *intro0005;
	ofImage *intro0006;
	ofImage *intro0007;
	ofImage *intro0008;
	ofImage *intro0009;
	ofImage *intro0010;
	ofImage *intro0011;
	ofImage *intro0012;
	ofImage *intro0013;
	ofImage *intro0014;
	ofImage *intro0015;
	ofImage *intro0016;
	ofImage *intro0017;
	ofImage *intro0018;
	ofImage *intro0019;
	ofImage *intro0020;
	ofImage *intro0021;
	ofImage *intro0022;
	ofImage *intro0023;
	ofImage *intro0024;
	ofImage *intro0025;
	ofImage *intro0026;
	ofImage *intro0027;
	ofImage *intro0028;
	ofImage *intro0029;
	ofImage *intro0030;
	ofImage *intro0031;
	ofImage *intro0032;
	ofImage *intro0033;
	ofImage *intro0034;
	ofImage *intro0035;
	ofImage *intro0036;
	ofImage *intro0037;
	ofImage *intro0038;
	ofImage *intro0039;
	ofImage *intro0040;
	ofImage *intro0041;
	ofImage *intro0042;
	ofImage *intro0043;
	ofImage *intro0044;
	ofImage *intro0045;
	ofImage *intro0046;
	ofImage *intro0047;
	ofImage *intro0048;
	ofImage *intro0049;
	ofImage *intro0050;
	ofImage *intro0051;
	ofImage *intro0052;
	ofImage *intro0053;
	ofImage *intro0054;
	ofImage *intro0055;
	ofImage *intro0056;
	ofImage *intro0057;
	ofImage *intro0058;
	ofImage *intro0059;
	ofImage *intro0060;
	ofImage *intro0061;
	ofImage *intro0062;
	ofImage *intro0063;
	ofImage *intro0064;
	ofImage *intro0065;
	ofImage *intro0066;
	ofImage *intro0067;
	ofImage *intro0068;
	ofImage *intro0069;
	ofImage *intro0070;
	ofImage *intro0071;
	ofImage *intro0072;
	ofImage *intro0073;
	ofImage *intro0074;
	ofImage *intro0075;
	ofImage *intro0076;
	ofImage *intro0077;
	ofImage *intro0078;
	ofImage *intro0079;
	ofImage *intro0080;
	ofImage *intro0081;
	ofImage *intro0082;
	ofImage *intro0083;
	ofImage *intro0084;
	ofImage *intro0085;
	ofImage *intro0086;
	ofImage *intro0087;
	ofImage *intro0088;
	ofImage *intro0089;
	ofImage *intro0090;
	ofImage *intro0091;
	ofImage *intro0092;
	ofImage *intro0093;
	ofImage *intro0094;
	ofImage *intro0095;
	ofImage *intro0096;
	ofImage *intro0097;
	ofImage *intro0098;
	ofImage *intro0099;
	ofImage *intro0100;
	ofImage *intro0101;
	ofImage *intro0102;
	ofImage *intro0103;
	ofImage *intro0104;
	ofImage *intro0105;
	ofImage *intro0106;
	ofImage *intro0107;
	ofImage *intro0108;
	ofImage *intro0109;
	ofImage *intro0110;
	ofImage *intro0111;
	ofImage *intro0112;
	ofImage *intro0113;
	ofImage *intro0114;
	ofImage *intro0115;
	ofImage *intro0116;
	ofImage *intro0117;
	ofImage *intro0118;
	ofImage *intro0119;
	ofImage *intro0120;
	ofImage *intro0121;
	ofImage *intro0122;
	ofImage *intro0123;
	ofImage *intro0124;
	ofImage *intro0125;
	ofImage *intro0126;
	ofImage *intro0127;
	ofImage *intro0128;
	ofImage *intro0129;
	ofImage *intro0130;
	ofImage *intro0131;
	ofImage *intro0132;
	ofImage *intro0133;
	ofImage *intro0134;
	ofImage *intro0135;
	ofImage *intro0136;
	ofImage *intro0137;
	ofImage *intro0138;
	ofImage *intro0139;
	ofImage *intro0140;
	ofImage *intro0141;
	ofImage *intro0142;
	ofImage *intro0143;
	ofImage *intro0144;
	ofImage *intro0145;
	ofImage *intro0146;
	ofImage *intro0147;
	ofImage *intro0148;
	ofImage *intro0149;
	ofImage *intro0150;
	ofImage *intro0151;
	ofImage *intro0152;
	ofImage *intro0153;
	ofImage *intro0154;
	ofImage *intro0155;
	ofImage *intro0156;
	ofImage *intro0157;
	ofImage *intro0158;
	ofImage *intro0159;
	ofImage *intro0160;
	ofImage *intro0161;
	ofImage *intro0162;
	ofImage *intro0163;
	ofImage *intro0164;
	ofImage *intro0165;
	ofImage *intro0166;
	ofImage *intro0167;
	ofImage *intro0168;
	ofImage *intro0169;
	ofImage *intro0170;
	ofImage *intro0171;
	ofImage *intro0172;
	ofImage *intro0173;
	ofImage *intro0174;
	ofImage *intro0175;
	ofImage *intro0176;
	ofImage *intro0177;
	ofImage *intro0178;
	ofImage *intro0179;
	ofImage *intro0180;
	ofImage *intro0181;
	ofImage *intro0182;
	ofImage *intro0183;
	ofImage *intro0184;
	ofImage *intro0185;
	ofImage *intro0186;
	ofImage *intro0187;
	ofImage *intro0188;

	static Affichage *m_instance;			//L'instance unique
	Affichage();							//Constructeur privé
	~Affichage();							//Destructeur privé
};

