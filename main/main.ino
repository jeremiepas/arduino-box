#include <time.h>
#include <Stepper.h>
#include <Photocell.h>
#include <Ledmatrix.h>
#define STEPS 32
int ledpin[3] = {2, 3, 4};
//int ledcode[4]= {16, 0, 1, 4};
int steptab[3] = {0,0,1};
int pinBouton[4] = {8,9,10,11}; //led de test
int code[4] = {0,0,0,0};
Photocell photocell1(5);
Photocell photocell2(6);
Photocell photocell3(7);
int DIN = 19;   // DIN pin of MAX7219 module
int CLK = 13;   // CLK pin of MAX7219 module
int CS = 18;    // CS pin of MAX7219 module
int maxInUse = 1;
Ledmatrix m(DIN, CS, CLK, maxInUse);
Stepper stepper (STEPS, 14, 16, 15, 17);

//--------------------------------------------------------------
int secondes_remain = 2;
int minutes_remain = 1;
//--------------------------------------------------------------

char heart[10][6] =
{
  {4,8,//0
    B00011111,
    B00010001,
    B00011111,
    B00000000,
  },
  { 4, 8,//1
    B00011111,
    B00000000,
    B00000000,
    B00000000,
  },
  { 4, 8,//2
    B00011101,    
    B00010101,     
    B00010111,
    B00000000,
  },
  { 4, 8,//3
    B00010101,  
    B00010101,     
    B00011111,
    B00000000,  
  },
  {4, 8,//4
  B00000111,
  B00000100,
  B00011111,
  B00000000,
  },
  { 4, 8,//5
  B00010111,
  B00010101,
  B00011101,
  B00000000,
  },
   { 4, 8,//6
  B00011111,
  B00010101,
  B00011101,
  },
  { 4, 8,//7
  B00010001,
  B00001001,
  B00000111,
  B00000000,
  },
  { 4, 8,//8
  B00011111,
  B00010101,
  B00011111,
  B00000100,
  },
  { 4, 8,//9
  B00010111,
  B00010101,
  B00011111,
  B00000000,
  }
 };
char A[] = {4, 8,
            B01111110,
            B00010001,
            B00010001,
            B01111110,
           };
char B[] = {4, 8,
            B01111111,
            B01001001,
            B01001001,
            B00110110,
           };
char smile01[] = {8, 8,
                  B00111100,
                  B01000010,
                  B10010101,
                  B10100001,
                  B10100001,
                  B10010101,
                  B01000010,
                  B00111100
                 };
char smile02[] = {8, 8,
                  B00111100,
                  B01000010,
                  B10010101,
                  B10010001,
                  B10010001,
                  B10010101,
                  B01000010,
                  B00111100
                 };
char smile03[] = {8, 8,
                  B00111100,
                  B01000010,
                  B10100101,
                  B10010001,
                  B10010001,
                  B10100101,
                  B01000010,
                  B00111100
                 };
//-------------------------------------------------------------
void setup() {
  Serial.begin(9600);
  stepper.setSpeed(200);
  // initialization of the MAX7219
  m.init(); // MAX7219 initialization
  m.setIntensity(9); // initial led matrix intensity, 0-15

  //------------------------------
  pinMode(ledpin[0], OUTPUT);
  pinMode(ledpin[1], OUTPUT);
  pinMode(ledpin[2], OUTPUT);
  //----------------
//  int i = 0;
//  while(i++ < 4 ){
////  pinMode(ledcode[i], OUTPUT);
//    pinMode(pinBouton[i],INPUT);
//  }
}

void loop() {
  timer();
  validestap();
//-------------------------------------------------------------------------------
  //  Serial.println(photocell1.getphotocellReading());

//-------------------------------------------------------------------------------
//  m.setDot(6,6,true); 
//  delay(1000);
//  m.setDot(6,3,true);
//  delay(1000);
//  m.setDot(6,3,true);
//  delay(1000);
//  m.clear(); // Clears the display
//  m.clear();

  // Displaying the character at x,y (upper left corner of the character)  
//  m.writeSprite(2, 0, B);
//  delay(1000);
//  m.writeSprite(0, 0, smile01);
//  delay(1000);
  
 
  
 
//             int n = -1;
//      while(n++ < 5){
//  displayled.setRegistry(n, heart[2][n] + heart[2][n] *31);
//      }

}
