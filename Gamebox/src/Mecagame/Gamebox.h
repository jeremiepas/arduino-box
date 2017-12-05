#ifndef Gamebox_h
#define Gamebox_h

#include "Arduino.h"

/* Photocell simple testing sketch.
*
* Connect one end of the photocell to 5V, the other end to Analog 0.
* Then connect one end of a 10K resistor from Analog 0 to ground
* Connect LED from pin 11 through a resistor to ground
*
*/



class Gamebox
{
public:
  Gamebox(int pin);
  int stepA();
  int stepB();
  int stepB();
  int checkstep();
private:
  int steptab[3] = {0,0,0};
  int LED[3];
  int photocellReading;
};
#endif
