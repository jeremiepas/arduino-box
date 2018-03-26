#include <Arduino.h>

void validestap(){
   if(steptab[0] == 0){
      steptab[0] = stapA();
   }else if(steptab[1] == 0){
      steptab[1] = stapB();
   }else if(steptab[2] == 0){
//     steptab[2] = stapC();
   }
   int i = -1;
   while(i < 3){
     if(steptab[i] == 1){
     digitalWrite(ledpin[i], HIGH);
     } else {
        digitalWrite(ledpin[i], LOW);
     }
      ++i;
    }
    if(steptab[0] == 1 && steptab[1] == 1 && steptab[2] == 1){
      while(true){
        m.clear();
        m.writeSprite(0, 0, smile01);
        stepper.step(30024);
      }
    }
}
