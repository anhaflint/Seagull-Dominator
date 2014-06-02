#pragma once

<<<<<<< HEAD
enum IMG{									//Enumeration des differentes images possibles
	DEMARRAGE_NEUTRE,
	DEMARRAGE_JOUER,
	DEMARRAGE_HIGHSCORE,
	DEMARRAGE_QUITTER,
	CORDE_PLUS,
	CORDE_MOINS,
	BOULET_PLUS,
	BOULET_MOINS,
	MOUETTE_PLUS,
	MOUETTE_MOINS,
	CONFIRMER,
	AMELIORATION_AUCUN,
	BACKGROUND,
	TEXTURE_GRAINS,
	BOULET,
	PAUSE_NEUTRE,
	PAUSE_REPRENDRE,
	PAUSE_QUITTER,
	MOUETTE_D0,
	MOUETTE_D1,
	MOUETTE_D2,
	MOUETTE_D3,
	MOUETTE_D4,
	MOUETTE_D5,
	MOUETTE_D6,
	MOUETTE_D7,
	MOUETTE_D8,
	MOUETTE_G0,
	MOUETTE_G1,
	MOUETTE_G2,
	MOUETTE_G3,
	MOUETTE_G4,
	MOUETTE_G5,
	MOUETTE_G6,
	MOUETTE_G7,
	MOUETTE_G8,
	INTRO_0000,
	INTRO_0001,
	INTRO_0002,
	INTRO_0003,
	INTRO_0004,
	INTRO_0005,
	INTRO_0006,
	INTRO_0007,
	INTRO_0008,
	INTRO_0009,
	INTRO_0010,
	INTRO_0011,
	INTRO_0012,
	INTRO_0013,
	INTRO_0014,
	INTRO_0015,
	INTRO_0016,
	INTRO_0017,
	INTRO_0018,
	INTRO_0019,
	INTRO_0020,
	INTRO_0021,
	INTRO_0022,
	INTRO_0023,
	INTRO_0024,
	INTRO_0025,
	INTRO_0026,
	INTRO_0027,
	INTRO_0028,
	INTRO_0029,
	INTRO_0030,
	INTRO_0031,
	INTRO_0032,
	INTRO_0033,
	INTRO_0034,
	INTRO_0035,
	INTRO_0036,
	INTRO_0037,
	INTRO_0038,
	INTRO_0039,
	INTRO_0040,
	INTRO_0041,
	INTRO_0042,
	INTRO_0043,
	INTRO_0044,
	INTRO_0045,
	INTRO_0046,
	INTRO_0047,
	INTRO_0048,
	INTRO_0049,
	INTRO_0050,
	INTRO_0051,
	INTRO_0052,
	INTRO_0053,
	INTRO_0054,
	INTRO_0055,
	INTRO_0056,
	INTRO_0057,
	INTRO_0058,
	INTRO_0059,
	INTRO_0060,
	INTRO_0061,
	INTRO_0062,
	INTRO_0063,
	INTRO_0064,
	INTRO_0065,
	INTRO_0066,
	INTRO_0067,
	INTRO_0068,
	INTRO_0069,
	INTRO_0070,
	INTRO_0071,
	INTRO_0072,
	INTRO_0073,
	INTRO_0074,
	INTRO_0075,
	INTRO_0076,
	INTRO_0077,
	INTRO_0078,
	INTRO_0079,
	INTRO_0080,
	INTRO_0081,
	INTRO_0082,
	INTRO_0083,
	INTRO_0084,
	INTRO_0085,
	INTRO_0086,
	INTRO_0087,
	INTRO_0088,
	INTRO_0089,
	INTRO_0090,
	INTRO_0091,
	INTRO_0092,
	INTRO_0093,
	INTRO_0094,
	INTRO_0095,
	INTRO_0096,
	INTRO_0097,
	INTRO_0098,
	INTRO_0099,
	INTRO_0100,
	INTRO_0101,
	INTRO_0102,
	INTRO_0103,
	INTRO_0104,
	INTRO_0105,
	INTRO_0106,
	INTRO_0107,
	INTRO_0108,
	INTRO_0109,
	INTRO_0110,
	INTRO_0111,
	INTRO_0112,
	INTRO_0113,
	INTRO_0114,
	INTRO_0115,
	INTRO_0116,
	INTRO_0117,
	INTRO_0118,
	INTRO_0119,
	INTRO_0120,
	INTRO_0121,
	INTRO_0122,
	INTRO_0123,
	INTRO_0124,
	INTRO_0125,
	INTRO_0126,
	INTRO_0127,
	INTRO_0128,
	INTRO_0129,
	INTRO_0130,
	INTRO_0131,
	INTRO_0132,
	INTRO_0133,
	INTRO_0134,
	INTRO_0135,
	INTRO_0136,
	INTRO_0137,
	INTRO_0138,
	INTRO_0139,
	INTRO_0140,
	INTRO_0141,
	INTRO_0142,
	INTRO_0143,
	INTRO_0144,
	INTRO_0145,
	INTRO_0146,
	INTRO_0147,
	INTRO_0148,
	INTRO_0149,
	INTRO_0150,
	INTRO_0151,
	INTRO_0152,
	INTRO_0153,
	INTRO_0154,
	INTRO_0155,
	INTRO_0156,
	INTRO_0157,
	INTRO_0158,
	INTRO_0159,
	INTRO_0160,
	INTRO_0161,
	INTRO_0162,
	INTRO_0163,
	INTRO_0164,
	INTRO_0165,
	INTRO_0166,
	INTRO_0167,
	INTRO_0168,
	INTRO_0169,
	INTRO_0170,
	INTRO_0171,
	INTRO_0172,
	INTRO_0173,
	INTRO_0174,
	INTRO_0175,
	INTRO_0176,
	INTRO_0177,
	INTRO_0178,
	INTRO_0179,
	INTRO_0180,
	INTRO_0181,
	INTRO_0182,
	INTRO_0183,
	INTRO_0184,
	INTRO_0185,
	INTRO_0186,
	INTRO_0187,
	INTRO_0188
=======
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
>>>>>>> 0dd82475226d6e892f555d867ff12e39d9026bed
};
