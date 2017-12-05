#ifndef Photocell_h
#define Photocell_h

#include "Arduino.h"

/* Photocell simple testing sketch.
*
* Connect one end of the photocell to 5V, the other end to Analog 0.
* Then connect one end of a 10K resistor from Analog 0 to ground
* Connect LED from pin 11 through a resistor to ground
*
*/



class Photocell
{
public:
  Photocell(int pin);
  getphotocellReading();
private:
  int photocellPin;
  int photocellReading;
};
#endif
