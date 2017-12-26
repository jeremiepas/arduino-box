double stapA(){
 int i= -1;
 int etatBouton[4]={digitalRead(pinBouton[0]),digitalRead(pinBouton[1]),digitalRead(pinBouton[2]),digitalRead(pinBouton[3])};
 while(++i < 4){
   code[i] = etatBouton[i];
 }

 if(code[0] == 0 && code[1] == 0 && code[2] == 1 && code[3] == 1){
   m.clear();
   m.writeSprite(0, 0, smile01);
   delay(2000);
  return true;
 }
  return false;    
}
