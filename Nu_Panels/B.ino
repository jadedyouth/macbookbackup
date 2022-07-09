
/*
void horizontalStrafe (){

 for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} 


ver++; if (ver >= 10 ){ ver = 0;}
delay (120);

switch (ver) {
  case 0: for (int i = 0; i < 15; i++){leds[i] = CHSV (0, scannerSat, 30);} break;
  case 1: for (int i = 15; i <30; i++){leds[i] = CHSV (45, scannerSat, 30);} break;
  case 2: for (int i = 30; i < 45; i++){leds[i] = CHSV (0, scannerSat, 30);} break;
  case 3: for (int i = 45; i < 60; i++){leds[i] = CHSV (45, scannerSat, 30);} break;
  case 4: for (int i = 60; i < 75; i++){leds[i] = CHSV (0, scannerSat, 30);} break;
  case 5: for (int i = 75; i < 90; i++){leds[i] = CHSV (45, scannerSat, 30);} break;
  case 6: for (int i = 90; i < 105; i++){leds[i] = CHSV (0, scannerSat, 30);} break;
  case 7: for (int i = 105; i < 120; i++){leds[i] = CHSV (45, scannerSat, 30);} break;
  case 8: for (int i = 120; i < 135; i++){leds[i] = CHSV (0, scannerSat, 30);} break;
  case 9: for (int i = 135; i < 150; i++){leds[i] = CHSV (45, scannerSat, 30);} break;
}

 LEDS.show();  
  }
*/
void scanner (){

 for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} 

if (scannerTimer > scannerTime) {
if (scannerVerticleDirection == 0) {scannerVerticle++; if (scannerVerticle >= 10 ){ scannerVerticleDirection = 1;}  }
if (scannerVerticleDirection == 1) {scannerVerticle--; if (scannerVerticle <= 0 ){ scannerVerticleDirection = 0;}  }

if (scannerHorizontalDirection == 0) {scannerHorizontal++; if (scannerHorizontal >= 15 ){ scannerHorizontalDirection = 1;}  }
if (scannerHorizontalDirection == 1) {scannerHorizontal--; if (scannerHorizontal <= 0 ){ scannerHorizontalDirection = 0;}  }

scannerTimer = 0;}


switch (scannerVerticle) {
  case 0: for (int i = 0; i < 15; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 1: for (int i = 15; i <30; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 2: for (int i = 30; i < 45; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 3: for (int i = 45; i < 60; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 4: for (int i = 60; i < 75; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 5: for (int i = 75; i < 90; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 6: for (int i = 90; i < 105; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 7: for (int i = 105; i < 120; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 8: for (int i = 120; i < 135; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 9: for (int i = 135; i < 150; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[i+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
}

switch (scannerHorizontal) {
  case 0: for (int i = 0; i < 10; i++){leds[p0_hline0[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline0[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline0[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 1: for (int i = 0; i < 10; i++){leds[p0_hline1[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline1[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline1[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 2: for (int i = 0; i < 10; i++){leds[p0_hline2[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline2[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline2[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 3: for (int i = 0; i < 10; i++){leds[p0_hline3[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline3[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline3[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 4: for (int i = 0; i < 10; i++){leds[p0_hline4[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline4[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline4[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 5: for (int i = 0; i < 10; i++){leds[p0_hline5[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline5[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline5[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 6: for (int i = 0; i < 10; i++){leds[p0_hline6[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline6[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline6[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 7: for (int i = 0; i < 10; i++){leds[p0_hline7[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline7[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline7[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 8: for (int i = 0; i < 10; i++){leds[p0_hline8[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline8[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline8[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 9: for (int i = 0; i < 10; i++){leds[p0_hline9[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline9[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline9[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 10: for (int i = 0; i < 10; i++){leds[p0_hline10[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline10[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline10[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 11: for (int i = 0; i < 10; i++){leds[p0_hline11[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline11[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline11[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 12: for (int i = 0; i < 10; i++){leds[p0_hline12[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline12[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline12[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 13: for (int i = 0; i < 10; i++){leds[p0_hline13[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline13[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline13[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 14: for (int i = 0; i < 10; i++){leds[p0_hline14[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline14[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline14[i]+300] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  
  
  }


 LEDS.show();     
  
  
  
  
  
  
  
  
  }
