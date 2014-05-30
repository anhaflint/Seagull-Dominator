#include "Module_Chateau\Header\SubBlocs.h"

BaseBloc::BaseBloc(int mouseX, int mouseY) :
Bloc(16, 5,mouseX, mouseY) {}

MedBloc::MedBloc(int mouseX, int mouseY) :
Bloc(8, 4,mouseX, mouseY) {}

TopBloc::TopBloc(int mouseX, int mouseY) :
Bloc(4, 3, mouseX, mouseY) {}