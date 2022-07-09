

void loop_four (){
  
  for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0); }

//pulse or not

if (rainmd == 1) { if (raindmddir == 0) {rainval = rainval - 8; if (rainval <= 20) { raindmddir = 1;} }  if (raindmddir == 1) {rainval = rainval + 8; if (rainval >= 246) { raindmddir = 0;} }                   }

//colours
if (rainhuemd == 0) {rainhue = 95;} 
if (rainhuemd == 1) {rainhue = 160;} 
if (rainhuemd == 2) { if (rainhuedir == 0) {rainhue = rainhue - 1; if (rainhue <= 140) { rainhuedir = 1;} }  if (rainhuedir == 1) {rainhue = rainhue + 1; if (rainhue >= 160) { rainhuedir = 0;} }                   }
if (rainhuemd == 3) {rainhue ++; }
if (rainhuemd == 4) {}

if (rainspd == 0) {raindexA --; raindexB --; raindexC --; raindexD --; raindexE --; raindexF --; raindexG --;  }
if (rainspd == 1) {raindexA = raindexA - 2; raindexB = raindexB - 2; raindexC = raindexC - 2; raindexD = raindexD - 2; raindexE = raindexE - 2; raindexF = raindexF - 2; raindexG = raindexG - 2;  }
if (rainspd == 2) {raindexA = raindexA - 3; raindexB = raindexB - 3; raindexC = raindexC - 3; raindexD = raindexD - 3; raindexE = raindexE - 3; raindexF = raindexF - 3; raindexG = raindexG - 3;  }

if (rainspd == 0) {raindexAA --; raindexBB --; raindexCC --; raindexDD --; raindexEE --; raindexFF --; raindexGG --;  }
if (rainspd == 1) {raindexAA = raindexAA - 2; raindexBB = raindexBB - 2; raindexCC = raindexCC - 2; raindexDD = raindexDD - 2; raindexEE = raindexEE - 2; raindexFF = raindexFF - 2; raindexGG = raindexGG - 2;  }
if (rainspd == 2) {raindexAA = raindexAA - 3; raindexBB = raindexBB - 3; raindexCC = raindexCC - 3; raindexDD = raindexDD - 3; raindexEE = raindexEE - 3; raindexFF = raindexFF - 3; raindexGG = raindexGG - 3;  }


if (raindexA <= -30) {raindexA = 184; raindexAtail = random (3,26); if (raindexAtail >= 21) {raindexAtail = 0;} }
for (int i = raindexA; i< raindexA + raindexAtail; i++){ if (i >= 0 && i <= 143){    leds[i] = CHSV(rainhue, 255, rainval); } }
 

if (raindexB <= -30) {raindexB = 184; raindexBtail = random (3,26); if (raindexBtail >= 21) {raindexBtail = 0;}}
for (int i = raindexB; i< raindexB + raindexBtail; i++){ if (i >= 0 && i <= 143){    leds[i] = CHSV(rainhue, 255, rainval); } }
 

if (raindexC <= -30) {raindexC = 184; raindexCtail = random (3,26); if (raindexCtail >= 21) {raindexCtail = 0;}}
for (int i = raindexC; i< raindexC + raindexCtail; i++){ if (i >= 0 && i <= 143){    leds[i] = CHSV(rainhue, 255, rainval); } }
   

if (raindexD <= -30) {raindexD = 184; raindexDtail = random (3,26); if (raindexDtail >= 21) {raindexDtail = 0;}}
for (int i = raindexD; i< raindexD + raindexDtail; i++){ if (i >= 0 && i <= 143){    leds[i] = CHSV(rainhue, 255, rainval); } }
 

if (raindexE <= -30) {raindexE = 184; raindexEtail = random (3,26); if (raindexEtail >= 21) {raindexEtail = 0;}}
for (int i = raindexE; i< raindexE + raindexEtail; i++){ if (i >= 0 && i <= 143){    leds[i] = CHSV(rainhue, 255, rainval); } }   
   

if (raindexF <= -30) {raindexF = 184; raindexFtail = random (3,26); if (raindexFtail >= 21) {raindexFtail = 0;}}
for (int i = raindexF; i< raindexF + raindexFtail; i++){ if (i >= 0 && i <= 143){    leds[i] = CHSV(rainhue, 255, rainval); } }   


if (raindexG <= -30) {raindexG = 184; raindexGtail = random (3,26); if (raindexGtail >= 21) {raindexGtail = 0;}}
for (int i = raindexG; i< raindexG + raindexGtail; i++){ if (i >= 0 && i <= 143){    leds[i] = CHSV(rainhue, 255, rainval); } }  



if (raindexAA <= -30 +144) {raindexAA = 184+144; raindexAAtail = random (3,26); if (raindexAAtail >= 21) {raindexAAtail = 0;} }
for (int i = raindexAA; i< raindexAA + raindexAAtail; i++){ if (i >= 0 +144 && i <= 143 +144){    leds[i] = CHSV(rainhue, 255, rainval); } }


if (raindexBB <= -30 +144) {raindexBB = 184+144; raindexBBtail = random (3,26); if (raindexBBtail >= 21) {raindexBBtail = 0;} }
for (int i = raindexBB; i< raindexBB + raindexBBtail; i++){ if (i >= 0 +144 && i <= 143 +144){    leds[i] = CHSV(rainhue, 255, rainval); } }   
  

if (raindexCC <= -30 +144) {raindexCC = 184+144; raindexCCtail = random (3,26); if (raindexCCtail >= 21) {raindexCCtail = 0;} }
for (int i = raindexCC; i< raindexCC + raindexCCtail; i++){ if (i >= 0 +144 && i <= 143 +144){    leds[i] = CHSV(rainhue, 255, rainval); } }   
    

if (raindexDD <= -30 +144) {raindexDD = 184+144; raindexDDtail = random (3,26); if (raindexDDtail >= 21) {raindexDDtail = 0;}}
for (int i = raindexDD; i< raindexDD + raindexDDtail; i++){ if (i >= 0 +144 && i <= 143 +144){    leds[i] = CHSV(rainhue, 255, rainval); } }   
    

if (raindexEE <= -30 +144) {raindexEE = 184+144; raindexEEtail = random (3,26); if (raindexEEtail >= 21) {raindexEEtail = 0;} }
for (int i = raindexEE; i< raindexEE + raindexEEtail; i++){ if (i >= 0 +144 && i <= 143 +144){    leds[i] = CHSV(rainhue, 255, rainval); } }   
    

if (raindexFF <= -30 +144) {raindexFF = 184+144; raindexFFtail = random (3,26); if (raindexFFtail >= 21) {raindexFFtail = 0;} }
for (int i = raindexFF; i< raindexFF + raindexFFtail; i++){ if (i >= 0 +144 && i <= 143 +144){    leds[i] = CHSV(rainhue, 255, rainval); } }   


if (raindexGG <= -30 +144) {raindexGG = 184+144; raindexGGtail = random (3,26); if (raindexGGtail >= 21) {raindexGGtail = 0;} }
for (int i = raindexGG; i< raindexGG + raindexGGtail; i++){ if (i >= 0 +144 && i <= 143 +144){    leds[i] = CHSV(rainhue, 255, rainval); } }   
     
   FastLED.show(); 
  }
