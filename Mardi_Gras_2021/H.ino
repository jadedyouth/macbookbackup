void scanner (){

 for (int i = 0; i< NUM_LEDS; i++){leds[i] = CHSV (0, 0, 0);} 

if (scannerTimer > scannerTime) {
  
if (scannerVerticleDirection == 0) {scannerVerticle++; if (scannerVerticle >= 50 ){ scannerVerticleDirection = 1;}  }
if (scannerVerticleDirection == 1) {scannerVerticle--; if (scannerVerticle <= 0 ){ scannerVerticleDirection = 0;}  }

if (scannerHorizontalDirection == 0) {scannerHorizontal++; if (scannerHorizontal >= 15 ){ scannerHorizontalDirection = 1;}  }
if (scannerHorizontalDirection == 1) {scannerHorizontal--; if (scannerHorizontal <= 0 ){ scannerHorizontalDirection = 0;}  }

scannerTimer = 0;}


if (scannerTimerB > scannerTimeB) {

if (scannerVerticleDirectionB == 0) {scannerVerticleB++; if (scannerVerticleB >= 50 ){ scannerVerticleDirectionB = 1;}  }
if (scannerVerticleDirectionB == 1) {scannerVerticleB--; if (scannerVerticleB <= 0 ){ scannerVerticleDirectionB = 0;}  }

if (scannerHorizontalDirectionB == 0) {scannerHorizontalB++; if (scannerHorizontalB >= 15 ){ scannerHorizontalDirectionB = 1;}  }
if (scannerHorizontalDirectionB == 1) {scannerHorizontalB--; if (scannerHorizontalB <= 0 ){ scannerHorizontalDirectionB = 0;}  }
scannerTimerB = 0;}





switch (scannerVerticle) {
  case 0: for (int i = 0; i < 15; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 1: for (int i = 15; i <30; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 2: for (int i = 30; i < 45; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 3: for (int i = 45; i < 60; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 4: for (int i = 60; i < 75; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 5: for (int i = 75; i < 90; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 6: for (int i = 90; i < 105; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 7: for (int i = 105; i < 120; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 8: for (int i = 120; i < 135; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 9: for (int i = 135; i < 150; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
 
  case 10: for (int i = 150; i < 165; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 11: for (int i = 165; i < 180; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 12: for (int i = 180; i < 195; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 13: for (int i = 195; i < 210; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;  
  case 14: for (int i = 210; i < 225; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 15: for (int i = 225; i < 240; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;  
  case 16: for (int i = 240; i < 255; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 17: for (int i = 255; i < 270; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 18: for (int i = 270; i < 285; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 19: for (int i = 285; i < 300; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 

  case 20: for (int i = 300; i < 315; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;  
  case 21: for (int i = 315; i < 330; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 22: for (int i = 330; i < 345; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 23: for (int i = 345; i < 360; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 24: for (int i = 360; i < 375; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 25: for (int i = 375; i < 390; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;   
  case 26: for (int i = 390; i < 405; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;   
  case 27: for (int i = 405; i < 420; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 28: for (int i = 420; i < 435; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 29: for (int i = 435; i < 450; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 

  case 30: for (int i = 450; i < 465; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 31: for (int i = 465; i < 480; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 32: for (int i = 480; i < 495; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 33: for (int i = 495; i < 510; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 34: for (int i = 510; i < 525; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 35: for (int i = 525; i < 540; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 36: for (int i = 540; i < 555; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 37: for (int i = 555; i < 570; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 38: for (int i = 570; i < 585; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 39: for (int i = 585; i < 600; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;  

  case 40: for (int i = 600; i < 615; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;
  case 41: for (int i = 615; i < 630; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 42: for (int i = 630; i < 645; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 43: for (int i = 645; i < 660; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 44: for (int i = 660; i < 675; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 45: for (int i = 675; i < 690; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 46: for (int i = 690; i < 705; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 47: for (int i = 705; i < 720; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 48: for (int i = 720; i < 735; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break; 
  case 49: for (int i = 735; i < 750; i++){leds[i] = CHSV (scannerHue, scannerSat, scannerVal); } break;  

  
}




switch (scannerHorizontal) {
  case 0: for (int i = 0; i < 10; i++){leds[p0_hline0[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline0[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline0[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline0[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline0[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 1: for (int i = 0; i < 10; i++){leds[p0_hline1[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline1[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline1[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline1[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline1[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 2: for (int i = 0; i < 10; i++){leds[p0_hline2[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline2[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline2[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline2[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline2[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 3: for (int i = 0; i < 10; i++){leds[p0_hline3[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline3[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline3[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline3[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline3[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 4: for (int i = 0; i < 10; i++){leds[p0_hline4[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline4[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline4[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline4[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline4[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 5: for (int i = 0; i < 10; i++){leds[p0_hline5[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline5[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline5[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline5[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline5[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 6: for (int i = 0; i < 10; i++){leds[p0_hline6[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline6[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline6[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline6[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline6[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 7: for (int i = 0; i < 10; i++){leds[p0_hline7[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline7[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline7[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline7[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline7[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 8: for (int i = 0; i < 10; i++){leds[p0_hline8[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline8[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline8[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline8[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline8[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 9: for (int i = 0; i < 10; i++){leds[p0_hline9[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline9[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline9[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline9[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline9[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 10: for (int i = 0; i < 10; i++){leds[p0_hline10[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline10[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline10[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline10[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline10[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 11: for (int i = 0; i < 10; i++){leds[p0_hline11[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline11[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline11[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline11[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline11[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 12: for (int i = 0; i < 10; i++){leds[p0_hline12[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline12[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline12[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline12[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline12[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 13: for (int i = 0; i < 10; i++){leds[p0_hline13[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline13[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline13[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline13[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline13[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  case 14: for (int i = 0; i < 10; i++){leds[p0_hline14[i]] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline14[i]+150] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline14[i]+300] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline14[i]+450] = CHSV (scannerHue, scannerSat, scannerVal); leds[p0_hline14[i]+600] = CHSV (scannerHue, scannerSat, scannerVal);} break;
  }



switch (scannerVerticleB) {
  case 0: for (int i = 0; i < 15; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 1: for (int i = 15; i <30; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 2: for (int i = 30; i < 45; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 3: for (int i = 45; i < 60; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 4: for (int i = 60; i < 75; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 5: for (int i = 75; i < 90; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 6: for (int i = 90; i < 105; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 7: for (int i = 105; i < 120; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 8: for (int i = 120; i < 135; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 9: for (int i = 135; i < 150; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
 
  case 10: for (int i = 150; i < 165; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 11: for (int i = 165; i < 180; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 12: for (int i = 180; i < 195; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 13: for (int i = 195; i < 210; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;  
  case 14: for (int i = 210; i < 225; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 15: for (int i = 225; i < 240; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;  
  case 16: for (int i = 240; i < 255; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 17: for (int i = 255; i < 270; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 18: for (int i = 270; i < 285; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 19: for (int i = 285; i < 300; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 

  case 20: for (int i = 300; i < 315; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;  
  case 21: for (int i = 315; i < 330; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 22: for (int i = 330; i < 345; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 23: for (int i = 345; i < 360; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 24: for (int i = 360; i < 375; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 25: for (int i = 375; i < 390; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;   
  case 26: for (int i = 390; i < 405; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;   
  case 27: for (int i = 405; i < 420; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 28: for (int i = 420; i < 435; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 29: for (int i = 435; i < 450; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 

  case 30: for (int i = 450; i < 465; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 31: for (int i = 465; i < 480; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 32: for (int i = 480; i < 495; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 33: for (int i = 495; i < 510; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 34: for (int i = 510; i < 525; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 35: for (int i = 525; i < 540; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 36: for (int i = 540; i < 555; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 37: for (int i = 555; i < 570; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 38: for (int i = 570; i < 585; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 39: for (int i = 585; i < 600; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;  

  case 40: for (int i = 600; i < 615; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;
  case 41: for (int i = 615; i < 630; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 42: for (int i = 630; i < 645; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 43: for (int i = 645; i < 660; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 44: for (int i = 660; i < 675; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 45: for (int i = 675; i < 690; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 46: for (int i = 690; i < 705; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 47: for (int i = 705; i < 720; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 48: for (int i = 720; i < 735; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break; 
  case 49: for (int i = 735; i < 750; i++){leds[i] = CHSV (scannerHueB, scannerSatB, scannerValB); } break;  

  
}

switch (scannerHorizontalB) {
  case 0: for (int i = 0; i < 10; i++){leds[p0_hline0[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline0[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline0[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline0[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline0[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 1: for (int i = 0; i < 10; i++){leds[p0_hline1[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline1[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline1[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline1[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline1[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 2: for (int i = 0; i < 10; i++){leds[p0_hline2[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline2[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline2[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline2[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline2[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 3: for (int i = 0; i < 10; i++){leds[p0_hline3[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline3[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline3[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline3[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline3[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 4: for (int i = 0; i < 10; i++){leds[p0_hline4[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline4[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline4[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline4[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline4[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 5: for (int i = 0; i < 10; i++){leds[p0_hline5[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline5[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline5[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline5[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline5[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 6: for (int i = 0; i < 10; i++){leds[p0_hline6[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline6[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline6[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline6[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline6[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 7: for (int i = 0; i < 10; i++){leds[p0_hline7[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline7[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline7[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline7[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline7[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 8: for (int i = 0; i < 10; i++){leds[p0_hline8[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline8[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline8[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline8[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline8[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 9: for (int i = 0; i < 10; i++){leds[p0_hline9[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline9[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline9[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline9[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline9[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 10: for (int i = 0; i < 10; i++){leds[p0_hline10[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline10[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline10[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline10[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline10[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 11: for (int i = 0; i < 10; i++){leds[p0_hline11[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline11[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline11[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline11[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline11[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 12: for (int i = 0; i < 10; i++){leds[p0_hline12[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline12[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline12[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline12[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline12[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 13: for (int i = 0; i < 10; i++){leds[p0_hline13[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline13[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline13[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline13[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline13[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  case 14: for (int i = 0; i < 10; i++){leds[p0_hline14[i]] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline14[i]+150] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline14[i]+300] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline14[i]+450] = CHSV (scannerHueB, scannerSatB, scannerValB); leds[p0_hline14[i]+600] = CHSV (scannerHueB, scannerSatB, scannerValB);} break;
  }  
  
  
  
  
  
    leds[ XY(scannerVerticle, scannerHorizontal)]  = CHSV(scannerHue, 0, scannerVal);
    leds[ XY(scannerVerticleB, scannerHorizontalB)]  = CHSV(scannerHue, 0, scannerVal);

     if (scannerVerticle == scannerVerticleB && scannerHorizontal == scannerHorizontalB) { scannerSat = 0; scannerSatB = 0; scannerHue = random (0,255); scannerHueB = scannerHue + 45; } else scannerSat = 255; scannerSatB = 255;
     if (scannerVerticle == scannerVerticleB+1 && scannerHorizontal == scannerHorizontalB) { scannerSat = 0; scannerSatB = 0; scannerHue = random (0,255); scannerHueB = scannerHue + 45; } else scannerSat = 255; scannerSatB = 255;
     if (scannerVerticle == scannerVerticleB && scannerHorizontal == scannerHorizontalB+1) { scannerSat = 0; scannerSatB = 0; scannerHue = random (0,255); scannerHueB = scannerHue + 45; } else scannerSat = 255; scannerSatB = 255;
     if (scannerVerticle == scannerVerticleB+1 && scannerHorizontal == scannerHorizontalB+1) { scannerSat = 0; scannerSatB = 0; scannerHue = random (0,255); scannerHueB = scannerHue + 45; } else scannerSat = 255; scannerSatB = 255;


    FastLED.show();    
  
  }
