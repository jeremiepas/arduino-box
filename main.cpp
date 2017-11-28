#include <iostream>
using namespace std;

class time{
public:
  string bonjour(){
    return "hello test";
  };
  void timerset(minutes, secondes){
      this.start_minutes = minutes;
      this.start_secondes = secondes;
    return 0;
  }
  float timer_rest(){
    return timer_minutes + (timer_secondes/100);
  }
private:
  float timer_minutes;
  float timer_secondes;
  float time;
  int start_secondes;
  int start_minutes;
};

int main() {
   personnage agahte;

   cout << agahte.bonjour();
   return 0;
}
