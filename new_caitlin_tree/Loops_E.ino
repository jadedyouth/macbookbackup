

void digitalTrain () {
  if (masterHue < 240) {hue = masterHue; } 
  if (masterHue > 240) {hue ++;} 

   for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0); }

 
        if (masterTime > 1000) { fadeFactor = 300; }
       
        if (masterTime < 1000 && masterTime > 800) { fadeFactor = 250; }
        if (masterTime < 800 && masterTime > 600) {  fadeFactor = 200; }
        if (masterTime < 600 && masterTime > 400) {  fadeFactor = 150; }
        if (masterTime < 400 && masterTime > 200) {  fadeFactor = 100; }
        if (masterTime < 200 && masterTime > 50)  {  fadeFactor = 50; }
        if (masterTime < 50 )                    {   fadeFactor = 20; }
  
  if (timerZero > fadeFactor) {rainindex ++; rainindexAA++; rainindexBB++; rainindexCC++; rainindexDD++; rainindexEE++; rainindexFF++; rainindexGG++;  
                                      rainindexHH++; rainindexII++; rainindexJJ++; rainindexKK++; rainindexLL++; rainindexMM++;
   timerZero = 0;}



  if (rainindex > NUM_LEDS + 15) {rainindex = -15; rainindextail = random (2,9);  }
  for (int i = rainindex; i< rainindex + rainindextail; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexAA > NUM_LEDS + 15) {rainindexAA = -15; rainindextailAA = random (2,9);  }
  for (int i = rainindexAA; i< rainindexAA + rainindextailAA; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexBB > NUM_LEDS + 15) {rainindexBB = -15; rainindextailBB = random (2,9);  }
  for (int i = rainindexBB; i< rainindexBB + rainindextailBB; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexCC > NUM_LEDS + 15) {rainindexCC = -15; rainindextailCC = random (2,9);  }
  for (int i = rainindexCC; i< rainindexCC + rainindextailCC; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexDD > NUM_LEDS + 15) {rainindexDD = -15; rainindextailDD = random (2,9);  }
  for (int i = rainindexDD; i< rainindexDD + rainindextailDD; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexEE > NUM_LEDS + 15) {rainindexEE = -15; rainindextailEE = random (2,9);  }
  for (int i = rainindexEE; i< rainindexEE + rainindextailEE; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexFF > NUM_LEDS + 15) {rainindexFF = -15; rainindextailFF = random (2,9);  }
  for (int i = rainindexFF; i< rainindexFF + rainindextailFF; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexGG > NUM_LEDS + 15) {rainindexGG = -15; rainindextailGG = random (2,9);  }
  for (int i = rainindexGG; i< rainindexGG + rainindextailGG; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexHH > NUM_LEDS + 15) {rainindexHH = -15; rainindextailHH = random (2,9);  }
  for (int i = rainindexHH; i< rainindexHH + rainindextailHH; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexII > NUM_LEDS + 15) {rainindexII = -15; rainindextailII = random (2,9);  }
  for (int i = rainindexII; i< rainindexII + rainindextailII; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

    if (rainindexJJ > NUM_LEDS + 15) {rainindexJJ = -15; rainindextailJJ = random (2,9);  }
  for (int i = rainindexJJ; i< rainindexJJ + rainindextailJJ; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

    if (rainindexKK > NUM_LEDS + 15) {rainindexKK = -15; rainindextailKK = random (2,9);  }
  for (int i = rainindexKK; i< rainindexKK + rainindextailKK; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

    if (rainindexLL > NUM_LEDS + 15) {rainindexLL = -15; rainindextailLL = random (2,9);  }
  for (int i = rainindexLL; i< rainindexLL + rainindextailLL; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

    if (rainindexMM > NUM_LEDS + 15) {rainindexMM = -15; rainindextailMM = random (2,9);  }
  for (int i = rainindexMM; i< rainindexMM + rainindextailMM; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  FastLED.show();}


 void digitalRain () {
  
  if (masterHue < 240) {hue = masterHue; } 
  if (masterHue > 240) {hue ++;} 

   for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0); }

 
        if (masterTime > 1000) { fadeFactor = 300; }
       
        if (masterTime < 1000 && masterTime > 800) { fadeFactor = 250; }
        if (masterTime < 800 && masterTime > 600) {  fadeFactor = 200; }
        if (masterTime < 600 && masterTime > 400) {  fadeFactor = 150; }
        if (masterTime < 400 && masterTime > 200) {  fadeFactor = 100; }
        if (masterTime < 200 && masterTime > 50)  {  fadeFactor = 50; }
        if (masterTime < 50 )                    {   fadeFactor = 20; }
  
  if (timerZero > fadeFactor) {rainindex ++; rainindexAA++; rainindexBB++; rainindexCC++; rainindexDD++; rainindexEE++; rainindexFF++; rainindexGG++;  
                                             rainindexHH++; rainindexII++; rainindexJJ++; rainindexKK++; rainindexLL++; rainindexMM++; rainindexNN++; rainindexOO++;
                                             rainindexPP++; rainindexQQ++; rainindexRR++; rainindexSS++; rainindexTT++; rainindexUU++; rainindexVV++; rainindexWW++; 
                                             rainindexXX++; rainindexYY++; rainindexZZ++; rainindexZZZ++; 
   timerZero = 0;}



  if (rainindex > NUM_LEDS + 15) {rainindex = -15; rainindextail = random (2,9);  }
  for (int i = rainindex; i< rainindex + rainindextail; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexAA > NUM_LEDS + 15) {rainindexAA = -15; rainindextailAA = random (2,9);  }
  for (int i = rainindexAA; i< rainindexAA + rainindextailAA; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexBB > NUM_LEDS + 15) {rainindexBB = -15; rainindextailBB = random (2,9);  }
  for (int i = rainindexBB; i< rainindexBB + rainindextailBB; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexCC > NUM_LEDS + 15) {rainindexCC = -15; rainindextailCC = random (2,9);  }
  for (int i = rainindexCC; i< rainindexCC + rainindextailCC; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexDD > NUM_LEDS + 15) {rainindexDD = -15; rainindextailDD = random (2,9);  }
  for (int i = rainindexDD; i< rainindexDD + rainindextailDD; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexEE > NUM_LEDS + 15) {rainindexEE = -15; rainindextailEE = random (2,9);  }
  for (int i = rainindexEE; i< rainindexEE + rainindextailEE; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexFF > NUM_LEDS + 15) {rainindexFF = -15; rainindextailFF = random (2,9);  }
  for (int i = rainindexFF; i< rainindexFF + rainindextailFF; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexGG > NUM_LEDS + 15) {rainindexGG = -15; rainindextailGG = random (2,9);  }
  for (int i = rainindexGG; i< rainindexGG + rainindextailGG; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  if (rainindexHH > NUM_LEDS + 15) {rainindexHH = -15; rainindextailHH = random (2,9);  }
  for (int i = rainindexHH; i< rainindexHH + rainindextailHH; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexII > NUM_LEDS + 15) {rainindexII = -15; rainindextailII = random (2,9);  }
  for (int i = rainindexII; i< rainindexII + rainindextailII; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexJJ > NUM_LEDS + 15) {rainindexJJ = -15; rainindextailJJ = random (2,9);  }
  for (int i = rainindexJJ; i< rainindexJJ + rainindextailJJ; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexKK > NUM_LEDS + 15) {rainindexKK = -15; rainindextailKK = random (2,9);  }
  for (int i = rainindexKK; i< rainindexKK + rainindextailKK; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexLL > NUM_LEDS + 15) {rainindexLL = -15; rainindextailLL = random (2,9);  }
  for (int i = rainindexLL; i< rainindexLL + rainindextailLL; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexMM > NUM_LEDS + 15) {rainindexMM = -15; rainindextailMM = random (2,9);  }
  for (int i = rainindexMM; i< rainindexMM + rainindextailMM; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexNN > NUM_LEDS + 15) {rainindexNN = -15; rainindextailNN = random (2,9);  }
  for (int i = rainindexNN; i< rainindexNN + rainindextailNN; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
 
  if (rainindexOO > NUM_LEDS + 15) {rainindexOO = -15; rainindextailOO = random (2,9);  }
  for (int i = rainindexOO; i< rainindexOO + rainindextailOO; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexPP > NUM_LEDS + 15) {rainindexPP = -15; rainindextailPP = random (2,9);  }
  for (int i = rainindexPP; i< rainindexPP + rainindextailPP; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexQQ > NUM_LEDS + 15) {rainindexQQ = -15; rainindextailQQ = random (2,9);  }
  for (int i = rainindexQQ; i< rainindexQQ + rainindextailQQ; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexRR > NUM_LEDS + 15) {rainindexRR = -15; rainindextailRR = random (2,9);  }
  for (int i = rainindexRR; i< rainindexRR + rainindextailRR; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexSS > NUM_LEDS + 15) {rainindexSS = -15; rainindextailSS = random (2,9);  }
  for (int i = rainindexSS; i< rainindexSS + rainindextailSS; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexTT > NUM_LEDS + 15) {rainindexTT = -15; rainindextailTT = random (2,9);  }
  for (int i = rainindexTT; i< rainindexTT + rainindextailTT; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexUU > NUM_LEDS + 15) {rainindexUU = -15; rainindextailUU = random (2,9);  }
  for (int i = rainindexUU; i< rainindexUU + rainindextailUU; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexVV > NUM_LEDS + 15) {rainindexVV = -15; rainindextailVV = random (2,9);  }
  for (int i = rainindexVV; i< rainindexVV + rainindextailVV; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexWW > NUM_LEDS + 15) {rainindexWW = -15; rainindextailWW = random (2,9);  }
  for (int i = rainindexWW; i< rainindexWW + rainindextailWW; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexXX > NUM_LEDS + 15) {rainindexXX = -15; rainindextailXX = random (2,9);  }
  for (int i = rainindexXX; i< rainindexXX + rainindextailXX; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexYY > NUM_LEDS + 15) {rainindexYY = -15; rainindextailYY = random (2,9);  }
  for (int i = rainindexYY; i< rainindexYY + rainindextailYY; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexZZ > NUM_LEDS + 15) {rainindexZZ = -15; rainindextailZZ = random (2,9);  }
  for (int i = rainindexZZ; i< rainindexZZ + rainindextailZZ; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }

  if (rainindexZZZ > NUM_LEDS + 15) {rainindexZZZ = -15; rainindextailZZZ = random (2,9);  }
  for (int i = rainindexZZZ; i< rainindexZZZ + rainindextailZZZ; i++){ if (i >= 0 && i < NUM_LEDS){    leds[i] = CHSV(hue, sat, 255); } }
  
  
  FastLED.show();} 
