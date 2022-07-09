
void loop_five () {
  for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0); }

//colours
if (warphuemd == 0) {warphue = 95;} 
if (warphuemd == 1) {warphue = 160;} 
if (warphuemd == 2) { if (warphuedir == 0) {warphue = warphue - 1; if (warphue <= 140) { warphuedir = 1;} }  if (warphuedir == 1) {warphue = warphue + 1; if (warphue >= 160) { warphuedir = 0;} }                   }
if (warphuemd == 3) {warphue ++; }
if (warphuemd == 4) {warphue = 0; }
if (warphuemd == 5) {}

   
//speed
if (warpspd == 0) {warpdexA --; warpdexB --; warpdexC --; warpdexD ++; warpdexE ++; warpdexF ++;   }
if (warpspd == 1) {warpdexA = warpdexA - 2; warpdexB = warpdexB - 2; warpdexC = warpdexC - 2; warpdexD = warpdexD + 2; warpdexE = warpdexE + 2; warpdexF = warpdexF + 2;  }
if (warpspd == 2) {warpdexA = warpdexA - 3; warpdexB = warpdexB - 3; warpdexC = warpdexC - 3; warpdexD = warpdexD + 3; warpdexE = warpdexE + 3; warpdexF = warpdexF + 3;  }

if (warpspd == 0) {warpdexAA --; warpdexBB --; warpdexCC --; warpdexDD ++; warpdexEE ++; warpdexFF ++; }
if (warpspd == 1) {warpdexAA = warpdexAA - 2; warpdexBB = warpdexBB - 2; warpdexCC = warpdexCC - 2; warpdexDD = warpdexDD + 2; warpdexEE = warpdexEE + 2; warpdexFF = warpdexFF + 2;  }
if (warpspd == 2) {warpdexAA = warpdexAA - 3; warpdexBB = warpdexBB - 3; warpdexCC = warpdexCC - 3; warpdexDD = warpdexDD + 3; warpdexEE = warpdexEE + 3; warpdexFF = warpdexFF + 3;  }


//Up

if (warpdexD >= 169) {warpdexD = 42; warpdexDtail = random (warpmin,31); if (warpdexDtail >= 30) {warpdexDtail = 0;}}
for (int i = warpdexD; i< warpdexD + warpdexDtail; i++){ if (i >= 72 && i <= 143){    leds[i] = CHSV(warphue, 255, warpval); } }


if (warpdexE >= 169) {warpdexE = 42; warpdexEtail = random (warpmin,31); if (warpdexEtail >= 30) {warpdexEtail = 0;}}
for (int i = warpdexE; i< warpdexE + warpdexEtail; i++){ if (i >= 72 && i <= 143){    leds[i] = CHSV(warphue, 255, warpval); } }


if (warpdexF >= 169) {warpdexF = 42; warpdexFtail = random (warpmin,31); if (warpdexFtail >= 30) {warpdexFtail = 0;}}
for (int i = warpdexF; i< warpdexF + warpdexFtail; i++){ if (i >= 72 && i <= 143){    leds[i] = CHSV(warphue, 255, warpval); } }

if (warpdexDD >= 169+144) {warpdexDD = 42+144; warpdexDDtail = random (warpmin,31); if (warpdexDDtail >= 30) {warpdexDDtail = 0;}}
for (int i = warpdexDD; i< warpdexDD + warpdexDDtail; i++){ if (i >= 72 +144 && i <= 143 +144){    leds[i] = CHSV(warphue, 255, warpval); } }

if (warpdexEE >= 169+144) {warpdexEE = 42+144; warpdexEEtail = random (warpmin,31); if (warpdexEEtail >= 30) {warpdexEEtail = 0;}}
for (int i = warpdexEE; i< warpdexEE + warpdexEEtail; i++){ if (i >= 72 +144 && i <= 143 +144){    leds[i] = CHSV(warphue, 255, warpval); } }

if (warpdexFF >= 169+144) {warpdexFF = 42+144; warpdexFFtail = random (warpmin,31); if (warpdexFFtail >= 30) {warpdexFFtail = 0;}}
for (int i = warpdexFF; i< warpdexFF + warpdexFFtail; i++){ if (i >= 72 +144 && i <= 143 +144){    leds[i] = CHSV(warphue, 255, warpval); } }
   

//Down

if (warpdexA <= -25) {warpdexA = 106; warpdexAtail = random (warpmin,31); if (warpdexAtail >= 30) {warpdexAtail = 0;} }
for (int i = warpdexA; i< warpdexA + warpdexAtail; i++){ if (i >= 0 && i <= 72){    leds[i] = CHSV(warphue, 255, warpval); } }

if (warpdexB <= -25) {warpdexB = 106; warpdexBtail = random (warpmin,31); if (warpdexBtail >= 30) {warpdexBtail = 0;}}
for (int i = warpdexB; i< warpdexB + warpdexBtail; i++){ if (i >= 0 && i <= 72){    leds[i] = CHSV(warphue, 255, warpval); } }

if (warpdexC <= -25) {warpdexC = 106; warpdexCtail = random (warpmin,31); if (warpdexCtail >= 30) {warpdexCtail = 0;}}
for (int i = warpdexC; i< warpdexC + warpdexCtail; i++){ if (i >= 0 && i <= 72){    leds[i] = CHSV(warphue, 255, warpval); } }  


if (warpdexAA <= -25 +144) {warpdexAA = 106+144; warpdexAAtail = random (warpmin,31); if (warpdexAAtail >= 30) {warpdexAAtail = 0;} }
for (int i = warpdexAA; i< warpdexAA + warpdexAAtail; i++){ if (i >= 0 +144 && i <= 72 +144){    leds[i] = CHSV(warphue, 255, warpval); } }

if (warpdexBB <= -25 +144) {warpdexBB = 106+144; warpdexBBtail = random (warpmin,31); if (warpdexBBtail >= 30) {warpdexBBtail = 0;} }
for (int i = warpdexBB; i< warpdexBB + warpdexBBtail; i++){ if (i >= 0 +144 && i <= 72 +144){    leds[i] = CHSV(warphue, 255, warpval); } }    

if (warpdexCC <= -25 +144) {warpdexCC = 106+144; warpdexCCtail = random (warpmin,31); if (warpdexCCtail >= 30) {warpdexCCtail = 0;} }
for (int i = warpdexCC; i< warpdexCC + warpdexCCtail; i++){ if (i >= 0 +144 && i <= 72 +144){    leds[i] = CHSV(warphue, 255, warpval); } }   

    

  
  FastLED.show(); }
