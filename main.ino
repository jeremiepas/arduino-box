#include <Arduino.h>
#include <pins_arduino.h>
#include <time.h>


char minutes = 0;
char secondes = 0;


void setup() {
    Serial.begin(9600);

}

void loop() {
  static unsigned long last_time = 0; // Temps antérieur
  unsigned long time_now = millis();


}

void timer(){
  if(time_now - lastime >= 1000){
    if(--secondes_remain < 0) {
      secondes_remain = 59; // Si il n'y as plus de seconde

      // Décrémentation des minutes
      if(--minutes_remain < 0) {
        minutes_remain = 0;   //
        secondes_remain = 0; // Si il n'y as plus de minute
        affiche_temps();

        // Mise en marche du buzzer jusqu'à ce que l'utilisateur appui sur le bouton Start/Stop

        // Reprise à l'état initial
        secondes_remain = 10;
      }
    }

    // Affichage du temps restant
    affiche_temps();
    last_time = time_now;
  }
  }
}

/* Fonction d'affichage du temps restant */
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
