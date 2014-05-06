#include <iostream>
#include "Affichage.h"
#include "ofxBox2d.h"

using namespace std;

Affichage Affichage::m_instance = Affichage();

Affichage::Affichage(string &file)
{
	img->push_back(new ofImage());
	img->loadImage(file);
	cout << "Creation" << endl;
}

Affichage::~Affichage()
{
	cout << "Destruction" << endl;
}

Affichage& Affichage::Instance()
{
	return m_instance;
}

void aff_img(ofVec2f &pos)
{
	img->draw(pos);
}
int main(void)
{
	//1er appel de Instance: on alloue le pointeur Affichage::m_instance
	Affichage& ptr1 = Affichage::Instance();

	//2eme appel:on se contente de renvoyer le pointeur déjà allouer.
	Affichage& ptr2 = Affichage::Instance();

	//ptr1 et ptr2 pointe sur la même adresse mémoire.
	//On voit donc qu'il ny a bien qu'un seul objet.
	cout << &ptr1 << "|" << &ptr2 << endl;

	return 0;
}