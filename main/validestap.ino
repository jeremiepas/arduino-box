#include <Arduino.h>

void validestap(){

  int i = 0;
  while(i <= 3){
  if(staptab[i] == 1){
   digitalWrite(ledpin[i], LOW); //allumer L1
  }else{
   digitalWrite(ledpin[i], HIGH); //allumer L1
  }
  ++i;
  }
}
