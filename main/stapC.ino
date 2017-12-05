
double stapC(){
  int a = 0;
  if(photocell1.getphotocellReading() >= 2000 && photocell2.getphotocellReading() < 2000 && photocell3.getphotocellReading() < 2000){
//      digitalWrite(ledtest1, LOW);
         Serial.println(photocell2.getphotocellReading());
         if(a == 0){
             digitalWrite(ledpin[1], LOW);
             delay(1000);
             digitalWrite(ledpin[1], HIGH);
             a++;
         }
       while(photocell1.getphotocellReading() >= 2000 ){
           if(a == 1){
             digitalWrite(ledpin[1], LOW);
             delay(1000);
             digitalWrite(ledpin[1], HIGH);
             a++;
         }
     if(photocell1.getphotocellReading() > 2000 && photocell2.getphotocellReading() >= 2000 && photocell3.getphotocellReading() < 2000){
//              digitalWrite(ledtest3, LOW);
           if(a == 2){
             digitalWrite(ledpin[1], LOW);
             delay(1000);
             digitalWrite(ledpin[1], HIGH);
             a++;
         }       
          while(photocell2.getphotocellReading() >= 2000 ){
//             digitalWrite(ledtest2, LOW);

//             digitalWrite(ledtest3, LOW);
          if(photocell1.getphotocellReading() > 2000 && photocell2.getphotocellReading() > 2000 && photocell3.getphotocellReading() >= 2000){
            delay(1000);
            staptab[1] = true;
          }
          }
    }else{
//      digitalWrite(ledtest2, HIGH);
    }
    }
  }else{
    a = 0;
//          digitalWrite(ledtest3, HIGH);          
//          digitalWrite(ledtest2, HIGH);
//          digitalWrite(ledtest1, HIGH);  
  }

}
