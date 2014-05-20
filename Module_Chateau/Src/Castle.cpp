#include "Module_Chateau\Header\Castle.h"
#include "Module_Chateau\Header\SubBlocs.h"
#include "Util\Header\functions.h"


Castle::Castle(int mouseX, int mouseY) {
	base = ofPtr<Bloc>(new BaseBloc(mouseX, mouseY));
	med = ofPtr<Bloc>(new MedBloc(mouseX + 8*Grains::size, mouseY - 10*Grains::size ));
	top = ofPtr<Bloc>(new TopBloc(mouseX + 12*Grains::size, mouseY - 17*Grains::size));
}

void Castle::draw() {
	if (base != NULL && med != NULL && top != NULL) {
		base->draw();
		med->draw();
		top->draw();
	}
}

int Castle::getNbGrains() {
	return (base->getNbGrains() + med->getNbGrains() + top->getNbGrains());
}