#pragma once 

/*!
 * \file SubBlocs.h
 * \brief Classes heritant de bloc afin de creer les differents blocs
 * \author Claire REMY, Quentin GROS (relecture)
 */
#include "Module_Chateau\Header\Bloc.h"

/*!
 * \class BaseBloc 
 * \brief Bloc de base
 */
class BaseBloc : public Bloc {
public :
	/*!
	 * \brief Constructeur d'un bloc de base
	 *
	 * \param mouseX position X du bloc
	 * \param mouseY position Y du bloc
	 */
	BaseBloc(int mouseX, int mouseY);
};

/*!
 * \class MedBloc
 * \brief Bloc intermediaire d'un chateau
 */
class MedBloc : public Bloc {
public :
	/*!
	 * \brief Constructeur d'un bloc intermediaire
	 * 
	 * \param mouseX position X du bloc
	 * \param mouseY position Y du bloc
	 */
	MedBloc(int mouseX, int mouseY);
};

/*!
 * \class TopBloc
 * \brief Bloc de haut d'un chateau
 */
class TopBloc : public Bloc {
public :
	/*!
	* \brief Constructeur d'un bloc final
	*
	* \param mouseX position X du bloc
	* \param mouseY position Y du bloc
	*/
	TopBloc(int mouseX, int mouseY);
};