

void Loop_Thirteen (){
  

  
//val = dim8_video(val);


//for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, 30);}
//val++;
//val = brighten8_raw(val);


//if (gate == 0) { val ++; if (val >= 254) {gate = 1;} for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, val); }}
//if (gate == 1) {val --; for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(253); }if (val <= 1) {gate = 0;}}
//if (gate == 1) {val --; for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, val); } if (val <= 30) {gate = 0;}}
val ++;
//for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

if (val > 0 && val <= 255) {leds[0] = CHSV(hue, 255, val); leds[NUM_LEDS-1] = CHSV(hue, 255, val); }
if (val-factor*1 > 0 && val-factor*1 <= 255) {leds[1] = CHSV(hue, 255, val-factor*1); leds[NUM_LEDS-2] = CHSV(hue, 255, val-factor*1);}
if (val-factor*2 > 0 && val-factor*2 <= 255) {leds[2] = CHSV(hue, 255, val-factor*2); leds[NUM_LEDS-3] = CHSV(hue, 255, val-factor*2);}
if (val-factor*3 > 0 && val-factor*3 <= 255) {leds[3] = CHSV(hue, 255, val-factor*3); leds[NUM_LEDS-4] = CHSV(hue, 255, val-factor*3);}
if (val-factor*4 > 0 && val-factor*4 <= 255) {leds[4] = CHSV(hue, 255, val-factor*4); leds[NUM_LEDS-5] = CHSV(hue, 255, val-factor*4);}
if (val-factor*5 > 0 && val-factor*5 <= 255) {leds[5] = CHSV(hue, 255, val-factor*5); leds[NUM_LEDS-6] = CHSV(hue, 255, val-factor*5);}
if (val-factor*6 > 0 && val-factor*6 <= 255) {leds[6] = CHSV(hue, 255, val-factor*6); leds[NUM_LEDS-7] = CHSV(hue, 255, val-factor*6);}
if (val-factor*7 > 0 && val-factor*7 <= 255) {leds[7] = CHSV(hue, 255, val-factor*7); leds[NUM_LEDS-8] = CHSV(hue, 255, val-factor*7);}
if (val-factor*8 > 0 && val-factor*8 <= 255) {leds[8] = CHSV(hue, 255, val-factor*8); leds[NUM_LEDS-9] = CHSV(hue, 255, val-factor*8);}
if (val-factor*9 > 0 && val-factor*9 <= 255) {leds[9] = CHSV(hue, 255, val-factor*9); leds[NUM_LEDS-10] = CHSV(hue, 255, val-factor*9);}
if (val-factor*10 > 0 && val-factor*10 <= 255) {leds[10] = CHSV(hue, 255, val-factor*10); leds[NUM_LEDS-11] = CHSV(hue, 255, val-factor*10);}
if (val-factor*11 > 0 && val-factor*11 <= 255) {leds[11] = CHSV(hue, 255, val-factor*11); leds[NUM_LEDS-12] = CHSV(hue, 255, val-factor*11);}
if (val-factor*12 > 0 && val-factor*12 <= 255) {leds[12] = CHSV(hue, 255, val-factor*12); leds[NUM_LEDS-13] = CHSV(hue, 255, val-factor*12);}
if (val-factor*13 > 0 && val-factor*13 <= 255) {leds[13] = CHSV(hue, 255, val-factor*13); leds[NUM_LEDS-14] = CHSV(hue, 255, val-factor*13);}
if (val-factor*14 > 0 && val-factor*14 <= 255) {leds[14] = CHSV(hue, 255, val-factor*14); leds[NUM_LEDS-15] = CHSV(hue, 255, val-factor*14);}
if (val-factor*15 > 0 && val-factor*15 <= 255) {leds[15] = CHSV(hue, 255, val-factor*15); leds[NUM_LEDS-16] = CHSV(hue, 255, val-factor*15);}
if (val-factor*16 > 0 && val-factor*16 <= 255) {leds[16] = CHSV(hue, 255, val-factor*16); leds[NUM_LEDS-17] = CHSV(hue, 255, val-factor*16);}
if (val-factor*17 > 0 && val-factor*17 <= 255) {leds[17] = CHSV(hue, 255, val-factor*17); leds[NUM_LEDS-18] = CHSV(hue, 255, val-factor*17);}
if (val-factor*18 > 0 && val-factor*18 <= 255) {leds[18] = CHSV(hue, 255, val-factor*18); leds[NUM_LEDS-19] = CHSV(hue, 255, val-factor*18);}
if (val-factor*19 > 0 && val-factor*19 <= 255) {leds[19] = CHSV(hue, 255, val-factor*19); leds[NUM_LEDS-20] = CHSV(hue, 255, val-factor*19);}
if (val-factor*20 > 0 && val-factor*20 <= 255) {leds[20] = CHSV(hue, 255, val-factor*20); leds[NUM_LEDS-21] = CHSV(hue, 255, val-factor*20);}
if (val-factor*21 > 0 && val-factor*21 <= 255) {leds[21] = CHSV(hue, 255, val-factor*21); leds[NUM_LEDS-22] = CHSV(hue, 255, val-factor*21);}
if (val-factor*22 > 0 && val-factor*22 <= 255) {leds[22] = CHSV(hue, 255, val-factor*22); leds[NUM_LEDS-23] = CHSV(hue, 255, val-factor*22);}
if (val-factor*23 > 0 && val-factor*23 <= 255) {leds[23] = CHSV(hue, 255, val-factor*23); leds[NUM_LEDS-24] = CHSV(hue, 255, val-factor*23);}
if (val-factor*24 > 0 && val-factor*24 <= 255) {leds[24] = CHSV(hue, 255, val-factor*24); leds[NUM_LEDS-25] = CHSV(hue, 255, val-factor*24);}
if (val-factor*25 > 0 && val-factor*25 <= 255) {leds[25] = CHSV(hue, 255, val-factor*25); leds[NUM_LEDS-26] = CHSV(hue, 255, val-factor*25);}
if (val-factor*26 > 0 && val-factor*26 <= 255) {leds[26] = CHSV(hue, 255, val-factor*26); leds[NUM_LEDS-27] = CHSV(hue, 255, val-factor*26);}
if (val-factor*27 > 0 && val-factor*27 <= 255) {leds[27] = CHSV(hue, 255, val-factor*27); leds[NUM_LEDS-28] = CHSV(hue, 255, val-factor*27);}
if (val-factor*28 > 0 && val-factor*28 <= 255) {leds[28] = CHSV(hue, 255, val-factor*28); leds[NUM_LEDS-29] = CHSV(hue, 255, val-factor*28);}
if (val-factor*29 > 0 && val-factor*29 <= 255) {leds[29] = CHSV(hue, 255, val-factor*29); leds[NUM_LEDS-30] = CHSV(hue, 255, val-factor*29);} 
if (val-factor*30 > 0 && val-factor*30 <= 255) {leds[30] = CHSV(hue, 255, val-factor*30); leds[NUM_LEDS-31] = CHSV(hue, 255, val-factor*30);} 
if (val-factor*31 > 0 && val-factor*31 <= 255) {leds[31] = CHSV(hue, 255, val-factor*31); leds[NUM_LEDS-32] = CHSV(hue, 255, val-factor*31);} 
if (val-factor*32 > 0 && val-factor*32 <= 255) {leds[32] = CHSV(hue, 255, val-factor*32); leds[NUM_LEDS-33] = CHSV(hue, 255, val-factor*32);} 
if (val-factor*33 > 0 && val-factor*33 <= 255) {leds[33] = CHSV(hue, 255, val-factor*33); leds[NUM_LEDS-34] = CHSV(hue, 255, val-factor*33);} 
if (val-factor*34 > 0 && val-factor*34 <= 255) {leds[34] = CHSV(hue, 255, val-factor*34); leds[NUM_LEDS-35] = CHSV(hue, 255, val-factor*34);} 
if (val-factor*35 > 0 && val-factor*35 <= 255) {leds[35] = CHSV(hue, 255, val-factor*35); leds[NUM_LEDS-36] = CHSV(hue, 255, val-factor*35);} 
if (val-factor*36 > 0 && val-factor*36 <= 255) {leds[36] = CHSV(hue, 255, val-factor*36); leds[NUM_LEDS-37] = CHSV(hue, 255, val-factor*36);} 
if (val-factor*37 > 0 && val-factor*37 <= 255) {leds[37] = CHSV(hue, 255, val-factor*37); leds[NUM_LEDS-38] = CHSV(hue, 255, val-factor*37);} 
if (val-factor*38 > 0 && val-factor*38 <= 255) {leds[38] = CHSV(hue, 255, val-factor*38); leds[NUM_LEDS-39] = CHSV(hue, 255, val-factor*38);} 
if (val-factor*39 > 0 && val-factor*39 <= 255) {leds[39] = CHSV(hue, 255, val-factor*39); leds[NUM_LEDS-40] = CHSV(hue, 255, val-factor*39);} 
if (val-factor*40 > 0 && val-factor*40 <= 255) {leds[40] = CHSV(hue, 255, val-factor*40); leds[NUM_LEDS-41] = CHSV(hue, 255, val-factor*40);} 
if (val-factor*41 > 0 && val-factor*41 <= 255) {leds[41] = CHSV(hue, 255, val-factor*41); leds[NUM_LEDS-42] = CHSV(hue, 255, val-factor*41);} 
if (val-factor*42 > 0 && val-factor*42 <= 255) {leds[42] = CHSV(hue, 255, val-factor*42); leds[NUM_LEDS-43] = CHSV(hue, 255, val-factor*42);} 
if (val-factor*43 > 0 && val-factor*43 <= 255) {leds[43] = CHSV(hue, 255, val-factor*43); leds[NUM_LEDS-44] = CHSV(hue, 255, val-factor*43);} 
if (val-factor*44 > 0 && val-factor*44 <= 255) {leds[44] = CHSV(hue, 255, val-factor*44); leds[NUM_LEDS-45] = CHSV(hue, 255, val-factor*44);} 
if (val-factor*45 > 0 && val-factor*45 <= 255) {leds[45] = CHSV(hue, 255, val-factor*45); leds[NUM_LEDS-46] = CHSV(hue, 255, val-factor*45);} 
if (val-factor*46 > 0 && val-factor*46 <= 255) {leds[46] = CHSV(hue, 255, val-factor*46); leds[NUM_LEDS-47] = CHSV(hue, 255, val-factor*46);} 
if (val-factor*47 > 0 && val-factor*47 <= 255) {leds[47] = CHSV(hue, 255, val-factor*47); leds[NUM_LEDS-48] = CHSV(hue, 255, val-factor*47);} 
if (val-factor*48 > 0 && val-factor*48 <= 255) {leds[48] = CHSV(hue, 255, val-factor*48); leds[NUM_LEDS-49] = CHSV(hue, 255, val-factor*48);} 
if (val-factor*49 > 0 && val-factor*49 <= 255) {leds[49] = CHSV(hue, 255, val-factor*49); leds[NUM_LEDS-50] = CHSV(hue, 255, val-factor*49);} 
if (val-factor*50 > 0 && val-factor*50 <= 255) {leds[50] = CHSV(hue, 255, val-factor*50); leds[NUM_LEDS-51] = CHSV(hue, 255, val-factor*50);} 
if (val-factor*51 > 0 && val-factor*51 <= 255) {leds[51] = CHSV(hue, 255, val-factor*51); leds[NUM_LEDS-52] = CHSV(hue, 255, val-factor*51);}
if (val-factor*52 > 0 && val-factor*52 <= 255) {leds[52] = CHSV(hue, 255, val-factor*52); leds[NUM_LEDS-53] = CHSV(hue, 255, val-factor*52);}
if (val-factor*53 > 0 && val-factor*53 <= 255) {leds[53] = CHSV(hue, 255, val-factor*53); leds[NUM_LEDS-54] = CHSV(hue, 255, val-factor*53);}
if (val-factor*54 > 0 && val-factor*54 <= 255) {leds[54] = CHSV(hue, 255, val-factor*54); leds[NUM_LEDS-55] = CHSV(hue, 255, val-factor*54);}
if (val-factor*55 > 0 && val-factor*55 <= 255) {leds[55] = CHSV(hue, 255, val-factor*55); leds[NUM_LEDS-56] = CHSV(hue, 255, val-factor*55);}
if (val-factor*56 > 0 && val-factor*56 <= 255) {leds[56] = CHSV(hue, 255, val-factor*56); leds[NUM_LEDS-57] = CHSV(hue, 255, val-factor*56);}
if (val-factor*57 > 0 && val-factor*57 <= 255) {leds[57] = CHSV(hue, 255, val-factor*57); leds[NUM_LEDS-58] = CHSV(hue, 255, val-factor*57);}
if (val-factor*58 > 0 && val-factor*58 <= 255) {leds[58] = CHSV(hue, 255, val-factor*58); leds[NUM_LEDS-59] = CHSV(hue, 255, val-factor*58);}
if (val-factor*59 > 0 && val-factor*59 <= 255) {leds[59] = CHSV(hue, 255, val-factor*59); leds[NUM_LEDS-60] = CHSV(hue, 255, val-factor*59);}
if (val-factor*60 > 0 && val-factor*60 <= 255) {leds[60] = CHSV(hue, 255, val-factor*60); leds[NUM_LEDS-61] = CHSV(hue, 255, val-factor*60);}
if (val-factor*61 > 0 && val-factor*61 <= 255) {leds[61] = CHSV(hue, 255, val-factor*61); leds[NUM_LEDS-62] = CHSV(hue, 255, val-factor*61);}
if (val-factor*62 > 0 && val-factor*62 <= 255) {leds[62] = CHSV(hue, 255, val-factor*62); leds[NUM_LEDS-63] = CHSV(hue, 255, val-factor*62);}
if (val-factor*63 > 0 && val-factor*63 <= 255) {leds[63] = CHSV(hue, 255, val-factor*63); leds[NUM_LEDS-64] = CHSV(hue, 255, val-factor*63);}
if (val-factor*64 > 0 && val-factor*64 <= 255) {leds[64] = CHSV(hue, 255, val-factor*64); leds[NUM_LEDS-65] = CHSV(hue, 255, val-factor*64);}
if (val-factor*65 > 0 && val-factor*65 <= 255) {leds[65] = CHSV(hue, 255, val-factor*65); leds[NUM_LEDS-66] = CHSV(hue, 255, val-factor*65);}
if (val-factor*66 > 0 && val-factor*66 <= 255) {leds[66] = CHSV(hue, 255, val-factor*66); leds[NUM_LEDS-67] = CHSV(hue, 255, val-factor*66);}
if (val-factor*67 > 0 && val-factor*67 <= 255) {leds[67] = CHSV(hue, 255, val-factor*67); leds[NUM_LEDS-68] = CHSV(hue, 255, val-factor*67);}
if (val-factor*68 > 0 && val-factor*68 <= 255) {leds[68] = CHSV(hue, 255, val-factor*68); leds[NUM_LEDS-69] = CHSV(hue, 255, val-factor*68);}
if (val-factor*69 > 0 && val-factor*69 <= 255) {leds[69] = CHSV(hue, 255, val-factor*69); leds[NUM_LEDS-70] = CHSV(hue, 255, val-factor*69);}
if (val-factor*70 > 0 && val-factor*70 <= 255) {leds[70] = CHSV(hue, 255, val-factor*70); }
if (val-factor*70 >= 254) {for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(250); } if (val-factor*70 >= 380) {val = 0;} }
 FastLED.delay (25);

   
  FastLED.show(); 
  }


