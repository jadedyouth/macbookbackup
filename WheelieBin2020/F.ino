

void Loop_Fifteen () {



if (stage == 0) {
index =  random (0, 24);
reach =  random (3,19);
stage = 1;
}

if (stage == 1) {

switch (index) {
  
case 0: for(int i = 0; i < reach; i++) { leds[barZero [i]] = CHSV(barHue, barSat, barVal);  leds[barSix [i]] = CHSV(barHue, barSat, barVal);} break;
case 1: for(int i = 0; i < reach; i++) { leds[barOne [i]] = CHSV(barHue, barSat, barVal);   leds[barSeven[i]] = CHSV(barHue, barSat, barVal);} break;
case 2: for(int i = 0; i < reach; i++) { leds[barTwo [i]] = CHSV(barHue, barSat, barVal);   leds[barEight[i]] = CHSV(barHue, barSat, barVal);} break;
case 3: for(int i = 0; i < reach; i++) { leds[barThree [i]] = CHSV(barHue, barSat, barVal);   leds[barNine[i]] = CHSV(barHue, barSat, barVal);} break;
case 4: for(int i = 0; i < reach; i++) { leds[barFour [i]] = CHSV(barHue, barSat, barVal);   leds[barTen[i]] = CHSV(barHue, barSat, barVal);} break;  
case 5: for(int i = 0; i < reach; i++) { leds[barFive [i]] = CHSV(barHue, barSat, barVal);   leds[barEleven[i]] = CHSV(barHue, barSat, barVal);} break;  
case 6: for(int i = 0; i < reach; i++) { leds[barZero [i]] = CHSV(barHue, barSat, barVal);  leds[barSix [i]] = CHSV(barHue, barSat, barVal);} break;
case 7: for(int i = 0; i < reach; i++) { leds[barOne [i]] = CHSV(barHue, barSat, barVal);   leds[barSeven[i]] = CHSV(barHue, barSat, barVal);} break;
case 8: for(int i = 0; i < reach; i++) { leds[barTwo [i]] = CHSV(barHue, barSat, barVal);   leds[barEight[i]] = CHSV(barHue, barSat, barVal);} break;
case 9: for(int i = 0; i < reach; i++) { leds[barThree [i]] = CHSV(barHue, barSat, barVal);   leds[barNine[i]] = CHSV(barHue, barSat, barVal);} break;
case 10: for(int i = 0; i < reach; i++) { leds[barFour [i]] = CHSV(barHue, barSat, barVal);   leds[barTen[i]] = CHSV(barHue, barSat, barVal);} break;  
case 11: for(int i = 0; i < reach; i++) { leds[barFive [i]] = CHSV(barHue, barSat, barVal);   leds[barEleven[i]] = CHSV(barHue, barSat, barVal);} break;  
  
case 12: for(int i = 0; i < reach; i++) { leds[barZero [i]] = CHSV(barHue, barSat, barVal);} break;
case 13: for(int i = 0; i < reach; i++) { leds[barOne [i]] = CHSV(barHue, barSat, barVal);} break;
case 14: for(int i = 0; i < reach; i++) { leds[barTwo [i]] = CHSV(barHue, barSat, barVal);} break;
case 15: for(int i = 0; i < reach; i++) { leds[barThree [i]] = CHSV(barHue, barSat, barVal);} break;
case 16: for(int i = 0; i < reach; i++) { leds[barFour [i]] = CHSV(barHue, barSat, barVal);} break;  
case 17: for(int i = 0; i < reach; i++) { leds[barFive [i]] = CHSV(barHue, barSat, barVal);} break;  
 
case 18: for(int i = 0; i < reach; i++) { leds[barSix [i]] = CHSV(barHue, barSat, barVal);} break;
case 19: for(int i = 0; i < reach; i++) { leds[barSeven[i]] = CHSV(barHue, barSat, barVal);} break;
case 20: for(int i = 0; i < reach; i++) { leds[barEight[i]] = CHSV(barHue, barSat, barVal);} break;
case 21: for(int i = 0; i < reach; i++) { leds[barNine[i]] = CHSV(barHue, barSat, barVal);} break;
case 22: for(int i = 0; i < reach; i++) { leds[barTen[i]] = CHSV(barHue, barSat, barVal);} break;  
case 23: for(int i = 0; i < reach; i++) { leds[barEleven[i]] = CHSV(barHue, barSat, barVal);} break;  
  
  
  }
  FastLED.show(); FastLED.delay (delayset); 
stage = 2;
}
  
if (stage == 2) {
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0);} flex ++; if (flex == flexmax) { stage = 0; flex = 0;} else stage = 1;
 FastLED.show(); FastLED.delay (delayset);  }

}


