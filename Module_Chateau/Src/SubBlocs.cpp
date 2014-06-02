#include "Module_Chateau\Header\SubBlocs.h"

/*!
 * \file SubBlocs.cpp
 * \brief Classes heritant de bloc afin de creer les differents blocs
 * \author Claire REMY
 */
BaseBloc::BaseBloc(int mouseX, int mouseY) :
Bloc(16, 5,mouseX, mouseY) {}

MedBloc::MedBloc(int mouseX, int mouseY) :
Bloc(8, 4,mouseX, mouseY) {}

TopBloc::TopBloc(int mouseX, int mouseY) :
Bloc(4, 3, mouseX, mouseY) {}