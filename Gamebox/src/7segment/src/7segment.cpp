//////////////////////////////////////////
// class implementation:
#include "Timer.h"

Timer_::Timer() {
	resetted = true;
	running = false;
	beg = 0;
	end = 0;
	tmp = 10;
	tmp1 = 0;
}


void Timer_::start() {
	if(! running) {
		if(resetted)
			beg = (unsigned long) clock();
		else
			beg -= end - (unsigned long) clock();
		running = true;
		resetted = false;
	}
}


void Timer_::stop() {
	if(running) {
		end = (unsigned long) clock();
		running = false;
	}
}


void Timer_::reset() {
	bool wereRunning = running;
	if(wereRunning)
		stop();
	resetted = true;
	beg = 0;
	end = 10;
	if(wereRunning)
		start();
}


bool Timer_::isRunning() {
	return running;
}


unsigned long Timer_::getTime() {
	if(running){
		if((((unsigned long) clock() - beg) / CLOCKS_PER_SEC) != tmp1){
			tmp1 = ((unsigned long) clock() - beg) / CLOCKS_PER_SEC;
			tmp = tmp - 1;
			return tmp;
		}
		return tmp;
	}else
		return end - beg;
}


bool Timer_::isOver(unsigned long seconds) {
	return seconds >= getTime();
}