//A NEW WAY TO WRITE DIGITAL RAIN

void Loop_Sixteen () {


for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0);} //everything not deliberately lit is black.



if (stage == 0) {tail = random (3,9);index = NUM_LEDS/2; undex = NUM_LEDS/2 - tail;  stage = 1;}

if (stage == 1) {
 for(int i = undex; i < index; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (index > 0) { index --;} 
if (undex > 0) { undex --;}
if (index <= 0) {stage = 0;}

  }


  
if (stageAA == 99) { if (index < NUM_LEDS/2 - 9) {stageAA = 0; } }

if (stageAA == 0) { tail = random (2,10); loo = NUM_LEDS/2; loodex = NUM_LEDS/2 - tail; stageAA = 1;}

if (stageAA == 1) {

for(int i = loodex; i < loo; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (loo > 0) { loo --;} 
if (loodex > 0) { loodex --;}
if (loo <= 0) {stageAA = 0;}
 
}




if (gateAB == 99) { if (index < NUM_LEDS/2 - 18) {gateAB = 0; } }

if (gateAB == 0) { tail = random (2,10); halfdexAB = NUM_LEDS/2; loodexAB = NUM_LEDS/2 - tail; gateAB = 1;}

if (gateAB == 1) {

for(int i = loodexAB; i < halfdexAB; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAB > 0) { halfdexAB --;} 
if (loodexAB > 0) { loodexAB --;}
if (halfdexAB <= 0) {gateAB = 0;}
 
}


if (gateAC == 99) { if (index < NUM_LEDS/2 - 27) {gateAC = 0; } }

if (gateAC == 0) { tail = random (2,10); halfdexAC = NUM_LEDS/2; loodexAC = NUM_LEDS/2 - tail; gateAC = 1;}

if (gateAC == 1) {

for(int i = loodexAC; i < halfdexAC; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAC > 0) { halfdexAC --;} 
if (loodexAC > 0) { loodexAC --;}
if (halfdexAC <= 0) {gateAC = 0;}
 
}


if (gateAD == 99) { if (index < NUM_LEDS/2 - 36) {gateAD = 0; } }

if (gateAD == 0) { tail = random (2,10); halfdexAD = NUM_LEDS/2; loodexAD = NUM_LEDS/2 - tail; gateAD = 1;}

if (gateAD == 1) {

for(int i = loodexAD; i < halfdexAD; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAD > 0) { halfdexAD --;} 
if (loodexAD > 0) { loodexAD --;}
if (halfdexAD <= 0) {gateAD = 0;}
 
}


if (gateAE == 99) { if (index < NUM_LEDS/2 - 45) {gateAE = 0; } }

if (gateAE == 0) { tail = random (2,10); halfdexAE = NUM_LEDS/2; loodexAE = NUM_LEDS/2 - tail; gateAE = 1;}

if (gateAE == 1) {

for(int i = loodexAE; i < halfdexAE; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAE > 0) { halfdexAE --;} 
if (loodexAE > 0) { loodexAE --;}
if (halfdexAE <= 0) {gateAE = 0;}
 
}

if (gateAF == 99) { if (index < NUM_LEDS/2 - 54) {gateAF = 0; } }

if (gateAF == 0) { tail = random (2,10); halfdexAF = NUM_LEDS/2; loodexAF = NUM_LEDS/2 - tail; gateAF = 1;}

if (gateAF == 1) {

for(int i = loodexAF; i < halfdexAF; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAF > 0) { halfdexAF --;} 
if (loodexAF > 0) { loodexAF --;}
if (halfdexAF <= 0) {gateAF = 0;}
 
}

if (gateAG == 99) { if (index < NUM_LEDS/2 - 63) {gateAG = 0; } }

if (gateAG == 0) { tail = random (1,5); halfdexAG = NUM_LEDS/2; loodexAG = NUM_LEDS/2 - tail; gateAG = 1;}

if (gateAG == 1) {

for(int i = loodexAG; i < halfdexAG; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAG > 0) { halfdexAG --;} 
if (loodexAG > 0) { loodexAG --;}
if (halfdexAG <= 0) {gateAG = 0;}
 
}


if (gateAH == 0) { tail = random (2,10); halfdexAH = NUM_LEDS/2  + tail; loodexAH = NUM_LEDS/2; gateAH = 1;}

if (gateAH == 1) {

for(int i = loodexAH; i < halfdexAH; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAH < NUM_LEDS) { halfdexAH ++;} 
if (loodexAH < NUM_LEDS) { loodexAH ++;}
if (halfdexAH >= NUM_LEDS) {gateAH = 0;}
 
}



if (gateAI == 99) { if (halfdexAH > NUM_LEDS/2 + 9) {gateAI = 0; } }

if (gateAI == 0) { tail = random (2,10); halfdexAI = NUM_LEDS/2  + tail; loodexAI = NUM_LEDS/2; gateAI = 1;}

if (gateAI == 1) {

for(int i = loodexAI; i < halfdexAI; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAI < NUM_LEDS) { halfdexAI ++;} 
if (loodexAI < NUM_LEDS) { loodexAI ++;}
if (halfdexAI >= NUM_LEDS) {gateAI = 0;}
 
}

if (gateAJ == 99) { if (halfdexAH > NUM_LEDS/2 + 18) {gateAJ = 0; } }

if (gateAJ == 0) { tail = random (2,10); halfdexAJ = NUM_LEDS/2  + tail; loodexAJ = NUM_LEDS/2; gateAJ = 1;}

if (gateAJ == 1) {

for(int i = loodexAJ; i < halfdexAJ; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAJ < NUM_LEDS) { halfdexAJ ++;} 
if (loodexAJ < NUM_LEDS) { loodexAJ ++;}
if (halfdexAJ >= NUM_LEDS) {gateAJ = 0;}
 
}

if (gateAK == 99) { if (halfdexAH > NUM_LEDS/2 + 27) {gateAK = 0; } }

if (gateAK == 0) { tail = random (2,10); halfdexAK = NUM_LEDS/2  + tail; loodexAK = NUM_LEDS/2; gateAK = 1;}

if (gateAK == 1) {

for(int i = loodexAK; i < halfdexAK; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAK < NUM_LEDS) { halfdexAK ++;} 
if (loodexAK < NUM_LEDS) { loodexAK ++;}
if (halfdexAK >= NUM_LEDS) {gateAK = 0;}
 
}


if (gateAL == 99) { if (halfdexAH > NUM_LEDS/2 + 36) {gateAL = 0; } }

if (gateAL == 0) { tail = random (2,10); halfdexAL = NUM_LEDS/2  + tail; loodexAL = NUM_LEDS/2; gateAL = 1;}

if (gateAL == 1) {

for(int i = loodexAL; i < halfdexAL; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAL < NUM_LEDS) { halfdexAL ++;} 
if (loodexAL < NUM_LEDS) { loodexAL ++;}
if (halfdexAL >= NUM_LEDS) {gateAL = 0;}
 
} 

if (gateAM == 99) { if (halfdexAH > NUM_LEDS/2 + 45) {gateAM = 0; } }

if (gateAM == 0) { tail = random (2,10); halfdexAM = NUM_LEDS/2  + tail; loodexAM = NUM_LEDS/2; gateAM = 1;}

if (gateAM == 1) {

for(int i = loodexAM; i < halfdexAM; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAM < NUM_LEDS) { halfdexAM ++;} 
if (loodexAM < NUM_LEDS) { loodexAM ++;}
if (halfdexAM >= NUM_LEDS) {gateAM = 0;}
 
}

if (gateAN == 99) { if (halfdexAH > NUM_LEDS/2 + 54) {gateAN = 0; } }

if (gateAN == 0) { tail = random (2,10); halfdexAN = NUM_LEDS/2  + tail; loodexAN = NUM_LEDS/2; gateAN = 1;}

if (gateAN == 1) {

for(int i = loodexAN; i < halfdexAN; i++) { leds[i] = CHSV(rainhue, 255, 255);}

if (halfdexAN < NUM_LEDS) { halfdexAN ++;} 
if (loodexAN < NUM_LEDS) { loodexAN ++;}
if (halfdexAN >= NUM_LEDS) {gateAN = 0;}
 
}



FastLED.show(); FastLED.delay (50); 

}
