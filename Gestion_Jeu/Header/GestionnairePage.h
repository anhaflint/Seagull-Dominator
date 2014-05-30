#pragma once

#include "PageJeu.h"
#include <stdio.h>
#include "ofxBox2d.h"

class GestionnairePage
{
public:
	static inline void EmpilerPage(PageJeu *pagejeu){ PilePage.push(pagejeu); printf("Nombre de pages dans la pile = %d pages \n", PilePage.size()); }
	static inline void DepilerPage(){ PilePage.pop(); printf("Nombre de pages dans la pile = %d pages \n", PilePage.size()); }
	static inline PageJeu* PageCourante(){ return PilePage.top(); }

	static ofxBox2d box2d;			  //	the box2d world
	static stack<PageJeu *> PilePage;
};

