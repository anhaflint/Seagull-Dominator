#pragma once


/*!
 * \file EnumImg.h
 * \author Quentin GROS, Claire REMY (relecture)
 */


/*!
 * \enum IMG 
 * \brief Enumeration de toutes les images utilisées dans le jeu
 */
enum IMG{									
	DEMARRAGE_NEUTRE, /*!< Ecran de demarrage neutre */
	DEMARRAGE_JOUER, /*!< Ecran de demarrage jouer */
	DEMARRAGE_HIGHSCORE, /*!< Ecran de highscore */
	DEMARRAGE_QUITTER, /*!< Ecran quitter */
	CORDE_PLUS, /*!< Ecran Corde plus */
	CORDE_MOINS, /*!< Ecran corde moins */
	BOULET_PLUS, /*!< Ecran boulet plus */
	BOULET_MOINS, /*!< Ecran boulet moins */
	MOUETTE_PLUS, /*!< Ecran mouette plus */
	MOUETTE_MOINS, /*!< Ecran mouette moins */
	CONFIRMER, /*!< Ecran confirmer */
	AMELIORATION_AUCUN, /*! Ecran amelioration neutre */
	BACKGROUND, /*!< Fond d'ecran */
	TEXTURE_GRAINS, /*!< Texture des grains de sable */
	BOULET, /*!< image boulet */
	PAUSE_NEUTRE, /*!< ecran pause neutre */
	PAUSE_REPRENDRE, /*!< Ecran pause reprendre */
	PAUSE_QUITTER, /*!< Ecran pause quitter */
	MOUETTE_D0, /*!< Sprite Mouette */
	MOUETTE_D1,/*!< Sprite Mouette */
	MOUETTE_D2,/*!< Sprite Mouette */
	MOUETTE_D3,/*!< Sprite Mouette */
	MOUETTE_D4,/*!< Sprite Mouette */
	MOUETTE_D5,/*!< Sprite Mouette */
	MOUETTE_D6,/*!< Sprite Mouette */
	MOUETTE_D7,/*!< Sprite Mouette */
	MOUETTE_D8,/*!< Sprite Mouette */
	MOUETTE_G0,/*!< Sprite Mouette */
	MOUETTE_G1,/*!< Sprite Mouette */
	MOUETTE_G2,/*!< Sprite Mouette */
	MOUETTE_G3,/*!< Sprite Mouette */
	MOUETTE_G4,/*!< Sprite Mouette */
	MOUETTE_G5,/*!< Sprite Mouette */
	MOUETTE_G6,/*!< Sprite Mouette */
	MOUETTE_G7,/*!< Sprite Mouette */
	MOUETTE_G8,/*!< Sprite Mouette */
	INTRO_0000,/*!< Intro */
	INTRO_0001,/*!< Intro */
	INTRO_0002,/*!< Intro */
	INTRO_0003,/*!< Intro */
	INTRO_0004,/*!< Intro */
	INTRO_0005,/*!< Intro */
	INTRO_0006,/*!< Intro */
	INTRO_0007,/*!< Intro */
	INTRO_0008,/*!< Intro */
	INTRO_0009,/*!< Intro */
	INTRO_0010,/*!< Intro */
	INTRO_0011,/*!< Intro */
	INTRO_0012,/*!< Intro */
	INTRO_0013,/*!< Intro */
	INTRO_0014,/*!< Intro */
	INTRO_0015,/*!< Intro */
	INTRO_0016,/*!< Intro */
	INTRO_0017,/*!< Intro */
	INTRO_0018,/*!< Intro */
	INTRO_0019,/*!< Intro */
	INTRO_0020,/*!< Intro */
	INTRO_0021,/*!< Intro */
	INTRO_0022,/*!< Intro */
	INTRO_0023,/*!< Intro */
	INTRO_0024,/*!< Intro */
	INTRO_0025,/*!< Intro */
	INTRO_0026,/*!< Intro */
	INTRO_0027,/*!< Intro */
	INTRO_0028,/*!< Intro */
	INTRO_0029,/*!< Intro */
	INTRO_0030,/*!< Intro */
	INTRO_0031,/*!< Intro */
	INTRO_0032,/*!< Intro */
	INTRO_0033,/*!< Intro */
	INTRO_0034,/*!< Intro */
	INTRO_0035,/*!< Intro */
	INTRO_0036,/*!< Intro */
	INTRO_0037,/*!< Intro */
	INTRO_0038,/*!< Intro */
	INTRO_0039,/*!< Intro */
	INTRO_0040,/*!< Intro */
	INTRO_0041,/*!< Intro */
	INTRO_0042,/*!< Intro */
	INTRO_0043,/*!< Intro */
	INTRO_0044,/*!< Intro */
	INTRO_0045,/*!< Intro */
	INTRO_0046,/*!< Intro */
	INTRO_0047,/*!< Intro */
	INTRO_0048,/*!< Intro */
	INTRO_0049,/*!< Intro */
	INTRO_0050,/*!< Intro */
	INTRO_0051,/*!< Intro */
	INTRO_0052,/*!< Intro */
	INTRO_0053,/*!< Intro */
	INTRO_0054,/*!< Intro */
	INTRO_0055,/*!< Intro */
	INTRO_0056,/*!< Intro */
	INTRO_0057,/*!< Intro */
	INTRO_0058,/*!< Intro */
	INTRO_0059,/*!< Intro */
	INTRO_0060,/*!< Intro */
	INTRO_0061,/*!< Intro */
	INTRO_0062,/*!< Intro */
	INTRO_0063,/*!< Intro */
	INTRO_0064,/*!< Intro */
	INTRO_0065,/*!< Intro */
	INTRO_0066,/*!< Intro */
	INTRO_0067,/*!< Intro */
	INTRO_0068,/*!< Intro */
	INTRO_0069,/*!< Intro */
	INTRO_0070,/*!< Intro */
	INTRO_0071,/*!< Intro */
	INTRO_0072,/*!< Intro */
	INTRO_0073,/*!< Intro */
	INTRO_0074,/*!< Intro */
	INTRO_0075,/*!< Intro */
	INTRO_0076,/*!< Intro */
	INTRO_0077,/*!< Intro */
	INTRO_0078,/*!< Intro */
	INTRO_0079,/*!< Intro */
	INTRO_0080,/*!< Intro */
	INTRO_0081,/*!< Intro */
	INTRO_0082,/*!< Intro */
	INTRO_0083,/*!< Intro */
	INTRO_0084,/*!< Intro */
	INTRO_0085,/*!< Intro */
	INTRO_0086,/*!< Intro */
	INTRO_0087,/*!< Intro */
	INTRO_0088,/*!< Intro */
	INTRO_0089,/*!< Intro */
	INTRO_0090,/*!< Intro */
	INTRO_0091,/*!< Intro */
	INTRO_0092,/*!< Intro */
	INTRO_0093,/*!< Intro */
	INTRO_0094,/*!< Intro */
	INTRO_0095,/*!< Intro */
	INTRO_0096,/*!< Intro */
	INTRO_0097,/*!< Intro */
	INTRO_0098,/*!< Intro */
	INTRO_0099,/*!< Intro */
	INTRO_0100,/*!< Intro */
	INTRO_0101,/*!< Intro */
	INTRO_0102,/*!< Intro */
	INTRO_0103,/*!< Intro */
	INTRO_0104,/*!< Intro */
	INTRO_0105,/*!< Intro */
	INTRO_0106,/*!< Intro */
	INTRO_0107,/*!< Intro */
	INTRO_0108,/*!< Intro */
	INTRO_0109,/*!< Intro */
	INTRO_0110,/*!< Intro */
	INTRO_0111,/*!< Intro */
	INTRO_0112,/*!< Intro */
	INTRO_0113,/*!< Intro */
	INTRO_0114,/*!< Intro */
	INTRO_0115,/*!< Intro */
	INTRO_0116,/*!< Intro */
	INTRO_0117,/*!< Intro */
	INTRO_0118,/*!< Intro */
	INTRO_0119,/*!< Intro */
	INTRO_0120,/*!< Intro */
	INTRO_0121,/*!< Intro */
	INTRO_0122,/*!< Intro */
	INTRO_0123,/*!< Intro */
	INTRO_0124,/*!< Intro */
	INTRO_0125,/*!< Intro */
	INTRO_0126,/*!< Intro */
	INTRO_0127,/*!< Intro */
	INTRO_0128,/*!< Intro */
	INTRO_0129,/*!< Intro */
	INTRO_0130,/*!< Intro */
	INTRO_0131,/*!< Intro */
	INTRO_0132,/*!< Intro */
	INTRO_0133,/*!< Intro */
	INTRO_0134,/*!< Intro */
	INTRO_0135,/*!< Intro */
	INTRO_0136,/*!< Intro */
	INTRO_0137,/*!< Intro */
	INTRO_0138,/*!< Intro */
	INTRO_0139,/*!< Intro */
	INTRO_0140,/*!< Intro */
	INTRO_0141,/*!< Intro */
	INTRO_0142,/*!< Intro */
	INTRO_0143,/*!< Intro */
	INTRO_0144,/*!< Intro */
	INTRO_0145,/*!< Intro */
	INTRO_0146,/*!< Intro */
	INTRO_0147,/*!< Intro */
	INTRO_0148,/*!< Intro */
	INTRO_0149,/*!< Intro */
	INTRO_0150,/*!< Intro */
	INTRO_0151,/*!< Intro */
	INTRO_0152,/*!< Intro */
	INTRO_0153,/*!< Intro */
	INTRO_0154,/*!< Intro */
	INTRO_0155,/*!< Intro */
	INTRO_0156,/*!< Intro */
	INTRO_0157,/*!< Intro */
	INTRO_0158,/*!< Intro */
	INTRO_0159,/*!< Intro */
	INTRO_0160,/*!< Intro */
	INTRO_0161,/*!< Intro */
	INTRO_0162,/*!< Intro */
	INTRO_0163,/*!< Intro */
	INTRO_0164,/*!< Intro */
	INTRO_0165,/*!< Intro */
	INTRO_0166,/*!< Intro */
	INTRO_0167,/*!< Intro */
	INTRO_0168,/*!< Intro */
	INTRO_0169,/*!< Intro */
	INTRO_0170,/*!< Intro */
	INTRO_0171,/*!< Intro */
	INTRO_0172,/*!< Intro */
	INTRO_0173,/*!< Intro */
	INTRO_0174,/*!< Intro */
	INTRO_0175,/*!< Intro */
	INTRO_0176,/*!< Intro */
	INTRO_0177,/*!< Intro */
	INTRO_0178,/*!< Intro */
	INTRO_0179,/*!< Intro */
	INTRO_0180,/*!< Intro */
	INTRO_0181,/*!< Intro */
	INTRO_0182,/*!< Intro */
	INTRO_0183,/*!< Intro */
	INTRO_0184,/*!< Intro */
	INTRO_0185,/*!< Intro */
	INTRO_0186,/*!< Intro */
	INTRO_0187,/*!< Intro */
	INTRO_0188/*!< Intro */
};
