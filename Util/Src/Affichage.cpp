/*!
* \file Affichage.h
* \brief Classe de gestion de tout l'affichage du jeu
* \author Quentin GROS, Claire REMY (relecture)
*/

#include <iostream>
#include "Util\Header\Affichage.h"
#include "ofxBox2d.h"
#include "Util/Header/functions.h"


using namespace std;

Affichage *Affichage::m_instance = NULL;				//Initialisation à null du ptr d'instance

Affichage::Affichage()	//Constructeur appelé par instance une seule et unique fois
{
	printf("Loading files\n");
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
	this->boulet = new ofImage;
	this->boulet->loadImage(getAbsolutePath("boulet.png"));

	this->pause_neutre = new ofImage;
	this->pause_neutre->loadImage(getAbsolutePath("Pause_neutre.png"));
	
	this->pause_reprendre = new ofImage;
	this->pause_reprendre->loadImage(getAbsolutePath("Pause_reprendre.png"));

	this->pause_quitter = new ofImage;
	this->pause_quitter->loadImage(getAbsolutePath("Pause_quitter.png"));

	this->mouette_d0 = new ofImage;
	this->mouette_d0->loadImage(getAbsolutePath("sprite_mouette/Mouette_D0.png"));
	this->mouette_d1 = new ofImage;
	this->mouette_d1->loadImage(getAbsolutePath("sprite_mouette/Mouette_D1.png"));
	this->mouette_d2 = new ofImage;
	this->mouette_d2->loadImage(getAbsolutePath("sprite_mouette/Mouette_D2.png"));
	this->mouette_d3 = new ofImage;
	this->mouette_d3->loadImage(getAbsolutePath("sprite_mouette/Mouette_D3.png"));
	this->mouette_d4 = new ofImage;
	this->mouette_d4->loadImage(getAbsolutePath("sprite_mouette/Mouette_D4.png"));
	this->mouette_d5 = new ofImage;
	this->mouette_d5->loadImage(getAbsolutePath("sprite_mouette/Mouette_D5.png"));
	this->mouette_d6 = new ofImage;
	this->mouette_d6->loadImage(getAbsolutePath("sprite_mouette/Mouette_D6.png"));
	this->mouette_d7 = new ofImage;
	this->mouette_d7->loadImage(getAbsolutePath("sprite_mouette/Mouette_D7.png"));
	this->mouette_d8 = new ofImage;
	this->mouette_d8->loadImage(getAbsolutePath("sprite_mouette/Mouette_D8.png"));
	this->mouette_g0 = new ofImage;
	this->mouette_g0->loadImage(getAbsolutePath("sprite_mouette/Mouette_G0.png"));
	this->mouette_g1 = new ofImage;
	this->mouette_g1->loadImage(getAbsolutePath("sprite_mouette/Mouette_G1.png"));
	this->mouette_g2 = new ofImage;
	this->mouette_g2->loadImage(getAbsolutePath("sprite_mouette/Mouette_G2.png"));
	this->mouette_g3 = new ofImage;
	this->mouette_g3->loadImage(getAbsolutePath("sprite_mouette/Mouette_G3.png"));
	this->mouette_g4 = new ofImage;
	this->mouette_g4->loadImage(getAbsolutePath("sprite_mouette/Mouette_G4.png"));
	this->mouette_g5 = new ofImage;
	this->mouette_g5->loadImage(getAbsolutePath("sprite_mouette/Mouette_G5.png"));
	this->mouette_g6 = new ofImage;
	this->mouette_g6->loadImage(getAbsolutePath("sprite_mouette/Mouette_G6.png"));
	this->mouette_g7 = new ofImage;
	this->mouette_g7->loadImage(getAbsolutePath("sprite_mouette/Mouette_G7.png"));
	this->mouette_g8 = new ofImage;
	this->mouette_g8->loadImage(getAbsolutePath("sprite_mouette/Mouette_G8.png"));

	this->intro0000 = new ofImage;
	this->intro0000->loadImage(getAbsolutePath("intro_mouette/intro0000.jpeg"));
	this->intro0001 = new ofImage;
	this->intro0001->loadImage(getAbsolutePath("intro_mouette/intro0001.jpeg"));
	this->intro0002 = new ofImage;
	this->intro0002->loadImage(getAbsolutePath("intro_mouette/intro0002.jpeg"));
	this->intro0003 = new ofImage;
	this->intro0003->loadImage(getAbsolutePath("intro_mouette/intro0003.jpeg"));
	this->intro0004 = new ofImage;
	this->intro0004->loadImage(getAbsolutePath("intro_mouette/intro0004.jpeg"));
	this->intro0005 = new ofImage;
	this->intro0005->loadImage(getAbsolutePath("intro_mouette/intro0005.jpeg"));
	this->intro0006 = new ofImage;
	this->intro0006->loadImage(getAbsolutePath("intro_mouette/intro0006.jpeg"));
	this->intro0007 = new ofImage;
	this->intro0007->loadImage(getAbsolutePath("intro_mouette/intro0007.jpeg"));
	this->intro0008 = new ofImage;
	this->intro0008->loadImage(getAbsolutePath("intro_mouette/intro0008.jpeg"));
	this->intro0009 = new ofImage;
	this->intro0009->loadImage(getAbsolutePath("intro_mouette/intro0009.jpeg"));
	this->intro0010 = new ofImage;
	this->intro0010->loadImage(getAbsolutePath("intro_mouette/intro0010.jpeg"));
	this->intro0011 = new ofImage;
	this->intro0011->loadImage(getAbsolutePath("intro_mouette/intro0011.jpeg"));
	this->intro0012 = new ofImage;
	this->intro0012->loadImage(getAbsolutePath("intro_mouette/intro0012.jpeg"));
	this->intro0013 = new ofImage;
	this->intro0013->loadImage(getAbsolutePath("intro_mouette/intro0013.jpeg"));
	this->intro0014 = new ofImage;
	this->intro0014->loadImage(getAbsolutePath("intro_mouette/intro0014.jpeg"));
	this->intro0015 = new ofImage;
	this->intro0015->loadImage(getAbsolutePath("intro_mouette/intro0015.jpeg"));
	this->intro0016 = new ofImage;
	this->intro0016->loadImage(getAbsolutePath("intro_mouette/intro0016.jpeg"));
	this->intro0017 = new ofImage;
	this->intro0017->loadImage(getAbsolutePath("intro_mouette/intro0017.jpeg"));
	this->intro0018 = new ofImage;
	this->intro0018->loadImage(getAbsolutePath("intro_mouette/intro0018.jpeg"));
	this->intro0019 = new ofImage;
	this->intro0019->loadImage(getAbsolutePath("intro_mouette/intro0019.jpeg"));
	this->intro0020 = new ofImage;
	this->intro0020->loadImage(getAbsolutePath("intro_mouette/intro0020.jpeg"));
	this->intro0021 = new ofImage;
	this->intro0021->loadImage(getAbsolutePath("intro_mouette/intro0021.jpeg"));
	this->intro0022 = new ofImage;
	this->intro0022->loadImage(getAbsolutePath("intro_mouette/intro0022.jpeg"));
	this->intro0023 = new ofImage;
	this->intro0023->loadImage(getAbsolutePath("intro_mouette/intro0023.jpeg"));
	this->intro0024 = new ofImage;
	this->intro0024->loadImage(getAbsolutePath("intro_mouette/intro0024.jpeg"));
	this->intro0025 = new ofImage;
	this->intro0025->loadImage(getAbsolutePath("intro_mouette/intro0025.jpeg"));
	this->intro0026 = new ofImage;
	this->intro0026->loadImage(getAbsolutePath("intro_mouette/intro0026.jpeg"));
	this->intro0027 = new ofImage;
	this->intro0027->loadImage(getAbsolutePath("intro_mouette/intro0027.jpeg"));
	this->intro0028 = new ofImage;
	this->intro0028->loadImage(getAbsolutePath("intro_mouette/intro0028.jpeg"));
	this->intro0029 = new ofImage;
	this->intro0029->loadImage(getAbsolutePath("intro_mouette/intro0029.jpeg"));
	this->intro0030 = new ofImage;
	this->intro0030->loadImage(getAbsolutePath("intro_mouette/intro0030.jpeg"));
	this->intro0031 = new ofImage;
	this->intro0031->loadImage(getAbsolutePath("intro_mouette/intro0031.jpeg"));
	this->intro0032 = new ofImage;
	this->intro0032->loadImage(getAbsolutePath("intro_mouette/intro0032.jpeg"));
	this->intro0033 = new ofImage;
	this->intro0033->loadImage(getAbsolutePath("intro_mouette/intro0033.jpeg"));
	this->intro0034 = new ofImage;
	this->intro0034->loadImage(getAbsolutePath("intro_mouette/intro0034.jpeg"));
	this->intro0035 = new ofImage;
	this->intro0035->loadImage(getAbsolutePath("intro_mouette/intro0035.jpeg"));
	this->intro0036 = new ofImage;
	this->intro0036->loadImage(getAbsolutePath("intro_mouette/intro0036.jpeg"));
	this->intro0037 = new ofImage;
	this->intro0037->loadImage(getAbsolutePath("intro_mouette/intro0037.jpeg"));
	this->intro0038 = new ofImage;
	this->intro0038->loadImage(getAbsolutePath("intro_mouette/intro0038.jpeg"));
	this->intro0039 = new ofImage;
	this->intro0039->loadImage(getAbsolutePath("intro_mouette/intro0039.jpeg"));
	this->intro0040 = new ofImage;
	this->intro0040->loadImage(getAbsolutePath("intro_mouette/intro0040.jpeg"));
	this->intro0041 = new ofImage;
	this->intro0041->loadImage(getAbsolutePath("intro_mouette/intro0041.jpeg"));
	this->intro0042 = new ofImage;
	this->intro0042->loadImage(getAbsolutePath("intro_mouette/intro0042.jpeg"));
	this->intro0043 = new ofImage;
	this->intro0043->loadImage(getAbsolutePath("intro_mouette/intro0043.jpeg"));
	this->intro0044 = new ofImage;
	this->intro0044->loadImage(getAbsolutePath("intro_mouette/intro0044.jpeg"));
	this->intro0045 = new ofImage;
	this->intro0045->loadImage(getAbsolutePath("intro_mouette/intro0045.jpeg"));
	this->intro0046 = new ofImage;
	this->intro0046->loadImage(getAbsolutePath("intro_mouette/intro0046.jpeg"));
	this->intro0047 = new ofImage;
	this->intro0047->loadImage(getAbsolutePath("intro_mouette/intro0047.jpeg"));
	this->intro0048 = new ofImage;
	this->intro0048->loadImage(getAbsolutePath("intro_mouette/intro0048.jpeg"));
	this->intro0049 = new ofImage;
	this->intro0049->loadImage(getAbsolutePath("intro_mouette/intro0049.jpeg"));
	this->intro0050 = new ofImage;
	this->intro0050->loadImage(getAbsolutePath("intro_mouette/intro0050.jpeg"));
	this->intro0051 = new ofImage;
	this->intro0051->loadImage(getAbsolutePath("intro_mouette/intro0051.jpeg"));
	this->intro0052 = new ofImage;
	this->intro0052->loadImage(getAbsolutePath("intro_mouette/intro0052.jpeg"));
	this->intro0053 = new ofImage;
	this->intro0053->loadImage(getAbsolutePath("intro_mouette/intro0053.jpeg"));
	this->intro0054 = new ofImage;
	this->intro0054->loadImage(getAbsolutePath("intro_mouette/intro0054.jpeg"));
	this->intro0055 = new ofImage;
	this->intro0055->loadImage(getAbsolutePath("intro_mouette/intro0055.jpeg"));
	this->intro0056 = new ofImage;
	this->intro0056->loadImage(getAbsolutePath("intro_mouette/intro0056.jpeg"));
	this->intro0057 = new ofImage;
	this->intro0057->loadImage(getAbsolutePath("intro_mouette/intro0057.jpeg"));
	this->intro0058 = new ofImage;
	this->intro0058->loadImage(getAbsolutePath("intro_mouette/intro0058.jpeg"));
	this->intro0059 = new ofImage;
	this->intro0059->loadImage(getAbsolutePath("intro_mouette/intro0059.jpeg"));
	this->intro0060 = new ofImage;
	this->intro0060->loadImage(getAbsolutePath("intro_mouette/intro0060.jpeg"));
	this->intro0061 = new ofImage;
	this->intro0061->loadImage(getAbsolutePath("intro_mouette/intro0061.jpeg"));
	this->intro0062 = new ofImage;
	this->intro0062->loadImage(getAbsolutePath("intro_mouette/intro0062.jpeg"));
	this->intro0063 = new ofImage;
	this->intro0063->loadImage(getAbsolutePath("intro_mouette/intro0063.jpeg"));
	this->intro0064 = new ofImage;
	this->intro0064->loadImage(getAbsolutePath("intro_mouette/intro0064.jpeg"));
	this->intro0065 = new ofImage;
	this->intro0065->loadImage(getAbsolutePath("intro_mouette/intro0065.jpeg"));
	this->intro0066 = new ofImage;
	this->intro0066->loadImage(getAbsolutePath("intro_mouette/intro0066.jpeg"));
	this->intro0067 = new ofImage;
	this->intro0067->loadImage(getAbsolutePath("intro_mouette/intro0067.jpeg"));
	this->intro0068 = new ofImage;
	this->intro0068->loadImage(getAbsolutePath("intro_mouette/intro0068.jpeg"));
	this->intro0069 = new ofImage;
	this->intro0069->loadImage(getAbsolutePath("intro_mouette/intro0069.jpeg"));
	this->intro0070 = new ofImage;
	this->intro0070->loadImage(getAbsolutePath("intro_mouette/intro0070.jpeg"));
	this->intro0071 = new ofImage;
	this->intro0071->loadImage(getAbsolutePath("intro_mouette/intro0071.jpeg"));
	this->intro0072 = new ofImage;
	this->intro0072->loadImage(getAbsolutePath("intro_mouette/intro0072.jpeg"));
	this->intro0073 = new ofImage;
	this->intro0073->loadImage(getAbsolutePath("intro_mouette/intro0073.jpeg"));
	this->intro0074 = new ofImage;
	this->intro0074->loadImage(getAbsolutePath("intro_mouette/intro0074.jpeg"));
	this->intro0075 = new ofImage;
	this->intro0075->loadImage(getAbsolutePath("intro_mouette/intro0075.jpeg"));
	this->intro0076 = new ofImage;
	this->intro0076->loadImage(getAbsolutePath("intro_mouette/intro0076.jpeg"));
	this->intro0077 = new ofImage;
	this->intro0077->loadImage(getAbsolutePath("intro_mouette/intro0077.jpeg"));
	this->intro0078 = new ofImage;
	this->intro0078->loadImage(getAbsolutePath("intro_mouette/intro0078.jpeg"));
	this->intro0079 = new ofImage;
	this->intro0079->loadImage(getAbsolutePath("intro_mouette/intro0079.jpeg"));
	this->intro0080 = new ofImage;
	this->intro0080->loadImage(getAbsolutePath("intro_mouette/intro0080.jpeg"));
	this->intro0081 = new ofImage;
	this->intro0081->loadImage(getAbsolutePath("intro_mouette/intro0081.jpeg"));
	this->intro0082 = new ofImage;
	this->intro0082->loadImage(getAbsolutePath("intro_mouette/intro0082.jpeg"));
	this->intro0083 = new ofImage;
	this->intro0083->loadImage(getAbsolutePath("intro_mouette/intro0083.jpeg"));
	this->intro0084 = new ofImage;
	this->intro0084->loadImage(getAbsolutePath("intro_mouette/intro0084.jpeg"));
	this->intro0085 = new ofImage;
	this->intro0085->loadImage(getAbsolutePath("intro_mouette/intro0085.jpeg"));
	this->intro0086 = new ofImage;
	this->intro0086->loadImage(getAbsolutePath("intro_mouette/intro0086.jpeg"));
	this->intro0087 = new ofImage;
	this->intro0087->loadImage(getAbsolutePath("intro_mouette/intro0087.jpeg"));
	this->intro0088 = new ofImage;
	this->intro0088->loadImage(getAbsolutePath("intro_mouette/intro0088.jpeg"));
	this->intro0089 = new ofImage;
	this->intro0089->loadImage(getAbsolutePath("intro_mouette/intro0089.jpeg"));
	this->intro0090 = new ofImage;
	this->intro0090->loadImage(getAbsolutePath("intro_mouette/intro0090.jpeg"));
	this->intro0091 = new ofImage;
	this->intro0091->loadImage(getAbsolutePath("intro_mouette/intro0091.jpeg"));
	this->intro0092 = new ofImage;
	this->intro0092->loadImage(getAbsolutePath("intro_mouette/intro0092.jpeg"));
	this->intro0093 = new ofImage;
	this->intro0093->loadImage(getAbsolutePath("intro_mouette/intro0093.jpeg"));
	this->intro0094 = new ofImage;
	this->intro0094->loadImage(getAbsolutePath("intro_mouette/intro0094.jpeg"));
	this->intro0095 = new ofImage;
	this->intro0095->loadImage(getAbsolutePath("intro_mouette/intro0095.jpeg"));
	this->intro0096 = new ofImage;
	this->intro0096->loadImage(getAbsolutePath("intro_mouette/intro0096.jpeg"));
	this->intro0097 = new ofImage;
	this->intro0097->loadImage(getAbsolutePath("intro_mouette/intro0097.jpeg"));
	this->intro0098 = new ofImage;
	this->intro0098->loadImage(getAbsolutePath("intro_mouette/intro0098.jpeg"));
	this->intro0099 = new ofImage;
	this->intro0099->loadImage(getAbsolutePath("intro_mouette/intro0099.jpeg"));
	this->intro0100 = new ofImage;
	this->intro0100->loadImage(getAbsolutePath("intro_mouette/intro0100.jpeg"));
	this->intro0101 = new ofImage;
	this->intro0101->loadImage(getAbsolutePath("intro_mouette/intro0101.jpeg"));
	this->intro0102 = new ofImage;
	this->intro0102->loadImage(getAbsolutePath("intro_mouette/intro0102.jpeg"));
	this->intro0103 = new ofImage;
	this->intro0103->loadImage(getAbsolutePath("intro_mouette/intro0103.jpeg"));
	this->intro0104 = new ofImage;
	this->intro0104->loadImage(getAbsolutePath("intro_mouette/intro0104.jpeg"));
	this->intro0105 = new ofImage;
	this->intro0105->loadImage(getAbsolutePath("intro_mouette/intro0105.jpeg"));
	this->intro0106 = new ofImage;
	this->intro0106->loadImage(getAbsolutePath("intro_mouette/intro0106.jpeg"));
	this->intro0107 = new ofImage;
	this->intro0107->loadImage(getAbsolutePath("intro_mouette/intro0107.jpeg"));
	this->intro0108 = new ofImage;
	this->intro0108->loadImage(getAbsolutePath("intro_mouette/intro0108.jpeg"));
	this->intro0109 = new ofImage;
	this->intro0109->loadImage(getAbsolutePath("intro_mouette/intro0109.jpeg"));
	this->intro0110 = new ofImage;
	this->intro0110->loadImage(getAbsolutePath("intro_mouette/intro0110.jpeg"));
	this->intro0111 = new ofImage;
	this->intro0111->loadImage(getAbsolutePath("intro_mouette/intro0111.jpeg"));
	this->intro0112 = new ofImage;
	this->intro0112->loadImage(getAbsolutePath("intro_mouette/intro0112.jpeg"));
	this->intro0113 = new ofImage;
	this->intro0113->loadImage(getAbsolutePath("intro_mouette/intro0113.jpeg"));
	this->intro0114 = new ofImage;
	this->intro0114->loadImage(getAbsolutePath("intro_mouette/intro0114.jpeg"));
	this->intro0115 = new ofImage;
	this->intro0115->loadImage(getAbsolutePath("intro_mouette/intro0115.jpeg"));
	this->intro0116 = new ofImage;
	this->intro0116->loadImage(getAbsolutePath("intro_mouette/intro0116.jpeg"));
	this->intro0117 = new ofImage;
	this->intro0117->loadImage(getAbsolutePath("intro_mouette/intro0117.jpeg"));
	this->intro0118 = new ofImage;
	this->intro0118->loadImage(getAbsolutePath("intro_mouette/intro0118.jpeg"));
	this->intro0119 = new ofImage;
	this->intro0119->loadImage(getAbsolutePath("intro_mouette/intro0119.jpeg"));
	this->intro0120 = new ofImage;
	this->intro0120->loadImage(getAbsolutePath("intro_mouette/intro0120.jpeg"));
	this->intro0121 = new ofImage;
	this->intro0121->loadImage(getAbsolutePath("intro_mouette/intro0121.jpeg"));
	this->intro0122 = new ofImage;
	this->intro0122->loadImage(getAbsolutePath("intro_mouette/intro0122.jpeg"));
	this->intro0123 = new ofImage;
	this->intro0123->loadImage(getAbsolutePath("intro_mouette/intro0123.jpeg"));
	this->intro0124 = new ofImage;
	this->intro0124->loadImage(getAbsolutePath("intro_mouette/intro0124.jpeg"));
	this->intro0125 = new ofImage;
	this->intro0125->loadImage(getAbsolutePath("intro_mouette/intro0125.jpeg"));
	this->intro0126 = new ofImage;
	this->intro0126->loadImage(getAbsolutePath("intro_mouette/intro0126.jpeg"));
	this->intro0127 = new ofImage;
	this->intro0127->loadImage(getAbsolutePath("intro_mouette/intro0127.jpeg"));
	this->intro0128 = new ofImage;
	this->intro0128->loadImage(getAbsolutePath("intro_mouette/intro0128.jpeg"));
	this->intro0129 = new ofImage;
	this->intro0129->loadImage(getAbsolutePath("intro_mouette/intro0129.jpeg"));
	this->intro0130 = new ofImage;
	this->intro0130->loadImage(getAbsolutePath("intro_mouette/intro0130.jpeg"));
	this->intro0131 = new ofImage;
	this->intro0131->loadImage(getAbsolutePath("intro_mouette/intro0131.jpeg"));
	this->intro0132 = new ofImage;
	this->intro0132->loadImage(getAbsolutePath("intro_mouette/intro0132.jpeg"));
	this->intro0133 = new ofImage;
	this->intro0133->loadImage(getAbsolutePath("intro_mouette/intro0133.jpeg"));
	this->intro0134 = new ofImage;
	this->intro0134->loadImage(getAbsolutePath("intro_mouette/intro0134.jpeg"));
	this->intro0135 = new ofImage;
	this->intro0135->loadImage(getAbsolutePath("intro_mouette/intro0135.jpeg"));
	this->intro0136 = new ofImage;
	this->intro0136->loadImage(getAbsolutePath("intro_mouette/intro0136.jpeg"));
	this->intro0137 = new ofImage;
	this->intro0137->loadImage(getAbsolutePath("intro_mouette/intro0137.jpeg"));
	this->intro0138 = new ofImage;
	this->intro0138->loadImage(getAbsolutePath("intro_mouette/intro0138.jpeg"));
	this->intro0139 = new ofImage;
	this->intro0139->loadImage(getAbsolutePath("intro_mouette/intro0139.jpeg"));
	this->intro0140 = new ofImage;
	this->intro0140->loadImage(getAbsolutePath("intro_mouette/intro0140.jpeg"));
	this->intro0141 = new ofImage;
	this->intro0141->loadImage(getAbsolutePath("intro_mouette/intro0141.jpeg"));
	this->intro0142 = new ofImage;
	this->intro0142->loadImage(getAbsolutePath("intro_mouette/intro0142.jpeg"));
	this->intro0143 = new ofImage;
	this->intro0143->loadImage(getAbsolutePath("intro_mouette/intro0143.jpeg"));
	this->intro0144 = new ofImage;
	this->intro0144->loadImage(getAbsolutePath("intro_mouette/intro0144.jpeg"));
	this->intro0145 = new ofImage;
	this->intro0145->loadImage(getAbsolutePath("intro_mouette/intro0145.jpeg"));
	this->intro0146 = new ofImage;
	this->intro0146->loadImage(getAbsolutePath("intro_mouette/intro0146.jpeg"));
	this->intro0147 = new ofImage;
	this->intro0147->loadImage(getAbsolutePath("intro_mouette/intro0147.jpeg"));
	this->intro0148 = new ofImage;
	this->intro0148->loadImage(getAbsolutePath("intro_mouette/intro0148.jpeg"));
	this->intro0149 = new ofImage;
	this->intro0149->loadImage(getAbsolutePath("intro_mouette/intro0149.jpeg"));
	this->intro0150 = new ofImage;
	this->intro0150->loadImage(getAbsolutePath("intro_mouette/intro0150.jpeg"));
	this->intro0151 = new ofImage;
	this->intro0151->loadImage(getAbsolutePath("intro_mouette/intro0151.jpeg"));
	this->intro0152 = new ofImage;
	this->intro0152->loadImage(getAbsolutePath("intro_mouette/intro0152.jpeg"));
	this->intro0153 = new ofImage;
	this->intro0153->loadImage(getAbsolutePath("intro_mouette/intro0153.jpeg"));
	this->intro0154 = new ofImage;
	this->intro0154->loadImage(getAbsolutePath("intro_mouette/intro0154.jpeg"));
	this->intro0155 = new ofImage;
	this->intro0155->loadImage(getAbsolutePath("intro_mouette/intro0155.jpeg"));
	this->intro0156 = new ofImage;
	this->intro0156->loadImage(getAbsolutePath("intro_mouette/intro0156.jpeg"));
	this->intro0157 = new ofImage;
	this->intro0157->loadImage(getAbsolutePath("intro_mouette/intro0157.jpeg"));
	this->intro0158 = new ofImage;
	this->intro0158->loadImage(getAbsolutePath("intro_mouette/intro0158.jpeg"));
	this->intro0159 = new ofImage;
	this->intro0159->loadImage(getAbsolutePath("intro_mouette/intro0159.jpeg"));
	this->intro0160 = new ofImage;
	this->intro0160->loadImage(getAbsolutePath("intro_mouette/intro0160.jpeg"));
	this->intro0161 = new ofImage;
	this->intro0161->loadImage(getAbsolutePath("intro_mouette/intro0161.jpeg"));
	this->intro0162 = new ofImage;
	this->intro0162->loadImage(getAbsolutePath("intro_mouette/intro0162.jpeg"));
	this->intro0163 = new ofImage;
	this->intro0163->loadImage(getAbsolutePath("intro_mouette/intro0163.jpeg"));
	this->intro0164 = new ofImage;
	this->intro0164->loadImage(getAbsolutePath("intro_mouette/intro0164.jpeg"));
	this->intro0165 = new ofImage;
	this->intro0165->loadImage(getAbsolutePath("intro_mouette/intro0165.jpeg"));
	this->intro0166 = new ofImage;
	this->intro0166->loadImage(getAbsolutePath("intro_mouette/intro0166.jpeg"));
	this->intro0167 = new ofImage;
	this->intro0167->loadImage(getAbsolutePath("intro_mouette/intro0167.jpeg"));
	this->intro0168 = new ofImage;
	this->intro0168->loadImage(getAbsolutePath("intro_mouette/intro0168.jpeg"));
	this->intro0169 = new ofImage;
	this->intro0169->loadImage(getAbsolutePath("intro_mouette/intro0169.jpeg"));
	this->intro0170 = new ofImage;
	this->intro0170->loadImage(getAbsolutePath("intro_mouette/intro0170.jpeg"));
	this->intro0171 = new ofImage;
	this->intro0171->loadImage(getAbsolutePath("intro_mouette/intro0171.jpeg"));
	this->intro0172 = new ofImage;
	this->intro0172->loadImage(getAbsolutePath("intro_mouette/intro0172.jpeg"));
	this->intro0173 = new ofImage;
	this->intro0173->loadImage(getAbsolutePath("intro_mouette/intro0173.jpeg"));
	this->intro0174 = new ofImage;
	this->intro0174->loadImage(getAbsolutePath("intro_mouette/intro0174.jpeg"));
	this->intro0175 = new ofImage;
	this->intro0175->loadImage(getAbsolutePath("intro_mouette/intro0175.jpeg"));
	this->intro0176 = new ofImage;
	this->intro0176->loadImage(getAbsolutePath("intro_mouette/intro0176.jpeg"));
	this->intro0177 = new ofImage;
	this->intro0177->loadImage(getAbsolutePath("intro_mouette/intro0177.jpeg"));
	this->intro0178 = new ofImage;
	this->intro0178->loadImage(getAbsolutePath("intro_mouette/intro0177.jpeg"));
	this->intro0179 = new ofImage;
	this->intro0179->loadImage(getAbsolutePath("intro_mouette/intro0178.jpeg"));
	this->intro0180 = new ofImage;
	this->intro0180->loadImage(getAbsolutePath("intro_mouette/intro0179.jpeg"));
	this->intro0181 = new ofImage;
	this->intro0181->loadImage(getAbsolutePath("intro_mouette/intro0180.jpeg"));
	this->intro0182 = new ofImage;
	this->intro0182->loadImage(getAbsolutePath("intro_mouette/intro0181.jpeg"));
	this->intro0183 = new ofImage;
	this->intro0183->loadImage(getAbsolutePath("intro_mouette/intro0182.jpeg"));
	this->intro0184 = new ofImage;
	this->intro0184->loadImage(getAbsolutePath("intro_mouette/intro0183.jpeg"));
	this->intro0185 = new ofImage;
	this->intro0185->loadImage(getAbsolutePath("intro_mouette/intro0184.jpeg"));
	this->intro0186 = new ofImage;
	this->intro0186->loadImage(getAbsolutePath("intro_mouette/intro0185.jpeg"));
	this->intro0187 = new ofImage;
	this->intro0187->loadImage(getAbsolutePath("intro_mouette/intro0186.jpeg"));
	this->intro0188 = new ofImage;
	this->intro0188->loadImage(getAbsolutePath("intro_mouette/intro0187.jpeg"));
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

	case BOULET:
		this->boulet->draw(x, y, largeur, hauteur);
		break;

	case PAUSE_NEUTRE:
		this->pause_neutre->draw(x, y, largeur, hauteur);
		break;

	case PAUSE_REPRENDRE:
		this->pause_reprendre->draw(x, y, largeur, hauteur);
		break;

	case PAUSE_QUITTER:
		this->pause_quitter->draw(x, y, largeur, hauteur);
		break;

	case MOUETTE_D0:
		this->mouette_d0->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_D1:
		this->mouette_d1->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_D2:
		this->mouette_d2->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_D3:
		this->mouette_d3->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_D4:
		this->mouette_d4->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_D5:
		this->mouette_d5->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_D6:
		this->mouette_d6->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_D7:
		this->mouette_d7->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_D8:
		this->mouette_d8->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G0:
		this->mouette_g0->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G1:
		this->mouette_g1->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G2:
		this->mouette_g2->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G3:
		this->mouette_g3->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G4:
		this->mouette_g4->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G5:
		this->mouette_g5->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G6:
		this->mouette_g6->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G7:
		this->mouette_g7->draw(x, y, largeur, hauteur);
		break;
	case MOUETTE_G8:
		this->mouette_g8->draw(x, y, largeur, hauteur);
		break;

	case INTRO_0000:
		this->intro0000->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0001:
		this->intro0001->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0002:
		this->intro0002->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0003:
		this->intro0003->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0004:
		this->intro0004->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0005:
		this->intro0005->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0006:
		this->intro0006->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0007:
		this->intro0007->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0008:
		this->intro0008->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0009:
		this->intro0009->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0010:
		this->intro0010->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0011:
		this->intro0011->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0012:
		this->intro0012->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0013:
		this->intro0013->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0014:
		this->intro0014->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0015:
		this->intro0015->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0016:
		this->intro0016->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0017:
		this->intro0017->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0018:
		this->intro0018->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0019:
		this->intro0019->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0020:
		this->intro0020->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0021:
		this->intro0021->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0022:
		this->intro0022->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0023:
		this->intro0023->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0024:
		this->intro0024->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0025:
		this->intro0025->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0026:
		this->intro0026->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0027:
		this->intro0027->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0028:
		this->intro0028->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0029:
		this->intro0029->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0030:
		this->intro0030->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0031:
		this->intro0031->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0032:
		this->intro0032->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0033:
		this->intro0033->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0034:
		this->intro0034->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0035:
		this->intro0035->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0036:
		this->intro0036->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0037:
		this->intro0037->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0038:
		this->intro0038->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0039:
		this->intro0039->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0040:
		this->intro0040->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0041:
		this->intro0041->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0042:
		this->intro0042->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0043:
		this->intro0043->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0044:
		this->intro0044->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0045:
		this->intro0045->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0046:
		this->intro0046->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0047:
		this->intro0047->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0048:
		this->intro0048->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0049:
		this->intro0049->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0050:
		this->intro0050->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0051:
		this->intro0051->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0052:
		this->intro0052->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0053:
		this->intro0053->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0054:
		this->intro0054->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0055:
		this->intro0055->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0056:
		this->intro0056->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0057:
		this->intro0057->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0058:
		this->intro0058->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0059:
		this->intro0059->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0060:
		this->intro0060->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0061:
		this->intro0061->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0062:
		this->intro0062->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0063:
		this->intro0063->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0064:
		this->intro0064->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0065:
		this->intro0065->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0066:
		this->intro0066->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0067:
		this->intro0067->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0068:
		this->intro0068->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0069:
		this->intro0069->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0070:
		this->intro0070->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0071:
		this->intro0071->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0072:
		this->intro0072->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0073:
		this->intro0073->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0074:
		this->intro0074->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0075:
		this->intro0075->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0076:
		this->intro0076->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0077:
		this->intro0077->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0078:
		this->intro0078->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0079:
		this->intro0079->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0080:
		this->intro0080->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0081:
		this->intro0081->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0082:
		this->intro0082->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0083:
		this->intro0083->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0084:
		this->intro0084->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0085:
		this->intro0085->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0086:
		this->intro0086->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0087:
		this->intro0087->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0088:
		this->intro0088->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0089:
		this->intro0089->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0090:
		this->intro0090->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0091:
		this->intro0091->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0092:
		this->intro0092->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0093:
		this->intro0093->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0094:
		this->intro0094->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0095:
		this->intro0095->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0096:
		this->intro0096->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0097:
		this->intro0097->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0098:
		this->intro0098->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0099:
		this->intro0099->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0100:
		this->intro0100->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0101:
		this->intro0101->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0102:
		this->intro0102->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0103:
		this->intro0103->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0104:
		this->intro0104->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0105:
		this->intro0105->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0106:
		this->intro0106->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0107:
		this->intro0107->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0108:
		this->intro0108->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0109:
		this->intro0109->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0110:
		this->intro0110->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0111:
		this->intro0111->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0112:
		this->intro0112->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0113:
		this->intro0113->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0114:
		this->intro0114->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0115:
		this->intro0115->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0116:
		this->intro0116->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0117:
		this->intro0117->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0118:
		this->intro0118->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0119:
		this->intro0119->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0120:
		this->intro0120->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0121:
		this->intro0121->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0122:
		this->intro0122->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0123:
		this->intro0123->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0124:
		this->intro0124->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0125:
		this->intro0125->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0126:
		this->intro0126->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0127:
		this->intro0127->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0128:
		this->intro0128->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0129:
		this->intro0129->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0130:
		this->intro0130->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0131:
		this->intro0131->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0132:
		this->intro0132->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0133:
		this->intro0133->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0134:
		this->intro0134->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0135:
		this->intro0135->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0136:
		this->intro0136->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0137:
		this->intro0137->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0138:
		this->intro0138->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0139:
		this->intro0139->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0140:
		this->intro0140->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0141:
		this->intro0141->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0142:
		this->intro0142->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0143:
		this->intro0143->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0144:
		this->intro0144->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0145:
		this->intro0145->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0146:
		this->intro0146->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0147:
		this->intro0147->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0148:
		this->intro0148->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0149:
		this->intro0149->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0150:
		this->intro0150->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0151:
		this->intro0151->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0152:
		this->intro0152->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0153:
		this->intro0153->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0154:
		this->intro0154->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0155:
		this->intro0155->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0156:
		this->intro0156->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0157:
		this->intro0157->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0158:
		this->intro0158->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0159:
		this->intro0159->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0160:
		this->intro0160->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0161:
		this->intro0161->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0162:
		this->intro0162->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0163:
		this->intro0163->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0164:
		this->intro0164->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0165:
		this->intro0165->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0166:
		this->intro0166->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0167:
		this->intro0167->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0168:
		this->intro0168->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0169:
		this->intro0169->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0170:
		this->intro0170->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0171:
		this->intro0171->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0172:
		this->intro0172->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0173:
		this->intro0173->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0174:
		this->intro0174->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0175:
		this->intro0175->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0176:
		this->intro0176->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0177:
		this->intro0177->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0178:
		this->intro0178->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0179:
		this->intro0179->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0180:
		this->intro0180->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0181:
		this->intro0181->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0182:
		this->intro0182->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0183:
		this->intro0183->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0184:
		this->intro0184->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0185:
		this->intro0185->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0186:
		this->intro0186->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0187:
		this->intro0187->draw(x, y, largeur, hauteur);
		break;
	case INTRO_0188:
		this->intro0188->draw(x, y, largeur, hauteur);
		break;

	default:
		cout << "Error aff_img : no picture specified" << endl;
		break;
	}
}