#pragma once

#include "Season.h"

class Year {
private:
	vector<ofPtr<Season>> seasons;

public: 
	inline int getSeason() { return seasons.size(); }
	Year();
	~Year();
	void playYear();
};