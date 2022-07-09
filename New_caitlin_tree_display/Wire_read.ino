  void receiveEvent(int howMany) {
/*  while (1 < Wire.available()) { // loop through all but the last
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  } */
  int x0 = Wire.read(); 
  int x1 = Wire.read();
  int x2 = Wire.read();
  int x3 = Wire.read();
  int x4 = Wire.read();
  int x5 = Wire.read();// receive byte as an integer

 potZero = x0;
 potOne = x1;
 potTwo = x2;
 potThree = x3;
 potFour = x4;
 potFive = x5;

  if (potFive == 0 && potFour == 0) {Mode = 0;} 
  if (potFive == 0 && potFour == 1) {Mode = 1; } 
  if (potFive == 0 && potFour == 2) {Mode = 2; } 
  if (potFive == 0 && potFour == 3) {Mode = 3; }
  if (potFive == 0 && potFour == 4) {Mode = 4; } 
  if (potFive == 0 && potFour == 5) {Mode = 5; } 
  if (potFive == 0 && potFour == 6) {Mode = 6; } 
  if (potFive == 0 && potFour == 7) {Mode = 7; } 
  if (potFive == 0 && potFour == 8) {Mode = 8; } 
  if (potFive == 0 && potFour == 9) {Mode = 9; } 
  if (potFive == 0 && potFour == 10) {Mode = 10; } 

  if (potFive == 1 && potFour == 0) {Mode = 11; }
  if (potFive == 1 && potFour == 1) {Mode = 12; }
  if (potFive == 1 && potFour == 2) {Mode = 13; }
  if (potFive == 1 && potFour == 3) {Mode = 14; }
  if (potFive == 1 && potFour == 4) {Mode = 15; }
  if (potFive == 1 && potFour == 5) {Mode = 16; } 
  if (potFive == 1 && potFour == 6) {Mode = 17; } 
  if (potFive == 1 && potFour == 7) {Mode = 18; } 

/*
 Serial.println (potZero);
  Serial.println (potOne);
   Serial.println (potTwo);
   Serial.println (potThree);
    Serial.println (potFour);
     Serial.println (potFive);

*/
}
