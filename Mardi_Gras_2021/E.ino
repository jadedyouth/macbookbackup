void Tron () {
  
  
  
for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}

for (int i = 0; i< 300; i++){ leds[TronGrid [i]] = CHSV(95, 255, GridVal);}//65

if (TronPage == 99) { for (int i = 0; i< 300; i++){ leds[TronGrid [i]] = CHSV(95, 255, GridVal);} 
if (GridVal > 65) {GridVal --;} if (GridVal == 65) {TronPage = 0;}
}


if (TronPage == 0) { 

for (int i = 0; i< TronRedCounter; i++){ leds[TronRedPG1 [i]] = CHSV(20, 255, 190);}
for (int i = 0; i< TronBlueCounter; i++){ leds[TronBluePG1 [i]] = CHSV(140, 255, 190);}

if (TronRedCounter >= 114) { TronPage = 1;  TronBlueCounter = 0; TronRedCounter = 0; }
}

  
if (TronPage == 2) { 

for (int i = 0; i< TronRedCounter; i++){ leds[TronRedPG2 [i]] = CHSV(20, 255, 190);}
for (int i = 0; i< TronBlueCounter; i++){ leds[TronBluePG2 [i]] = CHSV(140, 255, 190);}


if (TronRedCounter >= 162) { TronPage = 3;  TronBlueCounter = 0; TronRedCounter = 0; }
}
  
 
if (TronPage == 4) { 
  for (int i = 0; i< TronRedCounter; i++){ leds[TronRedPG3 [i]] = CHSV(20, 255, 190);}
  for (int i = 0; i< TronBlueCounter; i++){ leds[TronBluePG3 [i]] = CHSV(140, 255, 190);}
 
  if (TronRedCounter >= 60) { TronPage = 5;  TronBlueCounter = 0; TronRedCounter = 0; }
  }


if (TronPage == 6) { 
  for (int i = 0; i< TronRedCounter; i++){ leds[TronRedPG4 [i]] = CHSV(20, 255, 190);}
  for (int i = 0; i< TronBlueCounter; i++){ leds[TronBluePG4 [i]] = CHSV(140, 255, 190);}
  
  if (TronRedCounter >= 21) { TronPage = 7;  TronBlueCounter = 0; TronRedCounter = 0; }
  }

if (TronPage == 8) { 

  for (int i = 0; i< 60; i++){ leds[TronRedPG3 [i]] = CHSV(20, 255, 190);}
  for (int i = 0; i< 60; i++){ leds[TronBluePG3 [i]] = CHSV(140, 255, 190);}

  for (int i = 0; i< TronRedCounter; i++){ leds[TronRedPG5 [i]] = CHSV(20, 255, 190);}
  for (int i = 0; i< TronBlueCounter; i++){ leds[TronBluePG5 [i]] = CHSV(140, 255, 190);}


  if (TronRedCounter >= 23) { TronPage = 9;  TronBlueCounter = 0; TronRedCounter = 0; }
}


if (TronPage == 10) { 

  for (int i = 0; i< 21; i++){ leds[TronRedPG4 [i]] = CHSV(20, 255, 190);}
  for (int i = 0; i< 21; i++){ leds[TronBluePG4 [i]] = CHSV(140, 255, 190);}


  for (int i = 0; i< TronRedCounter; i++){ leds[TronRedPG6 [i]] = CHSV(20, 255, 190);}
  for (int i = 0; i< TronBlueCounter; i++){ leds[TronBluePG6 [i]] = CHSV(140, 255, 190);}


 if (TronRedCounter >= 41) { TronPage = 11;  TronBlueCounter = 0; TronRedCounter = 0; }

}


if (TronPage == 12) { 


  for (int i = 0; i< 21; i++){ leds[TronRedPG4 [i]] = CHSV(20, 255, 190);}
  for (int i = 0; i< 21; i++){ leds[TronBluePG4 [i]] = CHSV(140, 255, 190);}

  for (int i = 0; i< 41; i++){ leds[TronRedPG6 [i]] = CHSV(20, 255, 190);}
  for (int i = 0; i< 36; i++){ leds[TronBluePG6 [i]] = CHSV(140, 255, 190);}


  for (int i = 0; i< 9; i++){ leds[TronExpold [i]] = CHSV(45, 0, 255);}

if (BB >= 200) { for (int i = 0; i< 9; i++){ leds[TronExpold [i]] = CHSV(0, 0, 0);}  BB = 0;}

  if (CC >= 1500) { TronPage = 13;}


}




if (TronPage < 98) {

if (AA >= 50) {
  
  TronRedCounter++;
  TronBlueCounter++;
AA = 0;
}

}

FastLED.show(); 

if (TronPage == 1) {for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}  TronPage = 2; AA = 0;  }

if (TronPage == 3) {for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}  TronPage = 4; AA = 0;  }

if (TronPage == 5) {for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}  TronPage = 6; AA = 0;  }

if (TronPage == 7) {for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}  TronPage = 8; AA = 0;  }

if (TronPage == 9) {for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}  TronPage = 10; }

if (TronPage == 11) {  TronPage = 12; AA = 0;  BB = 0; CC = 0;}
  
  
  
 if (TronPage == 13) { Master++; WordTime = 0;   for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);} 
  
  
  CC = 0; BB = 0; AA = 0; GridVal = 255; TronBlueCounter = 0; TronRedCounter = 0; TronPage = 99; 
 
  } 
  
  }
