#include "Module_Chateau\Header\SubBlocs.h"

BaseBloc::BaseBloc(int mouseX, int mouseY) :
Bloc(32, 10,mouseX, mouseY) {}


MedBloc::MedBloc(int mouseX, int mouseY) :
Bloc(16, 7,mouseX, mouseY) {}

TopBloc::TopBloc(int mouseX, int mouseY) :
Bloc(8, 5, mouseX, mouseY) {}