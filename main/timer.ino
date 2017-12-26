void timer(){
       static unsigned long last_time = 0; // Temps antérieur
  unsigned long time_now = millis();  // Temps actuel
 
  // Si le minuteur est en marche

    // Et que 1 sec s'est écoulée
    if(time_now - last_time >= 1000) {
 
      // Décrémentation des secondes
      if(--secondes_remain < 0) {
        secondes_remain = 59; // Si il n'y as plus de seconde
 
        // Décrémentation des minutes
        if(--minutes_remain < 0) {
          minutes_remain = 0;   //
          secondes_remain = 0; // Si il n'y as plus de minute
 
          // Mise en marche du buzzer jusqu'à ce que l'utilisateur appui sur le bouton Start/Stop
//          while(running) {
//            tone(BUZZER_PIN, 500, 500);
                m.clear();
                m.writeSprite(0, 0, smile03);

              delay(6000); 
//          }
 
          // Reprise à l'état initial
          secondes_remain = 10;
        }
      }
 
      // Affichage du temps restant
      
      last_time = time_now;
    }
  m.clear();
  m.writeSprite(1,0, heart[secondes_remain/10]);
  m.writeSprite(5, 0, heart[secondes_remain%10]);
}
