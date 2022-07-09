

elapsedMillis begaytime;
byte begaystate;

byte begayhue = 224;
byte begaysat = 255;
byte begayval = 200;

void be_gay (){

if (begaystate == 0){

  for (int i = 0; i< Bmax; i++){leds[p0_B[i]] = CHSV (begayhue, begaysat, begayval);} 
  for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (begayhue, begaysat, begayval);} 

if (begaytime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} begaytime = 0; begaystate = 1; }
}

if (begaystate == 1){

  for (int i = 0; i< Gmax; i++){leds[p0_G[i]] = CHSV (begayhue, begaysat, begayval);} 
  for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (begayhue, begaysat, begayval);}
  for (int i = 0; i< Ymax; i++){leds[p2_Y[i]] = CHSV (begayhue, begaysat, begayval);}

if (begaytime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} begaytime = 0; begaystate = 3; }
}

//gap between
//if (begaystate == 2){ if (begaytime > 500){ begaytime = 0; begaystate = 3;} } try without gap between


if (begaystate == 3) {


  for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (begayhue, begaysat, begayval);} 
  for (int i = 0; i< Omax; i++){leds[p1_O[i]] = CHSV (begayhue, begaysat, begayval);}

if (begaytime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} begaytime = 0; begaystate = 4; }
  
}

if (begaystate == 4) {

  for (int i = 0; i< Cmax; i++){leds[p0_C[i]] = CHSV (begayhue, begaysat, begayval);} 
  for (int i = 0; i< Rmax; i++){leds[p1_R[i]] = CHSV (begayhue, begaysat, begayval);}
  for (int i = 0; i< Imax; i++){leds[p2_I[i]] = CHSV (begayhue, begaysat, begayval);}
  for (int i = 0; i< Mmax; i++){leds[p3_M[i]] = CHSV (begayhue, begaysat, begayval);}
  for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (begayhue, begaysat, begayval);}

  if (begaytime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} begaytime = 0; begaystate = 5; }
}

//gap between again
if (begaystate == 5){ if (begaytime > 1000){ begaytime = 0; begaystate = 0;} } 
  
  
  LEDS.show();
} 

elapsedMillis feellovetime;
byte feellovestate;

byte feellovehue = 224;
byte feellovesat = 255;
byte feelloveval = 200;

void feel_love (){

if (feellovestate == 0){

  for (int i = 0; i< Imax; i++){leds[p0_I[i]] = CHSV (feellovehue, feellovesat, feelloveval);} 


if (feellovetime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} feellovetime = 0; feellovestate = 1; }
}

if (feellovestate == 1){

  for (int i = 0; i< Fmax; i++){leds[p0_F[i]] = CHSV (feellovehue, feellovesat, feelloveval);} 
  for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (feellovehue, feellovesat, feelloveval);}
  for (int i = 0; i< Emax; i++){leds[p2_E[i]] = CHSV (feellovehue, feellovesat, feelloveval);}
  for (int i = 0; i< Lmax; i++){leds[p3_L[i]] = CHSV (feellovehue, feellovesat, feelloveval);}

if (feellovetime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} feellovetime = 0; feellovestate = 3; }
}

//gap between
//if (feellovestate == 2){ if (feellovetime > 500){ feellovetime = 0; feellovestate = 3;} } try without gap between


if (feellovestate == 3) {


  for (int i = 0; i< Lmax; i++){leds[p0_L[i]] = CHSV (feellovehue, feellovesat, feelloveval);} 
  for (int i = 0; i< Omax; i++){leds[p1_O[i]] = CHSV (feellovehue, feellovesat, feelloveval);}
  for (int i = 0; i< Vmax; i++){leds[p2_V[i]] = CHSV (feellovehue, feellovesat, feelloveval);}
  for (int i = 0; i< Emax; i++){leds[p3_E[i]] = CHSV (feellovehue, feellovesat, feelloveval);}

if (feellovetime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} feellovetime = 0; feellovestate = 5; }
  
}
/*
if (feellovestate == 4) {

  for (int i = 0; i< Cmax; i++){leds[p0_C[i]] = CHSV (feellovehue, feellovesat, feelloveval);} 
  for (int i = 0; i< Rmax; i++){leds[p1_R[i]] = CHSV (feellovehue, feellovesat, feelloveval);}
  for (int i = 0; i< Imax; i++){leds[p2_I[i]] = CHSV (feellovehue, feellovesat, feelloveval);}
  for (int i = 0; i< Mmax; i++){leds[p3_M[i]] = CHSV (feellovehue, feellovesat, feelloveval);}
  for (int i = 0; i< Emax; i++){leds[p4_E[i]] = CHSV (feellovehue, feellovesat, feelloveval);}

  if (feellovetime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} feellovetime = 0; feellovestate = 5; }
}  */ 

