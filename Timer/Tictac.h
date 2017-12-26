#ifndef _Tictac_H_
#define _Tictac_H_

//#include <iostream>
//using namespace std;
// #include "Arduino.h"
#include <time.h>	// class needs this inclusion


//////////////////////////////////////////
// class declaration:


class Tictac
{
	private:
		bool           resetted;
		bool           running;
		int tmp1;
		unsigned long tmp;
		unsigned long  beg;
		unsigned long  end;
	public:
		Tictac();
		void           start();
		void           stop();
		void           reset();
		bool           isRunning();
		unsigned long  getTime();
		bool           isOver(unsigned long seconds);
};

#endif
