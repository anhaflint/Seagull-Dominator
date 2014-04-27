#ifndef TIMER_H
#define TIMER_H

#include <time.h>

class Timer {
public:
	Timer() { start = ::time(NULL); }
	virtual ~Timer() {}

	unsigned long Lapse() {
		return ::time(NULL) - start;
	}
private:
	unsigned long start;
};

#endif