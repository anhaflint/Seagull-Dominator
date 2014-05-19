#include "Module_Chateau\Header\SubBlocs.h"

BaseBloc::BaseBloc(ofxBox2d& box2d, int mouseX, int mouseY) :
Bloc(32, 10, box2d, mouseX, mouseY) {}


MedBloc::MedBloc(ofxBox2d& box2d, int mouseX, int mouseY) :
Bloc(16, 7, box2d, mouseX, mouseY) {}

TopBloc::TopBloc(ofxBox2d& box2d, int mouseX, int mouseY) :
Bloc(8, 5, box2d, mouseX, mouseY) {}