#include "Arduino.h"
#include "Gamebox.h"

Gamebox::Gamebox(int pin)
{
  int i = 0;
  while(i < 3){
    LED[i] = pin[i];
    i++;
  }
  return;
}

int Gamebox::checkstep()()
{

  return reading;
}
