//
////writes the temperature on display
//void updateDisp(){
//  for(byte j=0; j<4; j++)  
//    digitalWrite(digitPins[j], LOW);
//
//  digitalWrite(latchPin, LOW);  
//  shiftOut(dataPin, clockPin, MSBFIRST, B11111111);
//  digitalWrite(latchPin, HIGH);
//
//  delayMicroseconds(100);
//  digitalWrite(digitPins[digitScan], HIGH); 
//
//  digitalWrite(latchPin, LOW);  
//  if(digitScan==2)
//    shiftOut(dataPin, clockPin, MSBFIRST, ~(digit[digitBuffer[digitScan]] | B10000000)); //print the decimal point on the 3rd digit
//  else
//    shiftOut(dataPin, clockPin, MSBFIRST, ~digit[digitBuffer[digitScan]]);
//
//  digitalWrite(latchPin, HIGH);
//  digitScan++;
//  if(digitScan>3) digitScan=0; 
//}
//
//void Nsegement(){ 
//  tempK = (((analogRead(tempPin)/ 1023.0) * 5.0) * 100.0);  
//  //Converts Kelvin to Celsius minus 2.5 degrees error
//  tempC = tempK - 273.0;   
//  tempF = ((tempK - 2.5) * 9 / 5) - 459.67;
//  //Celsius temperature display
//  tempC = int(tempC*100);
//  digitBuffer[3] = 1;//int(tempC)/1000;
//  digitBuffer[2] = 2;//(int(tempC)%1000)/100;
//  digitBuffer[1] = 3;//(int(tempC)%100)/10;
//  digitBuffer[0] = 4;//(int(tempC)%100)%10;
//  updateDisp();
//  delay(5);
//
//  /*
//  //Fahrenheit temperature display
//  tempF = int(tempF*100);
//  digitBuffer[3] = int(tempF)/1000;
//  digitBuffer[2] = (int(tempF)%1000)/100;
//  digitBuffer[1] = (int(tempF)%100)/10;
//  digitBuffer[0] = (int(tempF)%100)%10;
//  updateDisp();
//  delay(2);
//  */
//}
