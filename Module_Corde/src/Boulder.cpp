#pragma once 

#include "../header/Boulder.h"


Boulder::Boulder() :
	ofxBox2dCircle()
{
}

Boulder::~Boulder() {
}

void Boulder::draw() {
	this->ofxBox2dCircle::draw();
}