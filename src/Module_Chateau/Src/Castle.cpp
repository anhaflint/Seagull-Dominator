#include "Module_Chateau\Header\Castle.h"
#include "Module_Chateau\Header\SubBlocs.h"
#include "Util\functions.h"

Castle::Castle(ofxBox2d& box2d, int mouseX, int mouseY) {
	char cwd[1024] = "";
	strcat(cwd, getAbsolutePath("sable.gif"));
	sable.loadImage(cwd);
	base = ofPtr<Bloc>(new BaseBloc(box2d, mouseX, mouseY));
	med = ofPtr<Bloc>(new MedBloc(box2d, mouseX + 8*Grains::size, mouseY - 10*Grains::size ));
	top = ofPtr<Bloc>(new TopBloc(box2d, mouseX + 12*Grains::size, mouseY - 17*Grains::size));
}

void Castle::draw() {
	if (base != NULL && med != NULL && top != NULL) {
		base->draw(sable);
		med->draw(sable);
		top->draw(sable);
	}
}

int Castle::getNbGrains() {
	return (base->getNbGrains() + med->getNbGrains() + top->getNbGrains());
}