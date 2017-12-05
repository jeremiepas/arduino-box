#include <Photocell.h>
int ledpin[3] = {2,3, 4};
int staptab[3] = {1,0,0};
Photocell photocell1(5);
Photocell photocell2(6);
Photocell photocell3(7);
//int ledtest3 = 5;
//int ledtest1 = 6;
//int ledtest2 = 7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    pinMode(ledpin[0], OUTPUT);
    pinMode(ledpin[1], OUTPUT);
    pinMode(ledpin[2], OUTPUT);
   digitalWrite(ledpin[1], HIGH);
//    digitalWrite(ledtest2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  staptab[0] = 1;
    validestap();
   if(staptab[0] == 0){
//    stepA();
  }
  if(staptab[0] == 1 && staptab[1] == 0){
//             Serial.println(photocell2.getphotocellReading());
                   Serial.println(photocell1.getphotocellReading());

    stapC();
  }
  if(staptab[1] == 1 && staptab[2] == 0){
//        stapB();
//    digitalWrite(ledtest3, LOW);
  }
//  Serial.println(photocell1.getphotocellReading());
}
