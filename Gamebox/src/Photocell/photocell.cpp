#include "Arduino.h"
#include "Photocell.h"

Photocell::Photocell(int pin)
{
  photocellPin = pin;
}

int Photocell::getphotocellReading()
{
  int reading = 0;  // start with 0

  // set the pin to an output and pull to LOW (ground)
  pinMode(photocellPin, OUTPUT);
  digitalWrite(photocellPin, LOW);

  // Now set the pin to an input and...
  pinMode(photocellPin, INPUT);
  while (digitalRead(photocellPin) == LOW) { // count how long it takes to rise up to HIGH
    reading++;      // increment to keep track of time

    if (reading == 30000) {
      // if we got this far, the resistance is so high
      // its likely that nothing is connected!
      break;           // leave the loop
    }
  }
  // OK either we maxed out at 30000 or hopefully got a reading, return the count

  return reading;
}
