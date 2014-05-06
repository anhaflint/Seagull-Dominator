#include "Module_Chateau\Header\Castle.h"
#include "Module_Chateau\Header\SubBlocs.h"

Castle::Castle(ofxBox2d& box2d, int mouseX, int mouseY) {
	sable.loadImage("C:/Users/Quentin/Polytech/Mini Projet/openFrameworks-VS2013/addons/ofxBox2d/example-Simple/src/Img/sable.gif");
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