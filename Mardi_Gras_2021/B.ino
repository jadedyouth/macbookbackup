/*

void JAMIE () {
 for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);} 


if (WordTime >= 1500) {WordState++; WordTime = 0;}
if  (WordState == 0) {
 for (int i = 0; i< Wmax; i++){leds[p0_W[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Tmax; i++){leds[p2_T[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Dmax; i++){leds[p3_D[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 1) {
 for (int i = 0; i< Mmax; i++){leds[p0_M[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Imax; i++){leds[p1_I[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Smax; i++){leds[p2_S[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Smax; i++){leds[p3_S[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 2) {
 for (int i = 0; i< Ymax; i++){leds[p0_Y[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Omax; i++){leds[p1_O[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Umax; i++){leds[p2_U[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Dmax; i++){leds[p3_D[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 3) {
 for (int i = 0; i< Jmax; i++){leds[p0_J[i]] = CHSV (hue, 255, 255);} 
 for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Mmax; i++){leds[p2_M[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Imax; i++){leds[p3_I[i]] = CHSV (hue, 255, 255);}
 for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 4) {
 //for (int i = 0; i< Mmax; i++){leds[p0_M[i]] = CHSV (hue, 255, 255);} 
 //for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Amax; i++){leds[p2_A[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Tmax; i++){leds[p3_T[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 5) {
for (int i = 0; i< Fmax; i++){leds[p0_F[i]] = CHSV (hue, 255, 255);} 
for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (hue, 255, 255);}
for (int i = 0; i< Emax; i++){leds[p2_E[i]] = CHSV (hue, 255, 255);}
for (int i = 0; i< Lmax; i++){leds[p3_L[i]] = CHSV (hue, 255, 255);}
// for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (hue, 255, 255);}
}


if  (WordState == 6) {
for (int i = 0; i< Bmax; i++){leds[p0_B[i]] = CHSV (hue, 255, 255);} 
for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (hue, 255, 255);}
for (int i = 0; i< Tmax; i++){leds[p2_T[i]] = CHSV (hue, 255, 255);}
for (int i = 0; i< Tmax; i++){leds[p3_T[i]] = CHSV (hue, 255, 255);}
for (int i = 0; i< Rmax; i++){leds[p4_R[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 7) {
for (int i = 0; i< Smax; i++){leds[p0_S[i]] = CHSV (hue, 255, 255);} 
for (int i = 0; i< Omax; i++){leds[p1_O[i]] = CHSV (hue, 255, 255);}
for (int i = 0; i< Omax; i++){leds[p2_O[i]] = CHSV (hue, 255, 255);}
for (int i = 0; i< Nmax; i++){leds[p3_N[i]] = CHSV (hue, 255, 255);}
//for (int i = 0; i< Rmax; i++){leds[p4_R[i]] = CHSV (hue, 255, 255);}
}

if  (WordState == 8) {
//for (int i = 0; i< Smax; i++){leds[p0_S[i]] = CHSV (hue, 255, 255);} 
//for (int i = 0; i< Omax; i++){leds[p1_O[i]] = CHSV (hue, 255, 255);}
//for (int i = 0; i< Omax; i++){leds[p2_O[i]] = CHSV (hue, 255, 255);}
//for (int i = 0; i< Nmax; i++){leds[p3_N[i]] = CHSV (hue, 255, 255);}
//for (int i = 0; i< Rmax; i++){leds[p4_R[i]] = CHSV (hue, 255, 255);}
}


if (WordState == 9) {WordState = 0;}

hue++;
FastLED.show();

 
  
  
  } */
