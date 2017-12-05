//namespace std{
//  
// class Segment{
// public:
//   void construct(int pnA, int pnB, int pnC, int pnD, int pnE, int pnF, int pnG, int on){
//      pinA = pnA;
//      pinB = pnB;
//      pinC = pnC;
//      pinD = pnD;
//      pinE = pnE;
//      pinF = pnF;
//      pinG = pnG;
//      D = on;
//     return;
//   }
//  void setup(){
//    pinMode(pinA, OUTPUT);
//    pinMode(pinB, OUTPUT);
//    pinMode(pinC, OUTPUT);
//    pinMode(pinD, OUTPUT);
//    pinMode(pinE, OUTPUT);
//    pinMode(pinF, OUTPUT);
//    pinMode(pinG, OUTPUT);
//    pinMode(D, OUTPUT);
//    return;
//  }
//  void writeint(int number){
//    if(number <= 9 && number >= 0){
//      digitalWrite(D, HIGH);
//      switch (number) {
//        case 0:
//          digitalWrite(pinA, LOW);
//          digitalWrite(pinB, LOW);
//          digitalWrite(pinC, LOW);
//          digitalWrite(pinD, LOW);
//          digitalWrite(pinE, LOW);
//          digitalWrite(pinF, LOW);
//          digitalWrite(pinG, HIGH);
//          digitalWrite(D, LOW);
//          break;
//        case 1:
//          digitalWrite(pinA, HIGH);
//          digitalWrite(pinB, LOW);
//          digitalWrite(pinC, LOW);
//          digitalWrite(pinD, HIGH);
//          digitalWrite(pinE, HIGH);
//          digitalWrite(pinF, HIGH);
//          digitalWrite(pinG, HIGH);
//          digitalWrite(D, LOW);
//        break;
//
//        case 2:
//          digitalWrite(pinA, LOW);
//          digitalWrite(pinB, LOW);
//          digitalWrite(pinC, HIGH);
//          digitalWrite(pinD, LOW);
//          digitalWrite(pinE, LOW);
//          digitalWrite(pinF, HIGH);
//          digitalWrite(pinG, LOW);
//          break;
//        case 3:
//          digitalWrite(pinA, LOW);
//          digitalWrite(pinB, LOW);
//          digitalWrite(pinC, LOW);
//          digitalWrite(pinD, LOW);
//          digitalWrite(pinE, HIGH);
//          digitalWrite(pinF, HIGH);
//          digitalWrite(pinG, LOW);
//          break;
//       case 4:
//         digitalWrite(pinA, HIGH);
//         digitalWrite(pinB, LOW);
//         digitalWrite(pinC, LOW);
//         digitalWrite(pinD, HIGH);
//         digitalWrite(pinE, HIGH);
//         digitalWrite(pinF, LOW);
//         digitalWrite(pinG, LOW);
//         break;
//        case 5:
//         digitalWrite(pinA, LOW);
//         digitalWrite(pinB, HIGH);
//         digitalWrite(pinC, LOW);
//         digitalWrite(pinD, LOW);
//         digitalWrite(pinE, HIGH);
//         digitalWrite(pinF, LOW);
//         digitalWrite(pinG, LOW);
//         break;
//       case 6:
//         digitalWrite(pinA, LOW);
//         digitalWrite(pinB, HIGH);
//         digitalWrite(pinC, LOW);
//         digitalWrite(pinD, LOW);
//         digitalWrite(pinE, LOW);
//         digitalWrite(pinF, LOW);
//         digitalWrite(pinG, LOW);
//         break;
//       case 7:
//         digitalWrite(pinA, LOW);
//         digitalWrite(pinB, LOW);
//         digitalWrite(pinC, LOW);
//         digitalWrite(pinD, HIGH);
//         digitalWrite(pinE, HIGH);
//         digitalWrite(pinF, HIGH);
//         digitalWrite(pinG, HIGH);
//        break;
//       case 8:
//         digitalWrite(pinA, LOW);
//         digitalWrite(pinB, LOW);
//         digitalWrite(pinC, LOW);
//         digitalWrite(pinD, LOW);
//         digitalWrite(pinE, LOW);
//         digitalWrite(pinF, LOW);
//         digitalWrite(pinG, LOW);
//         break;
//       case 9:
//         digitalWrite(pinA, LOW);
//         digitalWrite(pinB, LOW);
//         digitalWrite(pinC, LOW);
//         digitalWrite(pinD, HIGH);
//         digitalWrite(pinE, HIGH);
//         digitalWrite(pinF, LOW);
//         digitalWrite(pinG, LOW);
//         break;
//      }
//         digitalWrite(D, LOW);
//    }
//
//    return;
//  }
//  void writestop(){
//    digitalWrite(D, LOW);
//
//    return;
//  }
//private:
//  int pinA;
//  int pinB;
//  int pinC;
//  int pinD;
//  int pinE;
//  int pinF;
//  int pinG;
//  int D;
// };
//}
////Segment testt;
////void test(){
//////     testt.construct(2,3,4,5,6,7,8,9);
////
//////  seconde.construct(2,3,4,5,6,7,8,10);
////}