//as above but rainbow


void Loop_Fourteen (){
  
  
//val = dim8_video(val);


//for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, 30);}
//val++;
//val = brighten8_raw(val);


//if (gate == 0) { val ++; if (val >= 254) {gate = 1;} for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, val); }}
//if (gate == 1) {val --; for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(253); }if (val <= 1) {gate = 0;}}
//if (gate == 1) {val --; for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, val); } if (val <= 30) {gate = 0;}}
val ++;
//for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

if (val > 0 && val <= 255) {leds[0] = CHSV(hue, 255, val); leds[NUM_LEDS-1] = CHSV(hue, 255, val); }
if (val-factor*1 > 0 && val-factor*1 <= 255) {leds[1] = CHSV(hue+hueFactor*1, 255, val-factor*1); leds[NUM_LEDS-2] = CHSV(hue+hueFactor*1, 255, val-factor*1);}
if (val-factor*2 > 0 && val-factor*2 <= 255) {leds[2] = CHSV(hue+hueFactor*2, 255, val-factor*2); leds[NUM_LEDS-3] = CHSV(hue+hueFactor*2, 255, val-factor*2);}
if (val-factor*3 > 0 && val-factor*3 <= 255) {leds[3] = CHSV(hue+hueFactor*3, 255, val-factor*3); leds[NUM_LEDS-4] = CHSV(hue+hueFactor*3, 255, val-factor*3);}
if (val-factor*4 > 0 && val-factor*4 <= 255) {leds[4] = CHSV(hue+hueFactor*4, 255, val-factor*4); leds[NUM_LEDS-5] = CHSV(hue+hueFactor*4, 255, val-factor*4);}
if (val-factor*5 > 0 && val-factor*5 <= 255) {leds[5] = CHSV(hue+hueFactor*5, 255, val-factor*5); leds[NUM_LEDS-6] = CHSV(hue+hueFactor*5, 255, val-factor*5);}
if (val-factor*6 > 0 && val-factor*6 <= 255) {leds[6] = CHSV(hue+hueFactor*6, 255, val-factor*6); leds[NUM_LEDS-7] = CHSV(hue+hueFactor*6, 255, val-factor*6);}
if (val-factor*7 > 0 && val-factor*7 <= 255) {leds[7] = CHSV(hue+hueFactor*7, 255, val-factor*7); leds[NUM_LEDS-8] = CHSV(hue+hueFactor*7, 255, val-factor*7);}
if (val-factor*8 > 0 && val-factor*8 <= 255) {leds[8] = CHSV(hue+hueFactor*8, 255, val-factor*8); leds[NUM_LEDS-9] = CHSV(hue+hueFactor*8, 255, val-factor*8);}
if (val-factor*9 > 0 && val-factor*9 <= 255) {leds[9] = CHSV(hue+hueFactor*9, 255, val-factor*9); leds[NUM_LEDS-10] = CHSV(hue+hueFactor*9, 255, val-factor*9);}
if (val-factor*10 > 0 && val-factor*10 <= 255) {leds[10] = CHSV(hue+hueFactor*10, 255, val-factor*10); leds[NUM_LEDS-11] = CHSV(hue+hueFactor*10, 255, val-factor*10);}
if (val-factor*11 > 0 && val-factor*11 <= 255) {leds[11] = CHSV(hue+hueFactor*11, 255, val-factor*11); leds[NUM_LEDS-12] = CHSV(hue+hueFactor*11, 255, val-factor*11);}
if (val-factor*12 > 0 && val-factor*12 <= 255) {leds[12] = CHSV(hue+hueFactor*12, 255, val-factor*12); leds[NUM_LEDS-13] = CHSV(hue+hueFactor*12, 255, val-factor*12);}
if (val-factor*13 > 0 && val-factor*13 <= 255) {leds[13] = CHSV(hue+hueFactor*13, 255, val-factor*13); leds[NUM_LEDS-14] = CHSV(hue+hueFactor*13, 255, val-factor*13);}
if (val-factor*14 > 0 && val-factor*14 <= 255) {leds[14] = CHSV(hue+hueFactor*14, 255, val-factor*14); leds[NUM_LEDS-15] = CHSV(hue+hueFactor*14, 255, val-factor*14);}
if (val-factor*15 > 0 && val-factor*15 <= 255) {leds[15] = CHSV(hue+hueFactor*15, 255, val-factor*15); leds[NUM_LEDS-16] = CHSV(hue+hueFactor*15, 255, val-factor*15);}
if (val-factor*16 > 0 && val-factor*16 <= 255) {leds[16] = CHSV(hue+hueFactor*16, 255, val-factor*16); leds[NUM_LEDS-17] = CHSV(hue+hueFactor*16, 255, val-factor*16);}
if (val-factor*17 > 0 && val-factor*17 <= 255) {leds[17] = CHSV(hue+hueFactor*17, 255, val-factor*17); leds[NUM_LEDS-18] = CHSV(hue+hueFactor*17, 255, val-factor*17);}
if (val-factor*18 > 0 && val-factor*18 <= 255) {leds[18] = CHSV(hue+hueFactor*18, 255, val-factor*18); leds[NUM_LEDS-19] = CHSV(hue+hueFactor*18, 255, val-factor*18);}
if (val-factor*19 > 0 && val-factor*19 <= 255) {leds[19] = CHSV(hue+hueFactor*19, 255, val-factor*19); leds[NUM_LEDS-20] = CHSV(hue+hueFactor*19, 255, val-factor*19);}
if (val-factor*20 > 0 && val-factor*20 <= 255) {leds[20] = CHSV(hue+hueFactor*20, 255, val-factor*20); leds[NUM_LEDS-21] = CHSV(hue+hueFactor*20, 255, val-factor*20);}
if (val-factor*21 > 0 && val-factor*21 <= 255) {leds[21] = CHSV(hue+hueFactor*21, 255, val-factor*21); leds[NUM_LEDS-22] = CHSV(hue+hueFactor*21, 255, val-factor*21);}
if (val-factor*22 > 0 && val-factor*22 <= 255) {leds[22] = CHSV(hue+hueFactor*22, 255, val-factor*22); leds[NUM_LEDS-23] = CHSV(hue+hueFactor*22, 255, val-factor*22);}
if (val-factor*23 > 0 && val-factor*23 <= 255) {leds[23] = CHSV(hue+hueFactor*23, 255, val-factor*23); leds[NUM_LEDS-24] = CHSV(hue+hueFactor*23, 255, val-factor*23);}
if (val-factor*24 > 0 && val-factor*24 <= 255) {leds[24] = CHSV(hue+hueFactor*24, 255, val-factor*24); leds[NUM_LEDS-25] = CHSV(hue+hueFactor*24, 255, val-factor*24);}
if (val-factor*25 > 0 && val-factor*25 <= 255) {leds[25] = CHSV(hue+hueFactor*25, 255, val-factor*25); leds[NUM_LEDS-26] = CHSV(hue+hueFactor*25, 255, val-factor*25);}
if (val-factor*26 > 0 && val-factor*26 <= 255) {leds[26] = CHSV(hue+hueFactor*26, 255, val-factor*26); leds[NUM_LEDS-27] = CHSV(hue+hueFactor*26, 255, val-factor*26);}
if (val-factor*27 > 0 && val-factor*27 <= 255) {leds[27] = CHSV(hue+hueFactor*27, 255, val-factor*27); leds[NUM_LEDS-28] = CHSV(hue+hueFactor*27, 255, val-factor*27);}
if (val-factor*28 > 0 && val-factor*28 <= 255) {leds[28] = CHSV(hue+hueFactor*28, 255, val-factor*28); leds[NUM_LEDS-29] = CHSV(hue+hueFactor*28, 255, val-factor*28);}
if (val-factor*29 > 0 && val-factor*29 <= 255) {leds[29] = CHSV(hue+hueFactor*29, 255, val-factor*29); leds[NUM_LEDS-30] = CHSV(hue+hueFactor*29, 255, val-factor*29);} 
if (val-factor*30 > 0 && val-factor*30 <= 255) {leds[30] = CHSV(hue+hueFactor*30, 255, val-factor*30); leds[NUM_LEDS-31] = CHSV(hue+hueFactor*30, 255, val-factor*30);} 
if (val-factor*31 > 0 && val-factor*31 <= 255) {leds[31] = CHSV(hue+hueFactor*31, 255, val-factor*31); leds[NUM_LEDS-32] = CHSV(hue+hueFactor*31, 255, val-factor*31);} 
if (val-factor*32 > 0 && val-factor*32 <= 255) {leds[32] = CHSV(hue+hueFactor*32, 255, val-factor*32); leds[NUM_LEDS-33] = CHSV(hue+hueFactor*32, 255, val-factor*32);} 
if (val-factor*33 > 0 && val-factor*33 <= 255) {leds[33] = CHSV(hue+hueFactor*33, 255, val-factor*33); leds[NUM_LEDS-34] = CHSV(hue+hueFactor*33, 255, val-factor*33);} 
if (val-factor*34 > 0 && val-factor*34 <= 255) {leds[34] = CHSV(hue+hueFactor*34, 255, val-factor*34); leds[NUM_LEDS-35] = CHSV(hue+hueFactor*34, 255, val-factor*34);} 
if (val-factor*35 > 0 && val-factor*35 <= 255) {leds[35] = CHSV(hue+hueFactor*35, 255, val-factor*35); leds[NUM_LEDS-36] = CHSV(hue+hueFactor*35, 255, val-factor*35);} 
if (val-factor*36 > 0 && val-factor*36 <= 255) {leds[36] = CHSV(hue+hueFactor*36, 255, val-factor*36); leds[NUM_LEDS-37] = CHSV(hue+hueFactor*36, 255, val-factor*36);} 
if (val-factor*37 > 0 && val-factor*37 <= 255) {leds[37] = CHSV(hue+hueFactor*37, 255, val-factor*37); leds[NUM_LEDS-38] = CHSV(hue+hueFactor*37, 255, val-factor*37);} 
if (val-factor*38 > 0 && val-factor*38 <= 255) {leds[38] = CHSV(hue+hueFactor*38, 255, val-factor*38); leds[NUM_LEDS-39] = CHSV(hue+hueFactor*38, 255, val-factor*38);} 
if (val-factor*39 > 0 && val-factor*39 <= 255) {leds[39] = CHSV(hue+hueFactor*39, 255, val-factor*39); leds[NUM_LEDS-40] = CHSV(hue+hueFactor*39, 255, val-factor*39);} 
if (val-factor*40 > 0 && val-factor*40 <= 255) {leds[40] = CHSV(hue+hueFactor*40, 255, val-factor*40); leds[NUM_LEDS-41] = CHSV(hue+hueFactor*40, 255, val-factor*40);} 
if (val-factor*41 > 0 && val-factor*41 <= 255) {leds[41] = CHSV(hue+hueFactor*41, 255, val-factor*41); leds[NUM_LEDS-42] = CHSV(hue+hueFactor*41, 255, val-factor*41);} 
if (val-factor*42 > 0 && val-factor*42 <= 255) {leds[42] = CHSV(hue+hueFactor*42, 255, val-factor*42); leds[NUM_LEDS-43] = CHSV(hue+hueFactor*42, 255, val-factor*42);} 
if (val-factor*43 > 0 && val-factor*43 <= 255) {leds[43] = CHSV(hue+hueFactor*43, 255, val-factor*43); leds[NUM_LEDS-44] = CHSV(hue+hueFactor*43, 255, val-factor*43);} 
if (val-factor*44 > 0 && val-factor*44 <= 255) {leds[44] = CHSV(hue+hueFactor*44, 255, val-factor*44); leds[NUM_LEDS-45] = CHSV(hue+hueFactor*44, 255, val-factor*44);} 
if (val-factor*45 > 0 && val-factor*45 <= 255) {leds[45] = CHSV(hue+hueFactor*45, 255, val-factor*45); leds[NUM_LEDS-46] = CHSV(hue+hueFactor*45, 255, val-factor*45);} 
if (val-factor*46 > 0 && val-factor*46 <= 255) {leds[46] = CHSV(hue+hueFactor*46, 255, val-factor*46); leds[NUM_LEDS-47] = CHSV(hue+hueFactor*46, 255, val-factor*46);} 
if (val-factor*47 > 0 && val-factor*47 <= 255) {leds[47] = CHSV(hue+hueFactor*47, 255, val-factor*47); leds[NUM_LEDS-48] = CHSV(hue+hueFactor*47, 255, val-factor*47);} 
if (val-factor*48 > 0 && val-factor*48 <= 255) {leds[48] = CHSV(hue+hueFactor*48, 255, val-factor*48); leds[NUM_LEDS-49] = CHSV(hue+hueFactor*48, 255, val-factor*48);} 
if (val-factor*49 > 0 && val-factor*49 <= 255) {leds[49] = CHSV(hue+hueFactor*49, 255, val-factor*49); leds[NUM_LEDS-50] = CHSV(hue+hueFactor*49, 255, val-factor*49);} 
if (val-factor*50 > 0 && val-factor*50 <= 255) {leds[50] = CHSV(hue+hueFactor*50, 255, val-factor*50); leds[NUM_LEDS-51] = CHSV(hue+hueFactor*50, 255, val-factor*50);} 
if (val-factor*51 > 0 && val-factor*51 <= 255) {leds[51] = CHSV(hue+hueFactor*51, 255, val-factor*51); leds[NUM_LEDS-52] = CHSV(hue+hueFactor*51, 255, val-factor*51);}
if (val-factor*52 > 0 && val-factor*52 <= 255) {leds[52] = CHSV(hue+hueFactor*52, 255, val-factor*52); leds[NUM_LEDS-53] = CHSV(hue+hueFactor*52, 255, val-factor*52);}
if (val-factor*53 > 0 && val-factor*53 <= 255) {leds[53] = CHSV(hue+hueFactor*53, 255, val-factor*53); leds[NUM_LEDS-54] = CHSV(hue+hueFactor*53, 255, val-factor*53);}
if (val-factor*54 > 0 && val-factor*54 <= 255) {leds[54] = CHSV(hue+hueFactor*54, 255, val-factor*54); leds[NUM_LEDS-55] = CHSV(hue+hueFactor*54, 255, val-factor*54);}
if (val-factor*55 > 0 && val-factor*55 <= 255) {leds[55] = CHSV(hue+hueFactor*55, 255, val-factor*55); leds[NUM_LEDS-56] = CHSV(hue+hueFactor*55, 255, val-factor*55);}
if (val-factor*56 > 0 && val-factor*56 <= 255) {leds[56] = CHSV(hue+hueFactor*56, 255, val-factor*56); leds[NUM_LEDS-57] = CHSV(hue+hueFactor*56, 255, val-factor*56);}
if (val-factor*57 > 0 && val-factor*57 <= 255) {leds[57] = CHSV(hue+hueFactor*57, 255, val-factor*57); leds[NUM_LEDS-58] = CHSV(hue+hueFactor*57, 255, val-factor*57);}
if (val-factor*58 > 0 && val-factor*58 <= 255) {leds[58] = CHSV(hue+hueFactor*58, 255, val-factor*58); leds[NUM_LEDS-59] = CHSV(hue+hueFactor*58, 255, val-factor*58);}
if (val-factor*59 > 0 && val-factor*59 <= 255) {leds[59] = CHSV(hue+hueFactor*59, 255, val-factor*59); leds[NUM_LEDS-60] = CHSV(hue+hueFactor*59, 255, val-factor*59);}
if (val-factor*60 > 0 && val-factor*60 <= 255) {leds[60] = CHSV(hue+hueFactor*60, 255, val-factor*60); leds[NUM_LEDS-61] = CHSV(hue+hueFactor*60, 255, val-factor*60);}
if (val-factor*61 > 0 && val-factor*61 <= 255) {leds[61] = CHSV(hue+hueFactor*61, 255, val-factor*61); leds[NUM_LEDS-62] = CHSV(hue+hueFactor*61, 255, val-factor*61);}
if (val-factor*62 > 0 && val-factor*62 <= 255) {leds[62] = CHSV(hue+hueFactor*62, 255, val-factor*62); leds[NUM_LEDS-63] = CHSV(hue+hueFactor*62, 255, val-factor*62);}
if (val-factor*63 > 0 && val-factor*63 <= 255) {leds[63] = CHSV(hue+hueFactor*63, 255, val-factor*63); leds[NUM_LEDS-64] = CHSV(hue+hueFactor*63, 255, val-factor*63);}
if (val-factor*64 > 0 && val-factor*64 <= 255) {leds[64] = CHSV(hue+hueFactor*64, 255, val-factor*64); leds[NUM_LEDS-65] = CHSV(hue+hueFactor*64, 255, val-factor*64);}
if (val-factor*65 > 0 && val-factor*65 <= 255) {leds[65] = CHSV(hue+hueFactor*65, 255, val-factor*65); leds[NUM_LEDS-66] = CHSV(hue+hueFactor*65, 255, val-factor*65);}
if (val-factor*66 > 0 && val-factor*66 <= 255) {leds[66] = CHSV(hue+hueFactor*66, 255, val-factor*66); leds[NUM_LEDS-67] = CHSV(hue+hueFactor*66, 255, val-factor*66);}
if (val-factor*67 > 0 && val-factor*67 <= 255) {leds[67] = CHSV(hue+hueFactor*67, 255, val-factor*67); leds[NUM_LEDS-68] = CHSV(hue+hueFactor*67, 255, val-factor*67);}
if (val-factor*68 > 0 && val-factor*68 <= 255) {leds[68] = CHSV(hue+hueFactor*68, 255, val-factor*68); leds[NUM_LEDS-69] = CHSV(hue+hueFactor*68, 255, val-factor*68);}
if (val-factor*69 > 0 && val-factor*69 <= 255) {leds[69] = CHSV(hue+hueFactor*69, 255, val-factor*69); leds[NUM_LEDS-70] = CHSV(hue+hueFactor*69, 255, val-factor*69);}
if (val-factor*70 > 0 && val-factor*70 <= 255) {leds[70] = CHSV(hue+hueFactor*70, 255, val-factor*70);}
if (val-factor*70 >= 254) { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(250); } if (val-factor*70 >= 254 + 130) {val = 0;} }
 FastLED.delay (25);

   
  FastLED.show(); 
  }  


  //if hue = index + 8; val = index + 1; nooooope. not yet It changes the next index, not any of the previous indexes
