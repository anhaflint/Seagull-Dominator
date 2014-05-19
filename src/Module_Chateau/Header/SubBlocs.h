#pragma once 
#include "Module_Chateau\Header\Bloc.h"

class BaseBloc : public Bloc {
public :
	BaseBloc(ofxBox2d& box2d, int mouseX, int mouseY);
};

class MedBloc : public Bloc {
public :
	MedBloc(ofxBox2d& box2d, int mouseX, int mouseY);
};

class TopBloc : public Bloc {
public :
	TopBloc(ofxBox2d& box2d, int mouseX, int mouseY);
};