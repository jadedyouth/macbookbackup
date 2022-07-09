void SolidOn (){ //solid on
  
  if (masterHue < 230) {hue = masterHue; for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat, 255);}} 
 

  if (masterHue >= 230 && masterHue < 253) {
    
        if (masterTime > 1000) { hue = hue + 1; }
        if (masterTime < 1000 && masterTime > 800) { hue = hue + 2;}
        if (masterTime < 800 && masterTime > 600) { hue = hue + 3;}
        if (masterTime < 600 && masterTime > 400) { hue = hue + 4;}
        if (masterTime < 400 && masterTime > 200) { hue = hue + 5;}
        if (masterTime < 200)  { hue = hue + 6;}

    
  
  
  
  
  
  
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat, 255);}} 
 
  
  
  
  if (timerZero > masterTime) {    
  if (masterHue >= 253) { for(int i = 0; i < NUM_LEDS; i++) {hue++; leds[i] = CHSV(hue, sat, 255);}}
timerZero = 0;}
  
  
   FastLED.show();}

void Blinker () { //blinks 


  if (masterHue < 250) {hue = masterHue; } 
 

  if (timerZero <= masterTime) { for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat, 255);} }

 if (timerZero > masterTime) { for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat, 0);} }

   if (timerZero > masterTime * 2) { timerZero = 0; if (masterHue >= 250) {hue = hue + 16;} }
  
  FastLED.show(); }



  void Fader () { // Fades in and out 
   
   if (masterHue < 250) {hue = masterHue; } 
    
    
      for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat, pulseVal); }  

if (masterTime > 1000) {    
  if (Direction == 0) { pulseVal ++; if (pulseVal >= 254) { Direction = 1;} }   
  if (Direction == 1) { pulseVal --; if (pulseVal <= 10) { timerZero = 0; Direction = 2;} } 
  if (Direction == 2) { if (timerZero <1000) { pulseVal = 0; if (masterHue >= 250) {hue = hue + 16;}} else Direction = 0; } 
                        } 

if (masterTime < 1000 && masterTime > 800) {    
  if (Direction == 0) { pulseVal = pulseVal + 2; if (pulseVal >= 253) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 2; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero < 800) { pulseVal = 0; if (masterHue >= 250) {hue = hue + 16;}} else Direction = 0; }   
                        } 


if (masterTime < 800 && masterTime > 600) {    
  if (Direction == 0) { pulseVal = pulseVal + 3; if (pulseVal >= 252) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 3; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero <500) { pulseVal = 0; if (masterHue >= 250) {hue = hue + 16;}} else Direction = 0; }   
                        }


if (masterTime < 600 && masterTime > 400) {    
  if (Direction == 0) { pulseVal = pulseVal + 4; if (pulseVal >= 251) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 4; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero <400) { pulseVal = 0; if (masterHue >= 250) {hue = hue + 16;}} else Direction = 0; }   
                        }

 if (masterTime < 400 && masterTime > 200) {    
  if (Direction == 0) { pulseVal = pulseVal + 5; if (pulseVal >= 250) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 5; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} } 
    if (Direction == 2) { if (timerZero <300) { pulseVal = 0; if (masterHue >= 250) {hue = hue + 16;}} else Direction = 0; }  
                        } 

 if (masterTime < 200 && masterTime > 50) {    
  if (Direction == 0) { pulseVal = pulseVal + 6; if (pulseVal >= 249) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 6; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero < 200) { pulseVal = 0; if (masterHue >= 250) {hue = hue + 16;}} else Direction = 0; }   
                        }     

    if (masterTime < 50 && masterTime > 2) {    
  if (Direction == 0) { pulseVal = pulseVal + 7; if (pulseVal >= 248) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 7; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} } 
    if (Direction == 2) { if (timerZero <100) { pulseVal = 0; if (masterHue >= 250) {hue = hue + 16;}} else Direction = 0; }  
                        }
                                                                                        
    if (masterTime <= 2) {    
  if (Direction == 0) { pulseVal = pulseVal + 8; if (pulseVal >= 247) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 8; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero <100) { pulseVal = 0; if (masterHue >= 250) {hue = hue + 16;}} else Direction = 0; }   
                        }    
    
    FastLED.show(); }



void GroupFlash () { // lights in groups of three turn on and off

if (masterHue < 250) {hue = masterHue; } 
  
  if (timerZero < masterTime) {   
  
       for(int i = 0; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(hue, sat, 255); } 
       for(int i = 1; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(0, 0, 0); }
       for(int i = 2; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(0, 0, 0); }  
  
  }

  
  
  if (timerZero > masterTime  && timerZero <= masterTime *2) { 
  for(int i = 0; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(0, 0, 0); } 
  for(int i = 1; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(hue, sat, 255); }
  for(int i = 2; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(0, 0, 0); }  
  }


  if (timerZero > masterTime *2  && timerZero <= masterTime*3) { 
  for(int i = 0; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(0, 0, 0); } 
  for(int i = 1; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(0, 0, 0); }
  for(int i = 2; i < NUM_LEDS; i = i+3) { leds[i] = CHSV(hue, sat, 255); } 
  }


  if (timerZero >= masterTime *3) { timerZero = 0; if (masterHue >= 250) {hue = hue + 8;}}
  
  
  FastLED.show(); } 


void FiftyFlash () { //lights in each manufactured group (50) randomly flash on and off 
  
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0);}

if (masterHue < 230) {hue = masterHue; } 

if (Direction == 0) {section = random (0,44); if (masterHue >= 230 && masterHue < 250) {hue = hue + 8;} if (masterHue >= 250) {hue = random (0,255);} Direction = 1; timerZero = 0;}

if (Direction == 1) {

if (timerZero < masterTime) {

switch (section) {
  
 case 0: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 1: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 2: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 3: for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 4: for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 
 case 5: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);}  break;
 case 6: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 7: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 8: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 9: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);}  for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 10: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);}  break;
 case 11: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;

 case 12: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 13: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 14: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 15: for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 16: for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 
 case 17: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 18: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 19: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 20: for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 21: for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 22: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 23: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 24: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 25: for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 26: for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 
 case 27: for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 28: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);}for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 29: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 30: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 31: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 32: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 33: for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;

 case 34: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 35: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 36: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 37: for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 38: for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;

 case 39: for(int i = 0; i < 50; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 40: for(int i = 50; i < 100; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 41: for(int i = 100; i < 150; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 42: for(int i = 150; i < 200; i++) { leds[i] = CHSV(hue, sat, 255);} break;
 case 43: for(int i = 200; i < 250; i++) { leds[i] = CHSV(hue, sat, 255);} break;
  
  }


}

if (timerZero >= masterTime*2) {timerZero = 0; Direction = 0;}
}


  
  FastLED.show();}   