//gap between again
if (feellovestate == 5){ if (feellovetime > 1000){ feellovetime = 0; feellovestate = 0;} } 
  
  
  LEDS.show(); } 

elapsedMillis kanelivestime;
byte kanelivesstate;

byte kaneliveshue = 0;
byte kanelivessat = 255;
byte kanelivesval = 200;

void kane_lives (){

if (kanelivesstate == 0){

  for (int i = 0; i< Kmax; i++){leds[p0_K[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);} 
  for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}
  for (int i = 0; i< Nmax; i++){leds[p2_N[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}
  for (int i = 0; i< Emax; i++){leds[p3_E[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}


if (kanelivestime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} kanelivestime = 0; kanelivesstate = 1; }
}

if (kanelivesstate == 1){

  for (int i = 0; i< Lmax; i++){leds[p0_L[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);} 
  for (int i = 0; i< Imax; i++){leds[p1_I[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}
  for (int i = 0; i< Vmax; i++){leds[p2_V[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}
  for (int i = 0; i< Emax; i++){leds[p3_E[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}
  for (int i = 0; i< Smax; i++){leds[p4_S[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}

if (kanelivestime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} kanelivestime = 0; kanelivesstate = 3; }
}

//gap between
//if (kanelivesstate == 2){ if (kanelivestime > 500){ kanelivestime = 0; kanelivesstate = 3;} } try without gap between


if (kanelivesstate == 3) {


  for (int i = 0; i< Imax; i++){leds[p0_I[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);} 
  for (int i = 0; i< Nmax; i++){leds[p1_N[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}


if (kanelivestime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} kanelivestime = 0; kanelivesstate = 4; }
  
}

if (kanelivesstate == 4) {

  for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);} 
  for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}
  for (int i = 0; i< Amax; i++){leds[p2_A[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}
  for (int i = 0; i< Tmax; i++){leds[p3_T[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}
  for (int i = 0; i< Hmax; i++){leds[p4_H[i]] = CHSV (kaneliveshue, kanelivessat, kanelivesval);}

  if (kanelivestime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} kanelivestime = 0; kanelivesstate = 5; }
} 

//gap between again
if (kanelivesstate == 5){ if (kanelivestime > 1000){ kanelivestime = 0; kanelivesstate = 0;} } 
  
  
  LEDS.show(); }

elapsedMillis flynnlivestime;
byte flynnlivesstate;

byte flynnliveshue = 15;
byte flynnlivessat = 255;
byte flynnlivesval = 200;

void flynn_lives (){

if (flynnlivesstate == 0){

  for (int i = 0; i< Fmax; i++){leds[p0_F[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);} 
  for (int i = 0; i< Lmax; i++){leds[p1_L[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Ymax; i++){leds[p2_Y[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Nmax; i++){leds[p3_N[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Nmax; i++){leds[p4_N[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}

if (flynnlivestime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} flynnlivestime = 0; flynnlivesstate = 1; }
}

if (flynnlivesstate == 1){

  for (int i = 0; i< Lmax; i++){leds[p0_L[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);} 
  for (int i = 0; i< Imax; i++){leds[p1_I[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Vmax; i++){leds[p2_V[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Emax; i++){leds[p3_E[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Smax; i++){leds[p4_S[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}

if (flynnlivestime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} flynnlivestime = 0; flynnlivesstate = 5; }
}

//gap between
//if (flynnlivesstate == 2){ if (flynnlivestime > 500){ flynnlivestime = 0; flynnlivesstate = 3;} } try without gap between
/*

if (flynnlivesstate == 3) {


  for (int i = 0; i< Imax; i++){leds[p0_I[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);} 
  for (int i = 0; i< Nmax; i++){leds[p1_N[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}


if (flynnlivestime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} flynnlivestime = 0; flynnlivesstate = 4; }
  
}

if (flynnlivesstate == 4) {

  for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);} 
  for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Amax; i++){leds[p2_A[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Tmax; i++){leds[p3_T[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}
  for (int i = 0; i< Hmax; i++){leds[p4_H[i]] = CHSV (flynnliveshue, flynnlivessat, flynnlivesval);}

  if (flynnlivestime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} flynnlivestime = 0; flynnlivesstate = 5; }
} 
*/
//gap between again
if (flynnlivesstate == 5){ if (flynnlivestime > 1000){ flynnlivestime = 0; flynnlivesstate = 0;} } 
  
  
  LEDS.show(); }

elapsedMillis ESRRPTtime;
byte ESRRPTstate;

byte ESRRPThue = 96;
byte ESRRPTsat = 255;
byte ESRRPTval = 200;

void eat_sleep (){

if (ESRRPTstate == 0){

  for (int i = 0; i< Emax; i++){leds[p0_E[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);} 
  for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}
  for (int i = 0; i< Tmax; i++){leds[p2_T[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}


if (ESRRPTtime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} ESRRPTtime = 0; ESRRPTstate = 1; }
}

if (ESRRPTstate == 1){
ESRRPThue = 160;
  for (int i = 0; i< Smax; i++){leds[p0_S[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);} 
  for (int i = 0; i< Lmax; i++){leds[p1_L[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}
  for (int i = 0; i< Emax; i++){leds[p2_E[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}
  for (int i = 0; i< Emax; i++){leds[p3_E[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}
  for (int i = 0; i< Pmax; i++){leds[p4_P[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}

if (ESRRPTtime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} ESRRPTtime = 0; ESRRPTstate = 3; }
}

//gap between
//if (ESRRPTstate == 2){ if (ESRRPTtime > 500){ ESRRPTtime = 0; ESRRPTstate = 3;} } try without gap between


if (ESRRPTstate == 3) {

ESRRPThue = 180;
  for (int i = 0; i< Rmax; i++){leds[p0_R[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);} 
  for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}
  for (int i = 0; i< Vmax; i++){leds[p2_V[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}
  for (int i = 0; i< Emax; i++){leds[p3_E[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}

if (ESRRPTtime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} ESRRPTtime = 0; ESRRPTstate = 4; }
  
}

if (ESRRPTstate == 4) {
ESRRPThue = 25;
  for (int i = 0; i< Rmax; i++){leds[p0_R[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);} 
  for (int i = 0; i< Pmax; i++){leds[p1_P[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}
  for (int i = 0; i< Tmax; i++){leds[p2_T[i]] = CHSV (ESRRPThue, ESRRPTsat, ESRRPTval);}


  if (ESRRPTtime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} ESRRPTtime = 0; ESRRPTstate = 5; }
} 

//gap between again
if (ESRRPTstate == 5){ if (ESRRPTtime > 1000){ ESRRPTtime = 0; ESRRPTstate = 0;} } 
  
  
  LEDS.show(); }



elapsedMillis makeItSotime;
byte makeItSostate;

byte makeItSohue = 15;
byte makeItSosat = 0;
byte makeItSoval = 200;

void makeItSo (){

if (makeItSostate == 0){

  for (int i = 0; i< Mmax; i++){leds[p0_M[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);} 
  for (int i = 0; i< Amax; i++){leds[p1_A[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}
  for (int i = 0; i< Kmax; i++){leds[p2_K[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}
  for (int i = 0; i< Emax; i++){leds[p3_E[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}


if (makeItSotime > 500){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} makeItSotime = 0; makeItSostate = 1; }
}

if (makeItSostate == 1){

  for (int i = 0; i< Imax; i++){leds[p0_I[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);} 
  for (int i = 0; i< Tmax; i++){leds[p1_T[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}


if (makeItSotime > 500){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} makeItSotime = 0; makeItSostate = 3; }
}

//gap between
//if (makeItSostate == 2){ if (makeItSotime > 500){ makeItSotime = 0; makeItSostate = 3;} } try without gap between


if (makeItSostate == 3) {


  for (int i = 0; i< Smax; i++){leds[p0_S[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);} 
  for (int i = 0; i< Omax; i++){leds[p1_O[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}


if (makeItSotime > 500){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} makeItSotime = 0; makeItSostate = 5; }
  
}
/*
if (makeItSostate == 4) {

  for (int i = 0; i< Dmax; i++){leds[p0_D[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);} 
  for (int i = 0; i< Emax; i++){leds[p1_E[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}
  for (int i = 0; i< Amax; i++){leds[p2_A[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}
  for (int i = 0; i< Tmax; i++){leds[p3_T[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}
  for (int i = 0; i< Hmax; i++){leds[p4_H[i]] = CHSV (makeItSohue, makeItSosat, makeItSoval);}

  if (makeItSotime > 1000){for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} makeItSotime = 0; makeItSostate = 5; }
} 
*/
//gap between again
if (makeItSostate == 5){ if (makeItSotime > 1000){ makeItSotime = 0; makeItSostate = 0;} } 
  
  
  LEDS.show(); }
  
