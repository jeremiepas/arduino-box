

/*
  Showing number 0-9 on a Common Anode 7-segment LED display
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
  This example code is in the public domain.
 */


 class Segment{
 public:
   void construct(int pnA, int pnB, int pnC, int pnD, int pnE, int pnF, int pnG, int on){
      pinA = pnA;
      pinB = pnB;
      pinC = pnC;
      pinD = pnD;
      pinE = pnE;
      pinF = pnF;
      pinG = pnG;
      D = on;
     return;
   }
  void setup(){
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
    pinMode(pinC, OUTPUT);
    pinMode(pinD, OUTPUT);
    pinMode(pinE, OUTPUT);
    pinMode(pinF, OUTPUT);
    pinMode(pinG, OUTPUT);
    pinMode(D, OUTPUT);
    return;
  }
  void writeint(int number){
    if(number <= 9 && number >= 0){
      digitalWrite(D, HIGH);
      switch (number) {
        case 0:
          digitalWrite(pinA, LOW);
          digitalWrite(pinB, LOW);
          digitalWrite(pinC, LOW);
          digitalWrite(pinD, LOW);
          digitalWrite(pinE, LOW);
          digitalWrite(pinF, LOW);
          digitalWrite(pinG, HIGH);
          digitalWrite(D, LOW);
          break;
        case 1:
          digitalWrite(pinA, HIGH);
          digitalWrite(pinB, LOW);
          digitalWrite(pinC, LOW);
          digitalWrite(pinD, HIGH);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, HIGH);
          digitalWrite(D, LOW);
        break;

        case 2:
          digitalWrite(pinA, LOW);
          digitalWrite(pinB, LOW);
          digitalWrite(pinC, HIGH);
          digitalWrite(pinD, LOW);
          digitalWrite(pinE, LOW);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, LOW);
          break;
        case 3:
          digitalWrite(pinA, LOW);
          digitalWrite(pinB, LOW);
          digitalWrite(pinC, LOW);
          digitalWrite(pinD, LOW);
          digitalWrite(pinE, HIGH);
          digitalWrite(pinF, HIGH);
          digitalWrite(pinG, LOW);
          break;
       case 4:
         digitalWrite(pinA, HIGH);
         digitalWrite(pinB, LOW);
         digitalWrite(pinC, LOW);
         digitalWrite(pinD, HIGH);
         digitalWrite(pinE, HIGH);
         digitalWrite(pinF, LOW);
         digitalWrite(pinG, LOW);
         break;
        case 5:
         digitalWrite(pinA, LOW);
         digitalWrite(pinB, HIGH);
         digitalWrite(pinC, LOW);
         digitalWrite(pinD, LOW);
         digitalWrite(pinE, HIGH);
         digitalWrite(pinF, LOW);
         digitalWrite(pinG, LOW);
         break;
       case 6:
         digitalWrite(pinA, LOW);
         digitalWrite(pinB, HIGH);
         digitalWrite(pinC, LOW);
         digitalWrite(pinD, LOW);
         digitalWrite(pinE, LOW);
         digitalWrite(pinF, LOW);
         digitalWrite(pinG, LOW);
         break;
       case 7:
         digitalWrite(pinA, LOW);
         digitalWrite(pinB, LOW);
         digitalWrite(pinC, LOW);
         digitalWrite(pinD, HIGH);
         digitalWrite(pinE, HIGH);
         digitalWrite(pinF, HIGH);
         digitalWrite(pinG, HIGH);
        break;
       case 8:
         digitalWrite(pinA, LOW);
         digitalWrite(pinB, LOW);
         digitalWrite(pinC, LOW);
         digitalWrite(pinD, LOW);
         digitalWrite(pinE, LOW);
         digitalWrite(pinF, LOW);
         digitalWrite(pinG, LOW);
         break;
       case 9:
         digitalWrite(pinA, LOW);
         digitalWrite(pinB, LOW);
         digitalWrite(pinC, LOW);
         digitalWrite(pinD, HIGH);
         digitalWrite(pinE, HIGH);
         digitalWrite(pinF, LOW);
         digitalWrite(pinG, LOW);
         break;
      }
         digitalWrite(D, LOW);
    }

    return;
  }
  void writestop(){
    digitalWrite(D, LOW);

    return;
  }
private:
  int pinA;
  int pinB;
  int pinC;
  int pinD;
  int pinE;
  int pinF;
  int pinG;
  int D;
 };
  Segment minute;
  Segment seconde;

  int incomingByte =0;
void setup() {

    Serial.begin(9600);
  minute.construct(2,3,4,5,6,7,8,9);
  seconde.construct(2,3,4,5,6,7,8,10);
  minute.setup();
  seconde.setup();
}
/*
  Showing number 0-9 on a Common Anode 7-segment LED display
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
  This example code is in the public domain.
 */

void loop() {
     int i = -1;
     int b = -1;
     minute.writeint(0);
  while(++i <= 9){
        b = -1;
    while(++b <= 9){
      seconde.writeint(b);
    delay(1000);
    }
      minute.writeint(i);
  }

}
