void EATASS (){
for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);} 


if (WordTime >= 1000) {WordState++; WordTime = 0;}
if  (WordState == 0) {
 for (int i = 0; i< Emax; i++){leds[p0_E[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Tmax; i++){leds[p2_T[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Dmax; i++){leds[p3_D[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 1) {
 for (int i = 0; i< Amax; i++){leds[p0_A[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Smax; i++){leds[p1_S[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Smax; i++){leds[p2_S[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Dmax; i++){leds[p3_D[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 2) {
 for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Omax; i++){leds[p1_O[i]] = CHSV (hue, 255, 255);}
 //for (int i = 0; i< Tmax; i++){leds[p2_T[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Dmax; i++){leds[p3_D[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 3) {
 for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Rmax; i++){leds[p1_R[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Umax; i++){leds[p2_U[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Gmax; i++){leds[p3_G[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Smax; i++){leds[p4_S[i]] = CHSV (hue, 255, 255);}
}

if (WordState == 4) { WordState = 0; AssCounter ++; if (AssCounter >= 4) {AssCounter = 0; Master ++;  BB = 0;} }

hue++;
FastLED.show();  
  
  
  }
