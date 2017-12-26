//#include <iostream>
//using namespace std;
#include "Tictac.h"



//////////////////////////////////////////
// class implementation:


Tictac::Tictac() {
	resetted = true;
	running = false;
	beg = 0;
	end = 0;
	tmp = 10;
	tmp1 = 0;
}


void Tictac::start() {
	if(! running) {
		if(resetted)
			beg = (unsigned long) clock();
		else
			beg -= end - (unsigned long) clock();
		running = true;
		resetted = false;
	}
}


void Tictac::stop() {
	if(running) {
		end = (unsigned long) clock();
		running = false;
	}
}


void Tictac::reset() {
	bool wereRunning = running;
	if(wereRunning)
		stop();
	resetted = true;
	beg = 0;
	end = 10;
	if(wereRunning)
		start();
}


bool Tictac::isRunning() {
	return running;
}


unsigned long Tictac::getTime() {
	if(running){
		if((((unsigned long) clock() - beg) / CLOCKS_PER_SEC) != tmp1){
			tmp1 = ((unsigned long) clock() - beg) / CLOCKS_PER_SEC;
			tmp =  (tmp1 - tmp);
			return tmp;
		}
		return tmp;
	}else
		return end - beg;
}


bool Tictac::isOver(unsigned long seconds) {
	return seconds >= getTime();
}
