//#include <iostream>
//using namespace std;
#include "Arduino.h"
#include "Timer.h"
#include "time.h"	// class needs this inclusion



//////////////////////////////////////////
// class implementation:


Timer::Timer() {
	resetted = true;
	running = false;
	beg = 0;
	end = 0;
	tmp = 10;
	tmp1 = 0;
}


void Timer::start() {
	if(! running) {
		if(resetted)
			beg = (unsigned long) clock();
		else
			beg -= end - (unsigned long) clock();
		running = true;
		resetted = false;
	}
}


void Timer::stop() {
	if(running) {
		end = (unsigned long) clock();
		running = false;
	}
}


void Timer::reset() {
	bool wereRunning = running;
	if(wereRunning)
		stop();
	resetted = true;
	beg = 0;
	end = 10;
	if(wereRunning)
		start();
}


bool Timer::isRunning() {
	return running;
}


unsigned long Timer::getTime() {
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


bool Timer::isOver(unsigned long seconds) {
	return seconds >= getTime();
}

