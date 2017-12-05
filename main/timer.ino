//namespace timer{
//#include <iostream>
//using namespace std;
//#include <time.h>  // class needs this inclusion
//
//
////////////////////////////////////////////
//// class declaration:
//
//
//
//    bool           resetted;
//    bool           running;
//    int tmp1;
//    unsigned long tmp;
//    unsigned long  beg;
//    unsigned long  end;
//
//
//
////////////////////////////////////////////
//// class implementation:
//
//
//Timer() {
//  resetted = true;
//  running = false;
//  beg = 0;
//  end = 0;
//  tmp = 10;
//  tmp1 = 0;
//}
//
//
//void start() {
//  if(! running) {
//    if(resetted)
//      beg = (unsigned long) clock();
//    else
//      beg -= end - (unsigned long) clock();
//    running = true;
//    resetted = false;
//  }
//}
//
//timer() {
//  if(running){
//    if((((unsigned long) clock() - beg) / CLOCKS_PER_SEC) != tmp1){
//      tmp1 = ((unsigned long) clock() - beg) / CLOCKS_PER_SEC;
//      tmp = tmp - 1;
//      return tmp;
//    }
//    return tmp;
//  }else
//    return end - beg;
//}
