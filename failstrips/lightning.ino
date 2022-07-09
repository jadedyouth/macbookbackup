/*
void lightning (){

if (lightningmode == 99) { lightningmode = random (0,44);}


//panel 0

if (lightningmode == 0) { 
 if (lightningon == 0){ leds[p0_lightning0[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 21) {lightningidex++; leds[p0_lightning0[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 21) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning0[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 21) {lightningidex++; leds[p0_lightning0[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 21) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}



if (lightningmode == 1) { 
 if (lightningon == 0){ leds[p0_lightning1[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p0_lightning1[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning1[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p0_lightning1[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}


if (lightningmode == 2) { 
 if (lightningon == 0){ leds[p0_lightning2[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p0_lightning2[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning2[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p0_lightning2[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 3) { 
 if (lightningon == 0){ leds[p0_lightning3[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p0_lightning3[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning3[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p0_lightning3[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 4) { 
 if (lightningon == 0){ leds[p0_lightning4[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p0_lightning4[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning4[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p0_lightning4[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}



if (lightningmode == 5) { 
 if (lightningon == 0){ leds[p0_lightning5[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p0_lightning5[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning5[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p0_lightning5[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 6) { 
 if (lightningon == 0){ leds[p0_lightning6[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p0_lightning6[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning6[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p0_lightning6[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 7) { 
 if (lightningon == 0){ leds[p0_lightning7[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p0_lightning7[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning7[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p0_lightning7[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 8) { 
 if (lightningon == 0){ leds[p0_lightning8[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p0_lightning8[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning8[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p0_lightning8[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 9) { 
 if (lightningon == 0){ leds[p0_lightning9[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 22) {lightningidex++; leds[p0_lightning9[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 22) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning9[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 22) {lightningidex++; leds[p0_lightning9[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 22) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 10) { 
 if (lightningon == 0){ leds[p0_lightning10[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 9) {lightningidex++; leds[p0_lightning10[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 9) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning10[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 9) {lightningidex++; leds[p0_lightning10[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 9) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 11) { 
 if (lightningon == 0){ leds[p0_lightning11[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 11) {lightningidex++; leds[p0_lightning11[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 11) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning11[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 11) {lightningidex++; leds[p0_lightning11[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 11) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 12) { 
 if (lightningon == 0){ leds[p0_lightning12[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 22) {lightningidex++; leds[p0_lightning12[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 22) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning12[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 22) {lightningidex++; leds[p0_lightning12[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 22) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 13) { 
 if (lightningon == 0){ leds[p0_lightning13[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 8) {lightningidex++; leds[p0_lightning13[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 8) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning13[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 8) {lightningidex++; leds[p0_lightning13[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 8) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 14) { 
 if (lightningon == 0){ leds[p0_lightning14[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p0_lightning14[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning14[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p0_lightning14[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 15) { 
 if (lightningon == 0){ leds[p0_lightning15[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 20) {lightningidex++; leds[p0_lightning15[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 20) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning15[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 20) {lightningidex++; leds[p0_lightning15[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 20) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 16) { 
 if (lightningon == 0){ leds[p0_lightning16[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p0_lightning16[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning16[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p0_lightning16[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 17) { 
 if (lightningon == 0){ leds[p0_lightning17[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 23) {lightningidex++; leds[p0_lightning17[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 23) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning17[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 23) {lightningidex++; leds[p0_lightning17[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 23) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 18) { 
 if (lightningon == 0){ leds[p0_lightning18[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p0_lightning18[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning18[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p0_lightning18[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 19) { 
 if (lightningon == 0){ leds[p0_lightning19[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p0_lightning19[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning19[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p0_lightning19[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 20) { 
 if (lightningon == 0){ leds[p0_lightning20[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 31) {lightningidex++; leds[p0_lightning20[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 31) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning20[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 31) {lightningidex++; leds[p0_lightning20[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 31) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}


if (lightningmode == 21) { 
 if (lightningon == 0){ leds[p0_lightning21[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 16) {lightningidex++; leds[p0_lightning21[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 16) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p0_lightning21[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 16) {lightningidex++; leds[p0_lightning21[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 16) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}


//panel 1


if (lightningmode == 22) { 
 if (lightningon == 0){ leds[p1_lightning0[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 21) {lightningidex++; leds[p1_lightning0[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 21) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning0[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 21) {lightningidex++; leds[p1_lightning0[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 21) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}



if (lightningmode == 23) { 
 if (lightningon == 0){ leds[p1_lightning1[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p1_lightning1[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning1[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p1_lightning1[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}


if (lightningmode == 24) { 
 if (lightningon == 0){ leds[p1_lightning2[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p1_lightning2[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning2[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p1_lightning2[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 25) { 
 if (lightningon == 0){ leds[p1_lightning3[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p1_lightning3[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning3[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p1_lightning3[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 26) { 
 if (lightningon == 0){ leds[p1_lightning4[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p1_lightning4[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning4[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p1_lightning4[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}



if (lightningmode == 27) { 
 if (lightningon == 0){ leds[p1_lightning5[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p1_lightning5[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning5[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p1_lightning5[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 28) { 
 if (lightningon == 0){ leds[p1_lightning6[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p1_lightning6[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning6[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p1_lightning6[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 29) { 
 if (lightningon == 0){ leds[p1_lightning7[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p1_lightning7[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning7[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p1_lightning7[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 30) { 
 if (lightningon == 0){ leds[p1_lightning8[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 13) {lightningidex++; leds[p1_lightning8[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 13) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning8[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 13) {lightningidex++; leds[p1_lightning8[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 13) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 31) { 
 if (lightningon == 0){ leds[p1_lightning9[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 22) {lightningidex++; leds[p1_lightning9[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 22) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning9[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 22) {lightningidex++; leds[p1_lightning9[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 22) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 32) { 
 if (lightningon == 0){ leds[p1_lightning10[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 9) {lightningidex++; leds[p1_lightning10[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 9) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning10[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 9) {lightningidex++; leds[p1_lightning10[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 9) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 33) { 
 if (lightningon == 0){ leds[p1_lightning11[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 11) {lightningidex++; leds[p1_lightning11[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 11) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning11[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 11) {lightningidex++; leds[p1_lightning11[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 11) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 34) { 
 if (lightningon == 0){ leds[p1_lightning12[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 22) {lightningidex++; leds[p1_lightning12[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 22) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning12[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 22) {lightningidex++; leds[p1_lightning12[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 22) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 35) { 
 if (lightningon == 0){ leds[p1_lightning13[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 8) {lightningidex++; leds[p1_lightning13[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 8) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning13[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 8) {lightningidex++; leds[p1_lightning13[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 8) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 36) { 
 if (lightningon == 0){ leds[p1_lightning14[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p1_lightning14[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning14[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p1_lightning14[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 37) { 
 if (lightningon == 0){ leds[p1_lightning15[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 20) {lightningidex++; leds[p1_lightning15[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 20) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning15[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 20) {lightningidex++; leds[p1_lightning15[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 20) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 38) { 
 if (lightningon == 0){ leds[p1_lightning16[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p1_lightning16[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning16[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p1_lightning16[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 39) { 
 if (lightningon == 0){ leds[p1_lightning17[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 23) {lightningidex++; leds[p1_lightning17[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 23) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning17[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 23) {lightningidex++; leds[p1_lightning17[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 23) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 40) { 
 if (lightningon == 0){ leds[p1_lightning18[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p1_lightning18[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning18[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p1_lightning18[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 41) { 
 if (lightningon == 0){ leds[p1_lightning19[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 14) {lightningidex++; leds[p1_lightning19[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 14) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning19[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 14) {lightningidex++; leds[p1_lightning19[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 14) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}

if (lightningmode == 42) { 
 if (lightningon == 0){ leds[p1_lightning20[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 31) {lightningidex++; leds[p1_lightning20[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 31) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning20[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 31) {lightningidex++; leds[p1_lightning20[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 31) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}


if (lightningmode == 43) { 
 if (lightningon == 0){ leds[p1_lightning21[0]] = CHSV (ltnghue, ltngsat, ltngval);
  if (lightningidex < 16) {lightningidex++; leds[p1_lightning21[lightningidex]] = CHSV (ltnghue, ltngsat, ltngval);}
   if (lightningidex >= 16) { lightningidex = 0;  lightningon = 1;} }

  if (lightningon == 1) { leds[p1_lightning21[0]] = CHSV (ltnghue, ltngsat, 0);
     if (lightningidex < 16) {lightningidex++; leds[p1_lightning21[lightningidex]] = CHSV (ltnghue, ltngsat, 0);}
        if (lightningidex >= 16) { lightningidex = 0;  lightningon = 0; lightningmode = 99;} }
}
LEDS.show(); 
} */
