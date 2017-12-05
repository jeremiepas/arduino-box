#include <iostream>
using namespace std;
#include <time.h>	// class needs this inclusion


//////////////////////////////////////////
// class declaration:


class timer {
	public:
		timer();
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


//////////////////////////////////////////
// class implementation:


timer::timer() {
	resetted = true;
	running = false;
	beg = 0;
	end = 0;
	tmp = 10;
	tmp1 = 0;
}


void timer::start() {
	if(! running) {
		if(resetted)
			beg = (unsigned long) clock();
		else
			beg -= end - (unsigned long) clock();
		running = true;
		resetted = false;
	}
}


void timer::stop() {
	if(running) {
		end = (unsigned long) clock();
		running = false;
	}
}


void timer::reset() {
	bool wereRunning = running;
	if(wereRunning)
		stop();
	resetted = true;
	beg = 0;
	end = 10;
	if(wereRunning)
		start();
}


bool timer::isRunning() {
	return running;
}


unsigned long timer::getTime() {
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


bool timer::isOver(unsigned long seconds) {
	return seconds >= getTime();
}

//create class gameBox
class gameBox {
public:
  gameBox()
  void setup()
  void start();
  bool stepA();
  bool stepB();
  bool stepC();
private:
  int timedown;
  int validatestep[3];
  int photocellPin;
}
// inplement game class
gameBox::gameBox(){
  photocellPin = 2
  validatestep[0] = 0;
  validatestep[1] = 0;
  validatestep[2] = 0;
}

gameBox::setup(){
    pinMode(ledPin, OUTPUT);  // have an LED for output
}

gameBox::start(){

}

gameBox::stepA(){
  if(validatestep[0] == 0){

  }else{
  return true;
  }
}
gameBox::stepB(){
  if(validatestep[1] == 1){
    return true;
  }else{
    while(validatestep[1] == 0){

    }
    return false;
  }
}
//end class game
void setup() {

}
void loop() {

}
