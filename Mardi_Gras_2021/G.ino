void MARDIGARS (){
for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);} 


if (WordTime >= 1000) {WordState++; WordTime = 0;}
if  (WordState == 0) {
 for (int i = 0; i< Hmax; i++){leds[p0_H[i]] = CHSV (0, 255, 255);} 
 for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (45, 255, 255);}
 for (int i = 0; i< Pmax; i++){leds[p2_P[i]] = CHSV (95, 255, 255);}
 for (int i = 0; i< Pmax; i++){leds[p3_P[i]] = CHSV (160, 255, 255);}
 for (int i = 0; i< Ymax; i++){leds[p4_Y[i]] = CHSV (180, 255, 255);}
}

if  (WordState == 1) {
 for (int i = 0; i< Bmax; i++){leds[p0_B[i]] = CHSV (0, 255, 255);} 
 for (int i = 0; i< Imax; i++){leds[p1_I[i]] = CHSV (45, 255, 255);}
 for (int i = 0; i< Rmax; i++){leds[p2_R[i]] = CHSV (95, 255, 255);}
 for (int i = 0; i< Tmax; i++){leds[p3_T[i]] = CHSV (160, 255, 255);}
 for (int i = 0; i< Hmax; i++){leds[p4_H[i]] = CHSV (180, 255, 255);}
}

if  (WordState == 2) {
 for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (0, 255, 255);} 
 for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (45, 255, 255);}
 for (int i = 0; i< Vmax; i++){leds[p2_V[i]] = CHSV (95, 255, 255);}
 for (int i = 0; i< Emax; i++){leds[p3_E[i]] = CHSV (160, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}
/*
if  (WordState == 3) {
 for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Rmax; i++){leds[p1_R[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Umax; i++){leds[p2_U[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Gmax; i++){leds[p3_G[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Smax; i++){leds[p4_S[i]] = CHSV (hue, 255, 255);}
}
*/
if (WordState == 3) { WordState = 0; AssCounter ++; if (AssCounter >= 4) {AssCounter = 0; Master ++;  BB = 0;} }

hue++;
FastLED.show();  
  
  
  }
