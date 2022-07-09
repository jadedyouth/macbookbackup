

void Rain (){
  
  


 
  for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0); }
if (AA > 25) {
raindexA --; raindexC --; raindexE --; raindexG --; raindexI --;  raindexK --; raindexM --; raindexO --; raindexQ --; raindexS --;  raindexU --;  raindexW --;  raindexY --;  raindexAA --;  raindexAC --;   

AA = 0;}

if (raindexA <= -15) {raindexA = 50; raindexAtail = random (2,9);  }
for (int i = raindexA; i< raindexA + raindexAtail; i++){ if (i >= 0 && i <= 14){    leds[i] = CHSV(hue, 255, 150); leds[i+300] = CHSV(hue+38, 255, 150);  leds[i+600] = CHSV(hue+78, 255, 150); } }

//if (warpdexD >= 169) {warpdexD = 42; warpdexDtail = random (warpmin,31); if (warpdexDtail >= 30) {warpdexDtail = 0;}}
//for (int i = warpdexD; i< warpdexD + warpdexDtail; i++){ if (i >= 72 && i <= 143){    leds[i] = CHSV(warphue, 255, warpval); } }

 
if (raindexC <= 15) {raindexC = 65; raindexCtail = random (2,9);  }
for (int i = raindexC; i< raindexC + raindexCtail; i++){ if (i >= 30 && i <= 44){    leds[i] = CHSV(hue+4, 255, 150); leds[i+300] = CHSV(hue+42, 255, 150); leds[i+600] = CHSV(hue+82, 255, 150); } } 
  
if (raindexE <= 45) {raindexE = 85; raindexEtail = random (2,9);  }
for (int i = raindexE; i< raindexE + raindexEtail; i++){ if (i >= 60 && i <= 74){    leds[i] = CHSV(hue+8, 255, 150); leds[i+300] = CHSV(hue+46, 255, 150); leds[i+600] = CHSV(hue+86, 255, 150); } } 

if (raindexG <= 75) {raindexG = 120; raindexGtail = random (2,9);  }
for (int i = raindexG; i< raindexG + raindexGtail; i++){ if (i >= 90 && i <= 104){    leds[i] = CHSV(hue+12, 255, 150); leds[i+300] = CHSV(hue+50, 255, 150); leds[i+600] = CHSV(hue+90, 255, 150); } } 

if (raindexI <= 105) {raindexI = 160; raindexItail = random (2,9);  }
for (int i = raindexI; i< raindexI + raindexItail; i++){ if (i >= 120 && i <= 134){    leds[i] = CHSV(hue+16, 255, 150); leds[i+300] = CHSV(hue+54, 255, 150); leds[i+600] = CHSV(hue+94, 255, 150); } } 



if (raindexK <= 135) {raindexK = 200; raindexKtail = random (2,9);  }
for (int i = raindexK; i< raindexK + raindexKtail; i++){ if (i >= 150 && i <= 164){    leds[i] = CHSV(hue+18, 255, 150);   } } 

if (raindexM <= 165) {raindexM = 215; raindexMtail = random (2,9);  }
for (int i = raindexM; i< raindexM + raindexMtail; i++){ if (i >= 180 && i <= 194){    leds[i] = CHSV(hue+22, 255, 150);  } } 

if (raindexO <= 195) {raindexO = 235; raindexOtail = random (2,9);  }
for (int i = raindexO; i< raindexO + raindexOtail; i++){ if (i >= 210 && i <= 224){    leds[i] = CHSV(hue+26, 255, 150);  } } 

if (raindexQ <= 225) {raindexQ = 275; raindexQtail = random (2,9);  }
for (int i = raindexQ; i< raindexQ + raindexQtail; i++){ if (i >= 240 && i <= 254){    leds[i] = CHSV(hue+30, 255, 150);  } } 

if (raindexS <= 255) {raindexS = 310; raindexStail = random (2,9);  }
for (int i = raindexS; i< raindexS + raindexStail; i++){ if (i >= 270 && i <= 284){    leds[i] = CHSV(hue+34, 255, 150);   } } 



if (raindexU <= 135+300) {raindexU = 205+300; raindexUtail = random (2,9);  }
for (int i = raindexU; i< raindexU + raindexUtail; i++){ if (i >= 150+300 && i <= 164+300){    leds[i] = CHSV(hue+58, 255, 150);   } } 

if (raindexW <= 165+300) {raindexW = 215+300; raindexWtail = random (2,9);  }
for (int i = raindexW; i< raindexW + raindexWtail; i++){ if (i >= 180+300 && i <= 194+300){    leds[i] = CHSV(hue+62, 255, 150);  } } 

if (raindexY <= 195+300) {raindexY = 245+300; raindexYtail = random (2,9);  }
for (int i = raindexY; i< raindexY + raindexYtail; i++){ if (i >= 210+300 && i <= 224+300){    leds[i] = CHSV(hue+66, 255, 150);  } } 
  
if (raindexAA <= 225+300) {raindexAA = 280+300; raindexAAtail = random (2,9);  }
for (int i = raindexAA; i< raindexAA + raindexAAtail; i++){ if (i >= 240+300 && i <= 254+300){    leds[i] = CHSV(hue+70, 255, 150);  } } 

if (raindexAC <= 255+300) {raindexAC = 305+300; raindexACtail = random (2,9);  }
for (int i = raindexAC; i< raindexAC + raindexACtail; i++){ if (i >= 270+300 && i <= 284+300){    leds[i] = CHSV(hue+74, 255, 150);   } } 

 
 hue++; 
 if (BB >= 90000) {Master ++; BB = 0; AA = 0;}
 FastLED.show(); 
  
  } 
