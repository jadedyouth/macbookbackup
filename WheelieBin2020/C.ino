void Loop_Eight () {
hue = 160;
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

 
if (halfdex >= NUM_LEDS + 2) {halfdex = NUM_LEDS/2;}


  leds[halfdex] = CHSV(hue, 255, 255);
  leds[halfdex+1] = CHSV(hue, 255, 255);
  leds[halfdex+2] = CHSV(hue, 255, 255);
 
 halfdex ++;


if (loodex < 0 - 5) {loodex = NUM_LEDS/2; }


if (loodex >= 5) { 

  leds[loodex] = CHSV(hue, 255, 255);
  leds[loodex-1] = CHSV(hue, 255, 255);
  leds[loodex-2] = CHSV(hue, 255, 255);
  leds[loodex-3] = CHSV(hue, 255, 255);
  leds[loodex-4] = CHSV(hue, 255, 255);
  leds[loodex-5] = CHSV(hue, 255, 255);
}

 
 loodex --;


if (halfdex > NUM_LEDS/2 + 6) {gateAA = 1;}


//AA
if (gateAA == 1) {

if (halfdexAA >= NUM_LEDS + 2) {halfdexAA = NUM_LEDS/2;}


  leds[halfdexAA] = CHSV(hue, 255, 255);
  leds[halfdexAA + 1] = CHSV(hue, 255, 255);
  
 
 halfdexAA ++;



if (loodexAA < 0 - 2) {loodexAA = NUM_LEDS/2; }


if (loodexAA >= 2) { 

  
  leds[loodexAA - 1] = CHSV(hue, 255, 255);
  leds[loodexAA - 2] = CHSV(hue, 255, 255);
}

 
 loodexAA --;

}


if (halfdex > NUM_LEDS/2 + 12) {gateAB = 1;}
//AB
if (gateAB == 1) {

if (halfdexAB >= NUM_LEDS + 2) {halfdexAB = NUM_LEDS/2;}


  leds[halfdexAB] = CHSV(hue, 255, 255);
  leds[halfdexAB + 1] = CHSV(hue, 255, 255);
  leds[halfdexAB + 2] = CHSV(hue, 255, 255);
  leds[halfdexAB + 3] = CHSV(hue, 255, 255);
 
 halfdexAB ++;



if (loodexAB < 0 - 3) {loodexAB = NUM_LEDS/2; }


if (loodexAB >= 3) { 

  leds[loodexAB] = CHSV(hue, 255, 255);
  leds[loodexAB - 1] = CHSV(hue, 255, 255);
  leds[loodexAB - 2] = CHSV(hue, 255, 255);
  leds[loodexAB - 3] = CHSV(hue, 255, 255);
}

 
 loodexAB --;

}


if (halfdex > NUM_LEDS/2 + 18) {gateAC = 1;}
//AC
if (gateAC == 1) {

if (halfdexAC >= NUM_LEDS + 2) {halfdexAC = NUM_LEDS/2;}


  
  leds[halfdexAC + 1] = CHSV(hue, 255, 255);
  leds[halfdexAC + 2] = CHSV(hue, 255, 255);
  leds[halfdexAC + 3] = CHSV(hue, 255, 255);
 
 halfdexAC ++;



if (loodexAC < 0 - 3) {loodexAC = NUM_LEDS/2; }


if (loodexAC >= 3) { 


  leds[loodexAC - 2] = CHSV(hue, 255, 255);
    leds[loodexAC - 3] = CHSV(hue, 255, 255);
}

 
 loodexAC --;

}



if (halfdex > NUM_LEDS/2 + 24) {gateAD = 1;}
//AD
if (gateAD == 1) {

if (halfdexAD >= NUM_LEDS + 2) {halfdexAD = NUM_LEDS/2;}



  leds[halfdexAD + 2] = CHSV(hue, 255, 255);
 
 halfdexAD ++;



if (loodexAD < 0 - 2) {loodexAD = NUM_LEDS/2; }


if (loodexAD >= 2) { 

  leds[loodexAD] = CHSV(hue, 255, 255);
 
  leds[loodexAD - 2] = CHSV(hue, 255, 255);
}

 
 loodexAD --;

}



if (halfdex > NUM_LEDS/2 + 30) {gateAE = 1;}
//AE
if (gateAE == 1) {

if (halfdexAE >= NUM_LEDS + 2) {halfdexAE = NUM_LEDS/2;}


  leds[halfdexAE] = CHSV(hue, 255, 255);
  leds[halfdexAE + 1] = CHSV(hue, 255, 255);
  leds[halfdexAE + 2] = CHSV(hue, 255, 255);
 
 halfdexAE ++;



if (loodexAE < 0 - 2) {loodexAE = NUM_LEDS/2; }


if (loodexAE >= 2) { 

  leds[loodexAE] = CHSV(hue, 255, 255);
  leds[loodexAE - 1] = CHSV(hue, 255, 255);
  leds[loodexAE - 2] = CHSV(hue, 255, 255);
}

 
 loodexAE --;

}

if (halfdex > NUM_LEDS/2 + 36) {gateAF = 1;}
//AF
if (gateAF == 1) {

if (halfdexAF >= NUM_LEDS + 2) {halfdexAF = NUM_LEDS/2;}


  leds[halfdexAF] = CHSV(hue, 255, 255);
  
  leds[halfdexAF + 2] = CHSV(hue, 255, 255);
 
 halfdexAF ++;



if (loodexAF < 0 - 3) {loodexAF = NUM_LEDS/2; }


if (loodexAF >= 3) { 

  leds[loodexAF] = CHSV(hue, 255, 255);
  leds[loodexAF - 1] = CHSV(hue, 255, 255);
  leds[loodexAF - 2] = CHSV(hue, 255, 255);
  leds[loodexAF - 3] = CHSV(hue, 255, 255);
}

 
 loodexAF --;

}



if (halfdex > NUM_LEDS/2 + 42) {gateAG = 1;}
//AG
if (gateAG == 1) {

if (halfdexAG >= NUM_LEDS + 2) {halfdexAG = NUM_LEDS/2;}


  leds[halfdexAG] = CHSV(hue, 255, 255);
  leds[halfdexAG + 1] = CHSV(hue, 255, 255);
  leds[halfdexAG + 2] = CHSV(hue, 255, 255);
  leds[halfdexAG + 3] = CHSV(hue, 255, 255);
 
 halfdexAG ++;



if (loodexAG < 0 - 4) {loodexAG = NUM_LEDS/2; }


if (loodexAG >= 4) { 


  leds[loodexAG - 2] = CHSV(hue, 255, 255);
  leds[loodexAG - 3] = CHSV(hue, 255, 255);
  leds[loodexAG - 4] = CHSV(hue, 255, 255);
}

 
 loodexAG --;

}


if (halfdex > NUM_LEDS/2 + 48) {gateAH = 1;}
//AH
if (gateAH == 1) {

if (halfdexAH >= NUM_LEDS + 2) {halfdexAH = NUM_LEDS/2;}


  leds[halfdexAH] = CHSV(hue, 255, 255);
  leds[halfdexAH + 1] = CHSV(hue, 255, 255);
  leds[halfdexAH + 2] = CHSV(hue, 255, 255);
 
 halfdexAH ++;



if (loodexAH < 0 - 3) {loodexAH = NUM_LEDS/2; }


if (loodexAH >= 3) { 

  leds[loodexAH] = CHSV(hue, 255, 255);
  
  leds[loodexAH - 2] = CHSV(hue, 255, 255);
  leds[loodexAH - 3] = CHSV(hue, 255, 255);
}

 
 loodexAH --;

}



if (halfdex > NUM_LEDS/2 + 54) {gateAI = 1;}
//AI
if (gateAI == 1) {

if (halfdexAI >= NUM_LEDS + 2) {halfdexAI = NUM_LEDS/2;}


leds[halfdexAI] = CHSV(hue, 255, 255);
  leds[halfdexAI + 1] = CHSV(hue, 255, 255);
  
 
 halfdexAI ++;



if (loodexAI < 0 - 2) {loodexAI = NUM_LEDS/2; }


if (loodexAI >= 2) { 

  leds[loodexAI] = CHSV(hue, 255, 255);
  leds[loodexAI - 1] = CHSV(hue, 255, 255);
  leds[loodexAI - 2] = CHSV(hue, 255, 255);
}

 
 loodexAI --;

}


if (halfdex > NUM_LEDS/2 + 60) {gateAJ = 1;}
//AJ
if (gateAJ == 1) {

if (halfdexAJ >= NUM_LEDS + 2) {halfdexAJ = NUM_LEDS/2;}


  leds[halfdexAJ] = CHSV(hue, 255, 255);
  leds[halfdexAJ + 1] = CHSV(hue, 255, 255);
  leds[halfdexAJ + 2] = CHSV(hue, 255, 255);
 
 halfdexAJ ++;



if (loodexAJ < 0 - 2) {loodexAJ = NUM_LEDS/2; }


if (loodexAJ >= 2) { 

  leds[loodexAJ] = CHSV(hue, 255, 255);

}

 
 loodexAJ --;

}


if (halfdex > NUM_LEDS/2 + 68) {gateAK = 1;}
//AK
if (gateAK == 1) {

if (halfdexAK >= NUM_LEDS + 2) {halfdexAK = NUM_LEDS/2;}


  leds[halfdexAK] = CHSV(hue, 255, 255);
  leds[halfdexAK + 1] = CHSV(hue, 255, 255);
  leds[halfdexAK + 2] = CHSV(hue, 255, 255);
 
 halfdexAK ++;



if (loodexAK < 0 - 3) {loodexAK = NUM_LEDS/2; }


if (loodexAK >= 3) { 

  leds[loodexAK] = CHSV(hue, 255, 255);
  leds[loodexAK - 1] = CHSV(hue, 255, 255);
  leds[loodexAK - 2] = CHSV(hue, 255, 255);
  leds[loodexAK - 3] = CHSV(hue, 255, 255);
}

 
 loodexAK --;

}


 FastLED.delay (35);  
  FastLED.show(); 


  
  
  }
