#pragma once 
#include "Module_Chateau\Header\Bloc.h"

class BaseBloc : public Bloc {
public :
	BaseBloc(int mouseX, int mouseY);
};

class MedBloc : public Bloc {
public :
	MedBloc(int mouseX, int mouseY);
};

class TopBloc : public Bloc {
public :
	TopBloc(int mouseX, int mouseY);
};