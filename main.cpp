#include <iostream>
using namespace std;

class time{
public:
  void timerset(minutes, secondes){
      this.start_minutes = minutes;
      this.start_secondes = secondes;
    return;
  };
  void timer(time_now){
    if(time_now - this.lastime >= 1000){
      if(--this.secondes_remain < 0) {
        this.secondes_remain = 59; // Si il n'y as plus de seconde

        // Décrémentation des minutes
        if(--this.minutes_remain < 0) {
          this.minutes_remain = 0;   //
          this.secondes_remain = 0; // Si il n'y as plus de minute
          affiche_temps();

          // Mise en marche du buzzer jusqu'à ce que l'utilisateur appui sur le bouton Start/Stop

          // Reprise à l'état initial
          this.secondes_remain = 10;
        }
      }

      // Affichage du temps restant
      this.affiche_temps();
      this.last_time = time_now;
    }
  };
  void affiche_temps() {

    // Converti le temps restant en chaîne de caractères
    char tmp[5];
    sprintf(tmp, "%02d%02d", minutes_remain, secondes_remain);

    // Active les doubles points horaire
    Serial.write(AFF_CRTL_DP);
    Serial.write(DP_HORAIRE);

    // Affiche les 4 digits
    Serial.write((uint8_t*)tmp, 4);
  }
private:
  float timer_minutes;
  float timer_secondes;
  float time;
  int start_secondes;
  int start_minutes;
};
/*
* class time end
*/
int main() {
   personnage agahte;

   cout << agahte.bonjour();
   return 0;
}
