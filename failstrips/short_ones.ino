
void fireflies (){
  burstdex0 = random (0,LED_COUNT);
bursthue = random (0,45);

leds[burstdex0] = CHSV (bursthue, 255, 100);

burstdex1 = random (0,LED_COUNT);
leds[burstdex1] = CHSV (bursthue, 255, 0);
LEDS.show();

}

void alphabet () {

if (alphaTime > 1000) { for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);}  letterOrder ++; if (letterOrder > 11) {letterOrder = 0;} alphaTime = 0;}


switch (letterOrder){
  case 0: for (int i = 0; i< Amax; i++){leds[p0_A[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 1: for (int i = 0; i< Bmax; i++){leds[p0_B[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Bmax; i++){leds[p1_B[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 2: for (int i = 0; i< Cmax; i++){leds[p0_C[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Cmax; i++){leds[p1_C[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 3: for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Dmax; i++){leds[p1_D[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 4: for (int i = 0; i< Emax; i++){leds[p0_E[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 5: for (int i = 0; i< Fmax; i++){leds[p0_F[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Fmax; i++){leds[p1_F[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 6: for (int i = 0; i< Imax; i++){leds[p0_I[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Imax; i++){leds[p1_I[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 7: for (int i = 0; i< Jmax; i++){leds[p0_J[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Jmax; i++){leds[p1_J[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 8: for (int i = 0; i< Kmax; i++){leds[p0_K[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Kmax; i++){leds[p1_K[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
  case 9: for (int i = 0; i< Lmax; i++){leds[p0_L[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Lmax; i++){leds[p1_L[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;

  
  
  case 10: for (int i = 0; i< Mmax; i++){leds[p0_M[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Mmax; i++){leds[p1_M[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;
 case 11: for (int i = 0; i< Wmax; i++){leds[p0_W[i]] = CHSV (alphahue0, alphasat0, alphaval0);} for (int i = 0; i< Wmax; i++){leds[p1_W[i]] = CHSV (alphahue1, alphasat1, alphaval1);}  break;

// case 99: for (int i = 0; i< 150; i++){leds[i] = CHSV (0, 0, 0);}
 break;
 LEDS.show();
}


} 
