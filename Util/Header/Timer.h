#pragma once
/*!
 * \file Timer.h
 * \brief Classe permettant de gerer le temps
 * \author Quentin GROS, Mounia HAMEDI (relecture)
 */
#include <time.h>

/*!
 * \class Timer
 * \brief Classe permettant de gerer le temps
 */
class Timer {
public:
	/*!
	 * \brief Constructeur
	 */
	Timer() { start = ::time(NULL); }

	/*!
	 * \brief Destructeur
	 */
	virtual ~Timer() {}

	/*!
	 * \brief Fonction permettant de calculer le temps elapsé
	 */
	unsigned long Lapse() {
		return ::time(NULL) - start;
	}

private:
	unsigned long start; /*!< Temps de depart */
};
