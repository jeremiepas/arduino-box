#ifndef Timer_h
#define Timer_h

//#include <iostream>
//using namespace std;
#include <time.h>	// class needs this inclusion


//////////////////////////////////////////
// class declaration:


class Timer_
{
	public:
		Timer();
		void           start();
		void           stop();
		void           reset();
		bool           isRunning();
		unsigned long  getTime();
		bool           isOver(unsigned long seconds);
	private:
		bool           resetted;
		bool           running;
		int tmp1;
		unsigned long tmp;
		unsigned long  beg;
		unsigned long  end;
};

extern TIMER_ TIMER

#endif
