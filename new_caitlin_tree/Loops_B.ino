void interspersedFade () { //every second light is interspersed in one of two groups. they fade in and out separately with an off pause. it creates a wave feeling on blue
  
  
   if (masterHue < 250) {hue = masterHue; hue1 = masterHue;} 
    
    
      for(int i = 0; i < NUM_LEDS; i = i+2) { leds[i] = CHSV(hue, sat, pulseVal); }
     

if (masterTime > 1000) {    
  if (Direction == 0) { pulseVal ++;  if (pulseVal >= 254) { Direction = 1;} }   
  if (Direction == 1) { pulseVal --; if (pulseVal <= 10) { timerZero = 0; Direction = 2;} } 
  if (Direction == 2) { if (timerZero <1000) { pulseVal = 0; if (masterHue >= 250) {hue = hue1 + 16;}} else Direction = 0; } 
                        } 

if (masterTime < 1000 && masterTime > 800) {    
  if (Direction == 0) { pulseVal = pulseVal + 2; if (pulseVal >= 253) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 2; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero < 800) { pulseVal = 0; if (masterHue >= 250) {hue = hue1 + 16;}} else Direction = 0; }   
                        } 


if (masterTime < 800 && masterTime > 600) {    
  if (Direction == 0) { pulseVal = pulseVal + 3; if (pulseVal >= 252) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 3; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero <500) { pulseVal = 0; if (masterHue >= 250) {hue = hue1 + 16;}} else Direction = 0; }   
                        }


if (masterTime < 600 && masterTime > 400) {    
  if (Direction == 0) { pulseVal = pulseVal + 4; if (pulseVal >= 251) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 4; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero <400) { pulseVal = 0; if (masterHue >= 250) {hue = hue1 + 16;}} else Direction = 0; }   
                        }

 if (masterTime < 400 && masterTime > 200) {    
  if (Direction == 0) { pulseVal = pulseVal + 5; if (pulseVal >= 250) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 5; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} } 
    if (Direction == 2) { if (timerZero <300) { pulseVal = 0; if (masterHue >= 250) {hue = hue1 + 16;}} else Direction = 0; }  
                        } 

 if (masterTime < 200 && masterTime > 50) {    
  if (Direction == 0) { pulseVal = pulseVal + 6; if (pulseVal >= 249) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 6; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero < 200) { pulseVal = 0; if (masterHue >= 250) {hue = hue1 + 16;}} else Direction = 0; }   
                        }     

    if (masterTime < 50 && masterTime > 2) {    
  if (Direction == 0) { pulseVal = pulseVal + 7; if (pulseVal >= 248) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 7; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} } 
    if (Direction == 2) { if (timerZero <100) { pulseVal = 0; if (masterHue >= 250) {hue = hue1 + 16;}} else Direction = 0; }  
                        }
                                                                                        
    if (masterTime <= 2) {    
  if (Direction == 0) { pulseVal = pulseVal + 8; if (pulseVal >= 247) { Direction = 1;} } 
  if (Direction == 1) { pulseVal = pulseVal - 8; if (pulseVal <= 10) {timerZero = 0;  Direction = 2;} }
    if (Direction == 2) { if (timerZero <100) { pulseVal = 0; if (masterHue >= 250) {hue = hue1 + 16;}} else Direction = 0; }   
                        }    


  for(int i = 1; i < NUM_LEDS; i = i+2) { leds[i] = CHSV(hue1, sat, pulseVal1); }
     

if (masterTime > 1000) {    
  if (Directon1 == 0) { pulseVal1 ++;  if (pulseVal1 >= 254) { Directon1 = 1;} }   
  if (Directon1 == 1) { pulseVal1 --; if (pulseVal1 <= 10) { timerOne = 0; Directon1 = 2;} } 
  if (Directon1 == 2) { if (timerOne <1000) { pulseVal1 = 0; if (masterHue >= 250) {hue1 = hue + 16;}} else Directon1 = 0; } 
                        } 

if (masterTime < 1000 && masterTime > 800) {    
  if (Directon1 == 0) { pulseVal1 = pulseVal1 + 2; if (pulseVal1 >= 253) { Directon1 = 1;} } 
  if (Directon1 == 1) { pulseVal1 = pulseVal1 - 2; if (pulseVal1 <= 10) {timerOne = 0;  Directon1 = 2;} }
    if (Directon1 == 2) { if (timerOne < 800) { pulseVal1 = 0; if (masterHue >= 250) {hue1 = hue + 16;}} else Directon1 = 0; }   
                        } 


if (masterTime < 800 && masterTime > 600) {    
  if (Directon1 == 0) { pulseVal1 = pulseVal1 + 3; if (pulseVal1 >= 252) { Directon1 = 1;} } 
  if (Directon1 == 1) { pulseVal1 = pulseVal1 - 3; if (pulseVal1 <= 10) {timerOne = 0;  Directon1 = 2;} }
    if (Directon1 == 2) { if (timerOne <500) { pulseVal1 = 0; if (masterHue >= 250) {hue1 = hue + 16;}} else Directon1 = 0; }   
                        }


if (masterTime < 600 && masterTime > 400) {    
  if (Directon1 == 0) { pulseVal1 = pulseVal1 + 4; if (pulseVal1 >= 251) { Directon1 = 1;} } 
  if (Directon1 == 1) { pulseVal1 = pulseVal1 - 4; if (pulseVal1 <= 10) {timerOne = 0;  Directon1 = 2;} }
    if (Directon1 == 2) { if (timerOne <400) { pulseVal1 = 0; if (masterHue >= 250) {hue1 = hue + 16;}} else Directon1 = 0; }   
                        }

 if (masterTime < 400 && masterTime > 200) {    
  if (Directon1 == 0) { pulseVal1 = pulseVal1 + 5; if (pulseVal1 >= 250) { Directon1 = 1;} } 
  if (Directon1 == 1) { pulseVal1 = pulseVal1 - 5; if (pulseVal1 <= 10) {timerOne = 0;  Directon1 = 2;} } 
    if (Directon1 == 2) { if (timerOne <300) { pulseVal1 = 0; if (masterHue >= 250) {hue1 = hue + 16;}} else Directon1 = 0; }  
                        } 

 if (masterTime < 200 && masterTime > 50) {    
  if (Directon1 == 0) { pulseVal1 = pulseVal1 + 6; if (pulseVal1 >= 249) { Directon1 = 1;} } 
  if (Directon1 == 1) { pulseVal1 = pulseVal1 - 6; if (pulseVal1 <= 10) {timerOne = 0;  Directon1 = 2;} }
    if (Directon1 == 2) { if (timerOne < 200) { pulseVal1 = 0; if (masterHue >= 250) {hue1 = hue + 16;}} else Directon1 = 0; }   
                        }     

    if (masterTime < 50 && masterTime > 2) {    
  if (Directon1 == 0) { pulseVal1 = pulseVal1 + 7; if (pulseVal1 >= 248) { Directon1 = 1;} } 
  if (Directon1 == 1) { pulseVal1 = pulseVal1 - 7; if (pulseVal1 <= 10) {timerOne = 0;  Directon1 = 2;} } 
    if (Directon1 == 2) { if (timerOne <100) { pulseVal1 = 0; if (masterHue >= 250) {hue1 = hue + 16;}} else Directon1 = 0; }  
                        }
                                                                                        
    if (masterTime <= 2) {    
  if (Directon1 == 0) { pulseVal1 = pulseVal1 + 8; if (pulseVal1 >= 247) { Directon1 = 1;} } 
  if (Directon1 == 1) { pulseVal1 = pulseVal1 - 8; if (pulseVal1 <= 10) {timerOne = 0;  Directon1 = 2;} }
    if (Directon1 == 2) { if (timerOne <100) { pulseVal1 = 0; if (masterHue >= 250) {hue1 = hue + 16;}} else Directon1 = 0; }   
                        } 
    
    FastLED.show();}



void fadeTrainBasic () {

  if (masterHue < 245) {hue = masterHue; } 
  
  if (index < tailLength + 1) {index = tailLength +1;}

  if (Direction == 0) {
 
//  Serial.println (masterTime); 
 if (masterTime > 850) {   pulseValx ++; fadeOutFactor = 50;}
 if (masterTime < 850 && masterTime > 800) {   pulseValx = pulseValx +2;  fadeOutFactor = 45;}
 if (masterTime < 800 && masterTime > 600) {    pulseValx = pulseValx +3;  fadeOutFactor = 40;}
 if (masterTime < 600 && masterTime > 400) {    pulseValx = pulseValx +4;  fadeOutFactor = 35;}  
 if (masterTime < 400 && masterTime > 200) {    pulseValx = pulseValx +5;  fadeOutFactor = 30;}
 if (masterTime < 200 && masterTime > 50) {     pulseValx = pulseValx +6;  fadeOutFactor = 25;}
 if (masterTime < 50 && masterTime > 12) {       pulseValx = pulseValx +7;  fadeOutFactor = 20;}
 if (masterTime <= 12) {                         pulseValx = pulseValx +8; ; fadeOutFactor = 15;}
  
if (tailLength >= 1){if (pulseValx <= 255 && pulseValx >= 0) { if (masterHue < 245) { leds[index] = CHSV(hue, sat, pulseValx);} if (masterHue > 245) { leds[index] = CHSV(hue, sat, pulseValx);}   } }
if (tailLength >= 2){if (pulseValx - fadeFactor*1 <= 255 && pulseValx - fadeFactor*1 >= 0) {if (masterHue < 245) {  leds[index-1] = CHSV(hue, sat, pulseValx-fadeFactor*1);} if (masterHue > 245) { leds[index-1] = CHSV(hue+25, sat, pulseValx-fadeFactor*1);}} }
if (tailLength >= 3){if (pulseValx - fadeFactor*2 <= 255 && pulseValx - fadeFactor*2 >= 0) {if (masterHue < 245) {  leds[index-2] = CHSV(hue, sat, pulseValx-fadeFactor*2);} if (masterHue > 245) { leds[index-2] = CHSV(hue+64, sat, pulseValx-fadeFactor*2);}} }
if (tailLength >= 4){if (pulseValx - fadeFactor*3 <= 255 && pulseValx - fadeFactor*3 >= 0) {if (masterHue < 245) {  leds[index-3] = CHSV(hue, sat, pulseValx-fadeFactor*3);} if (masterHue > 245) { leds[index-3] = CHSV(hue+96, sat, pulseValx-fadeFactor*3);}} }
if (tailLength >= 5){if (pulseValx - fadeFactor*4 <= 255 && pulseValx - fadeFactor*4 >= 0) {if (masterHue < 245) {  leds[index-4] = CHSV(hue, sat, pulseValx-fadeFactor*4);}if (masterHue > 245) { leds[index-4] = CHSV(hue+128, sat, pulseValx-fadeFactor*4);} } }
if (tailLength >= 6){if (pulseValx - fadeFactor*5 <= 255 && pulseValx - fadeFactor*5 >= 0) {if (masterHue < 245) {  leds[index-5] = CHSV(hue, sat, pulseValx-fadeFactor*5);}if (masterHue > 245) { leds[index-5] = CHSV(hue+160, sat, pulseValx-fadeFactor*5);} } }
if (tailLength >= 7){if (pulseValx - fadeFactor*6 <= 255 && pulseValx - fadeFactor*6 >= 0) {if (masterHue < 245) {  leds[index-6] = CHSV(hue, sat, pulseValx-fadeFactor*6);}if (masterHue > 245) { leds[index-6] = CHSV(hue+180, sat, pulseValx-fadeFactor*6);} } }
if (tailLength >= 8){if (pulseValx - fadeFactor*7 <= 255 && pulseValx - fadeFactor*7 >= 0) {if (masterHue < 245) {  leds[index-7] = CHSV(hue, sat, pulseValx-fadeFactor*7);}if (masterHue > 245) { leds[index-7] = CHSV(hue+226, sat, pulseValx-fadeFactor*7);} } }
if (tailLength >= 9){if (pulseValx - fadeFactor*8 <= 255 && pulseValx - fadeFactor*8 >= 0) {if (masterHue < 245) {  leds[index-8] = CHSV(hue, sat, pulseValx-fadeFactor*8);}if (masterHue > 245) { leds[index-8] = CHSV(hue, sat, pulseValx-fadeFactor*8);} } }
if (tailLength >= 10){if (pulseValx - fadeFactor*9 <= 255 && pulseValx - fadeFactor*9 >= 0) {if (masterHue < 245) {  leds[index-9] = CHSV(hue, sat, pulseValx-fadeFactor*9);}if (masterHue > 245) { leds[index-9] = CHSV(hue, sat, pulseValx-fadeFactor*9);} } }
if (tailLength >= 11){if (pulseValx - fadeFactor*10 <= 255 && pulseValx - fadeFactor*10 >= 0) {if (masterHue < 245) {  leds[index-10] = CHSV(hue, sat, pulseValx-fadeFactor*10);}if (masterHue > 245) { leds[index-10] = CHSV(hue, sat, pulseValx-fadeFactor*10);} } }


 if (pulseValx - fadeFactor*tailLength +100 >= 255) {Direction = 1;  } }



 if (Direction == 1) {  pulseValx --;

if (tailLength >= 1){ if (pulseValx <= 255 && pulseValx >= 0) {leds[index].nscale8(250); } }
if (tailLength >= 2){ if (pulseValx + fadeOutFactor*1 <= 255 && pulseValx + fadeOutFactor*1 >= 0) {  leds[index-1].nscale8(250); } }
if (tailLength >= 3){ if (pulseValx + fadeOutFactor*2 <= 255 && pulseValx + fadeOutFactor*2 >= 0) { leds[index-2].nscale8(250); } }
if (tailLength >= 4){ if (pulseValx + fadeOutFactor*3 <= 255 && pulseValx + fadeOutFactor*3 >= 0) {  leds[index-3].nscale8(250); } }
if (tailLength >= 5){ if (pulseValx + fadeOutFactor*4 <= 255 && pulseValx + fadeOutFactor*4 >= 0) {  leds[index-4].nscale8(250); } }
if (tailLength >= 6){ if (pulseValx + fadeOutFactor*5 <= 255 && pulseValx + fadeOutFactor*5 >= 0) {  leds[index-5].nscale8(250); } }
if (tailLength >= 7){ if (pulseValx + fadeOutFactor*6 <= 255 && pulseValx + fadeOutFactor*6 >= 0) {  leds[index-6].nscale8(250); } }
if (tailLength >= 8){ if (pulseValx + fadeOutFactor*7 <= 255 && pulseValx + fadeOutFactor*7 >= 0) {  leds[index-7].nscale8(250); } }
if (tailLength >= 9){ if (pulseValx + fadeOutFactor*8 <= 255 && pulseValx + fadeOutFactor*8 >= 0) {  leds[index-8].nscale8(250); } }
if (tailLength >= 10){ if (pulseValx + fadeOutFactor*9 <= 255 && pulseValx + fadeOutFactor*9 >= 0) {  leds[index-9].nscale8(250); } }
if (tailLength >= 11){ if (pulseValx + fadeOutFactor*10 <= 255 && pulseValx + fadeOutFactor*10 >= 0) {  leds[index-10].nscale8(250); } }


 if (pulseValx + fadeOutFactor*tailLength - 150 <= 0) {Direction = 0; tailLength = random (5, 12);  index = random (tailLength,NUM_LEDS);  for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(220); } Serial.println (DirectionAA);}  }  
  
  
////////////////////////////////////////////////////////////////////////////// 2nd sent of lights

  if (indexAA < tailLengthAA + 1) {indexAA = tailLengthAA +1;}

  if (DirectionAA == 0) {

  if (masterTime > 850) {  pulseValxAA ++;}
 if (masterTime < 850 && masterTime > 800) {    pulseValxAA = pulseValxAA +2; }
 if (masterTime < 800 && masterTime > 600) {    pulseValxAA = pulseValxAA +3; }
 if (masterTime < 600 && masterTime > 400) {    pulseValxAA = pulseValxAA +4; }  
 if (masterTime < 400 && masterTime > 200) {     pulseValxAA = pulseValxAA +5; }
 if (masterTime < 200 && masterTime > 50) {      pulseValxAA = pulseValxAA +6; }
 if (masterTime < 50 && masterTime > 12) {       pulseValxAA = pulseValxAA +7; }
 if (masterTime <= 12) {                          pulseValxAA = pulseValxAA +8; }

  
if (tailLengthAA >= 1){if (pulseValxAA <= 255 && pulseValxAA >= 0) { if (masterHue < 245) { leds[indexAA] = CHSV(hue, sat, pulseValxAA);} if (masterHue > 245) { leds[indexAA] = CHSV(hue, sat, pulseValxAA);}   } }
if (tailLengthAA >= 2){if (pulseValxAA - fadeFactor*1 <= 255 && pulseValxAA - fadeFactor*1 >= 0) {if (masterHue < 245) {  leds[indexAA-1] = CHSV(hue, sat, pulseValxAA-fadeFactor*1);} if (masterHue > 245) { leds[indexAA-1] = CHSV(hue+25, sat, pulseValxAA-fadeFactor*1);}} }
if (tailLengthAA >= 3){if (pulseValxAA - fadeFactor*2 <= 255 && pulseValxAA - fadeFactor*2 >= 0) {if (masterHue < 245) {  leds[indexAA-2] = CHSV(hue, sat, pulseValxAA-fadeFactor*2);} if (masterHue > 245) { leds[indexAA-2] = CHSV(hue+64, sat, pulseValxAA-fadeFactor*2);}} }
if (tailLengthAA >= 4){if (pulseValxAA - fadeFactor*3 <= 255 && pulseValxAA - fadeFactor*3 >= 0) {if (masterHue < 245) {  leds[indexAA-3] = CHSV(hue, sat, pulseValxAA-fadeFactor*3);} if (masterHue > 245) { leds[indexAA-3] = CHSV(hue+96, sat, pulseValxAA-fadeFactor*3);}} }
if (tailLengthAA >= 5){if (pulseValxAA - fadeFactor*4 <= 255 && pulseValxAA - fadeFactor*4 >= 0) {if (masterHue < 245) {  leds[indexAA-4] = CHSV(hue, sat, pulseValxAA-fadeFactor*4);}if (masterHue > 245) { leds[indexAA-4] = CHSV(hue+128, sat, pulseValxAA-fadeFactor*4);} } }
if (tailLengthAA >= 6){if (pulseValxAA - fadeFactor*5 <= 255 && pulseValxAA - fadeFactor*5 >= 0) {if (masterHue < 245) {  leds[indexAA-5] = CHSV(hue, sat, pulseValxAA-fadeFactor*5);}if (masterHue > 245) { leds[indexAA-5] = CHSV(hue+160, sat, pulseValxAA-fadeFactor*5);} } }
if (tailLengthAA >= 7){if (pulseValxAA - fadeFactor*6 <= 255 && pulseValxAA - fadeFactor*6 >= 0) {if (masterHue < 245) {  leds[indexAA-6] = CHSV(hue, sat, pulseValxAA-fadeFactor*6);}if (masterHue > 245) { leds[indexAA-6] = CHSV(hue+180, sat, pulseValxAA-fadeFactor*6);} } }
if (tailLengthAA >= 8){if (pulseValxAA - fadeFactor*7 <= 255 && pulseValxAA - fadeFactor*7 >= 0) {if (masterHue < 245) {  leds[indexAA-7] = CHSV(hue, sat, pulseValxAA-fadeFactor*7);}if (masterHue > 245) { leds[indexAA-7] = CHSV(hue+226, sat, pulseValxAA-fadeFactor*7);} } }
if (tailLengthAA >= 9){if (pulseValxAA - fadeFactor*8 <= 255 && pulseValxAA - fadeFactor*8 >= 0) {if (masterHue < 245) {  leds[indexAA-8] = CHSV(hue, sat, pulseValxAA-fadeFactor*8);}if (masterHue > 245) { leds[indexAA-8] = CHSV(hue, sat, pulseValxAA-fadeFactor*8);} } }
if (tailLengthAA >= 10){if (pulseValxAA - fadeFactor*9 <= 255 && pulseValxAA - fadeFactor*9 >= 0) {if (masterHue < 245) {  leds[indexAA-9] = CHSV(hue, sat, pulseValxAA-fadeFactor*9);}if (masterHue > 245) { leds[indexAA-9] = CHSV(hue, sat, pulseValxAA-fadeFactor*9);} } }
if (tailLengthAA >= 11){if (pulseValxAA - fadeFactor*10 <= 255 && pulseValxAA - fadeFactor*10 >= 0) {if (masterHue < 245) {  leds[indexAA-10] = CHSV(hue, sat, pulseValxAA-fadeFactor*10);}if (masterHue > 245) { leds[indexAA-10] = CHSV(hue, sat, pulseValxAA-fadeFactor*10);} } }


 if (pulseValxAA - fadeFactor*tailLengthAA +100 >= 255) {DirectionAA = 1;  } }



 if (DirectionAA == 1) {  pulseValxAA --;

if (tailLengthAA >= 1){ if (pulseValxAA <= 255 && pulseValxAA >= 0) {leds[indexAA].nscale8(250); } }
if (tailLengthAA >= 2){ if (pulseValxAA + fadeOutFactor*1 <= 255 && pulseValxAA + fadeOutFactor*1 >= 0) {  leds[indexAA-1].nscale8(250); } }
if (tailLengthAA >= 3){ if (pulseValxAA + fadeOutFactor*2 <= 255 && pulseValxAA + fadeOutFactor*2 >= 0) { leds[indexAA-2].nscale8(250); } }
if (tailLengthAA >= 4){ if (pulseValxAA + fadeOutFactor*3 <= 255 && pulseValxAA + fadeOutFactor*3 >= 0) {  leds[indexAA-3].nscale8(250); } }
if (tailLengthAA >= 5){ if (pulseValxAA + fadeOutFactor*4 <= 255 && pulseValxAA + fadeOutFactor*4 >= 0) {  leds[indexAA-4].nscale8(250); } }
if (tailLengthAA >= 6){ if (pulseValxAA + fadeOutFactor*5 <= 255 && pulseValxAA + fadeOutFactor*5 >= 0) {  leds[indexAA-5].nscale8(250); } }
if (tailLengthAA >= 7){ if (pulseValxAA + fadeOutFactor*6 <= 255 && pulseValxAA + fadeOutFactor*6 >= 0) {  leds[indexAA-6].nscale8(250); } }
if (tailLengthAA >= 8){ if (pulseValxAA + fadeOutFactor*7 <= 255 && pulseValxAA + fadeOutFactor*7 >= 0) {  leds[indexAA-7].nscale8(250); } }
if (tailLengthAA >= 9){ if (pulseValxAA + fadeOutFactor*8 <= 255 && pulseValxAA + fadeOutFactor*8 >= 0) {  leds[indexAA-8].nscale8(250); } }
if (tailLengthAA >= 10){ if (pulseValxAA + fadeOutFactor*9 <= 255 && pulseValxAA + fadeOutFactor*9 >= 0) {  leds[indexAA-9].nscale8(250); } }
if (tailLengthAA >= 11){ if (pulseValxAA + fadeOutFactor*10 <= 255 && pulseValxAA + fadeOutFactor*10 >= 0) {  leds[indexAA-10].nscale8(250); } }


 if (pulseValxAA + fadeOutFactor*tailLengthAA - 150 <= 0) {DirectionAA = 0; tailLengthAA = random (5, 12);  indexAA = random (tailLengthAA,NUM_LEDS);   }  }  
     



  
////////////////////////////////////////////////////////////////////////////// 3rd sent of lights

  if (indexBB < tailLengthBB + 1) {indexBB = tailLengthBB +1;}

  if (DirectionBB == 0) {

  if (masterTime > 850) {  pulseValxBB ++;}
 if (masterTime < 850 && masterTime > 800) {    pulseValxBB = pulseValxBB +2; }
 if (masterTime < 800 && masterTime > 600) {    pulseValxBB = pulseValxBB +3; }
 if (masterTime < 600 && masterTime > 400) {    pulseValxBB = pulseValxBB +4; }  
 if (masterTime < 400 && masterTime > 200) {     pulseValxBB = pulseValxBB +5; }
 if (masterTime < 200 && masterTime > 50) {      pulseValxBB = pulseValxBB +6; }
 if (masterTime < 50 && masterTime > 12) {       pulseValxBB = pulseValxBB +7; }
 if (masterTime <= 12) {                          pulseValxBB = pulseValxBB +8; }

  
if (tailLengthBB >= 1){if (pulseValxBB <= 255 && pulseValxBB >= 0) { if (masterHue < 245) { leds[indexBB] = CHSV(hue, sat, pulseValxBB);} if (masterHue > 245) { leds[indexBB] = CHSV(hue, sat, pulseValxBB);}   } }
if (tailLengthBB >= 2){if (pulseValxBB - fadeFactor*1 <= 255 && pulseValxBB - fadeFactor*1 >= 0) {if (masterHue < 245) {  leds[indexBB-1] = CHSV(hue, sat, pulseValxBB-fadeFactor*1);} if (masterHue > 245) { leds[indexBB-1] = CHSV(hue+25, sat, pulseValxBB-fadeFactor*1);}} }
if (tailLengthBB >= 3){if (pulseValxBB - fadeFactor*2 <= 255 && pulseValxBB - fadeFactor*2 >= 0) {if (masterHue < 245) {  leds[indexBB-2] = CHSV(hue, sat, pulseValxBB-fadeFactor*2);} if (masterHue > 245) { leds[indexBB-2] = CHSV(hue+64, sat, pulseValxBB-fadeFactor*2);}} }
if (tailLengthBB >= 4){if (pulseValxBB - fadeFactor*3 <= 255 && pulseValxBB - fadeFactor*3 >= 0) {if (masterHue < 245) {  leds[indexBB-3] = CHSV(hue, sat, pulseValxBB-fadeFactor*3);} if (masterHue > 245) { leds[indexBB-3] = CHSV(hue+96, sat, pulseValxBB-fadeFactor*3);}} }
if (tailLengthBB >= 5){if (pulseValxBB - fadeFactor*4 <= 255 && pulseValxBB - fadeFactor*4 >= 0) {if (masterHue < 245) {  leds[indexBB-4] = CHSV(hue, sat, pulseValxBB-fadeFactor*4);}if (masterHue > 245) { leds[indexBB-4] = CHSV(hue+128, sat, pulseValxBB-fadeFactor*4);} } }
if (tailLengthBB >= 6){if (pulseValxBB - fadeFactor*5 <= 255 && pulseValxBB - fadeFactor*5 >= 0) {if (masterHue < 245) {  leds[indexBB-5] = CHSV(hue, sat, pulseValxBB-fadeFactor*5);}if (masterHue > 245) { leds[indexBB-5] = CHSV(hue+160, sat, pulseValxBB-fadeFactor*5);} } }
if (tailLengthBB >= 7){if (pulseValxBB - fadeFactor*6 <= 255 && pulseValxBB - fadeFactor*6 >= 0) {if (masterHue < 245) {  leds[indexBB-6] = CHSV(hue, sat, pulseValxBB-fadeFactor*6);}if (masterHue > 245) { leds[indexBB-6] = CHSV(hue+180, sat, pulseValxBB-fadeFactor*6);} } }
if (tailLengthBB >= 8){if (pulseValxBB - fadeFactor*7 <= 255 && pulseValxBB - fadeFactor*7 >= 0) {if (masterHue < 245) {  leds[indexBB-7] = CHSV(hue, sat, pulseValxBB-fadeFactor*7);}if (masterHue > 245) { leds[indexBB-7] = CHSV(hue+226, sat, pulseValxBB-fadeFactor*7);} } }
if (tailLengthBB >= 9){if (pulseValxBB - fadeFactor*8 <= 255 && pulseValxBB - fadeFactor*8 >= 0) {if (masterHue < 245) {  leds[indexBB-8] = CHSV(hue, sat, pulseValxBB-fadeFactor*8);}if (masterHue > 245) { leds[indexBB-8] = CHSV(hue, sat, pulseValxBB-fadeFactor*8);} } }
if (tailLengthBB >= 10){if (pulseValxBB - fadeFactor*9 <= 255 && pulseValxBB - fadeFactor*9 >= 0) {if (masterHue < 245) {  leds[indexBB-9] = CHSV(hue, sat, pulseValxBB-fadeFactor*9);}if (masterHue > 245) { leds[indexBB-9] = CHSV(hue, sat, pulseValxBB-fadeFactor*9);} } }
if (tailLengthBB >= 11){if (pulseValxBB - fadeFactor*10 <= 255 && pulseValxBB - fadeFactor*10 >= 0) {if (masterHue < 245) {  leds[indexBB-10] = CHSV(hue, sat, pulseValxBB-fadeFactor*10);}if (masterHue > 245) { leds[indexBB-10] = CHSV(hue, sat, pulseValxBB-fadeFactor*10);} } }


 if (pulseValxBB - fadeFactor*tailLengthBB +100 >= 255) {DirectionBB = 1;  } }



 if (DirectionBB == 1) {  pulseValxBB --;

if (tailLengthBB >= 1){ if (pulseValxBB <= 255 && pulseValxBB >= 0) {leds[indexBB].nscale8(250); } }
if (tailLengthBB >= 2){ if (pulseValxBB + fadeOutFactor*1 <= 255 && pulseValxBB + fadeOutFactor*1 >= 0) {  leds[indexBB-1].nscale8(250); } }
if (tailLengthBB >= 3){ if (pulseValxBB + fadeOutFactor*2 <= 255 && pulseValxBB + fadeOutFactor*2 >= 0) { leds[indexBB-2].nscale8(250); } }
if (tailLengthBB >= 4){ if (pulseValxBB + fadeOutFactor*3 <= 255 && pulseValxBB + fadeOutFactor*3 >= 0) {  leds[indexBB-3].nscale8(250); } }
if (tailLengthBB >= 5){ if (pulseValxBB + fadeOutFactor*4 <= 255 && pulseValxBB + fadeOutFactor*4 >= 0) {  leds[indexBB-4].nscale8(250); } }
if (tailLengthBB >= 6){ if (pulseValxBB + fadeOutFactor*5 <= 255 && pulseValxBB + fadeOutFactor*5 >= 0) {  leds[indexBB-5].nscale8(250); } }
if (tailLengthBB >= 7){ if (pulseValxBB + fadeOutFactor*6 <= 255 && pulseValxBB + fadeOutFactor*6 >= 0) {  leds[indexBB-6].nscale8(250); } }
if (tailLengthBB >= 8){ if (pulseValxBB + fadeOutFactor*7 <= 255 && pulseValxBB + fadeOutFactor*7 >= 0) {  leds[indexBB-7].nscale8(250); } }
if (tailLengthBB >= 9){ if (pulseValxBB + fadeOutFactor*8 <= 255 && pulseValxBB + fadeOutFactor*8 >= 0) {  leds[indexBB-8].nscale8(250); } }
if (tailLengthBB >= 10){ if (pulseValxBB + fadeOutFactor*9 <= 255 && pulseValxBB + fadeOutFactor*9 >= 0) {  leds[indexBB-9].nscale8(250); } }
if (tailLengthBB >= 11){ if (pulseValxBB + fadeOutFactor*10 <= 255 && pulseValxBB + fadeOutFactor*10 >= 0) {  leds[indexBB-10].nscale8(250); } }


 if (pulseValxBB + fadeOutFactor*tailLengthBB - 150 <= 0) {DirectionBB = 0; tailLengthBB = random (5, 12);  indexBB = random (tailLengthBB,NUM_LEDS);   }  }  
     


////////////////////////////////////////////////////////////////////////////// 4th sent of lights

  if (indexCC < tailLengthCC + 1) {indexCC = tailLengthCC +1;}

  if (DirectionCC == 0) {

  if (masterTime > 850) {  pulseValxCC ++;}
 if (masterTime < 850 && masterTime > 800) {    pulseValxCC = pulseValxCC +2; }
 if (masterTime < 800 && masterTime > 600) {    pulseValxCC = pulseValxCC +3; }
 if (masterTime < 600 && masterTime > 400) {    pulseValxCC = pulseValxCC +4; }  
 if (masterTime < 400 && masterTime > 200) {     pulseValxCC = pulseValxCC +5; }
 if (masterTime < 200 && masterTime > 50) {      pulseValxCC = pulseValxCC +6; }
 if (masterTime < 50 && masterTime > 12) {       pulseValxCC = pulseValxCC +7; }
 if (masterTime <= 12) {                          pulseValxCC = pulseValxCC +8; }

  
if (tailLengthCC >= 1){if (pulseValxCC <= 255 && pulseValxCC >= 0) { if (masterHue < 245) { leds[indexCC] = CHSV(hue, sat, pulseValxCC);} if (masterHue > 245) { leds[indexCC] = CHSV(hue, sat, pulseValxCC);}   } }
if (tailLengthCC >= 2){if (pulseValxCC - fadeFactor*1 <= 255 && pulseValxCC - fadeFactor*1 >= 0) {if (masterHue < 245) {  leds[indexCC-1] = CHSV(hue, sat, pulseValxCC-fadeFactor*1);} if (masterHue > 245) { leds[indexCC-1] = CHSV(hue+25, sat, pulseValxCC-fadeFactor*1);}} }
if (tailLengthCC >= 3){if (pulseValxCC - fadeFactor*2 <= 255 && pulseValxCC - fadeFactor*2 >= 0) {if (masterHue < 245) {  leds[indexCC-2] = CHSV(hue, sat, pulseValxCC-fadeFactor*2);} if (masterHue > 245) { leds[indexCC-2] = CHSV(hue+64, sat, pulseValxCC-fadeFactor*2);}} }
if (tailLengthCC >= 4){if (pulseValxCC - fadeFactor*3 <= 255 && pulseValxCC - fadeFactor*3 >= 0) {if (masterHue < 245) {  leds[indexCC-3] = CHSV(hue, sat, pulseValxCC-fadeFactor*3);} if (masterHue > 245) { leds[indexCC-3] = CHSV(hue+96, sat, pulseValxCC-fadeFactor*3);}} }
if (tailLengthCC >= 5){if (pulseValxCC - fadeFactor*4 <= 255 && pulseValxCC - fadeFactor*4 >= 0) {if (masterHue < 245) {  leds[indexCC-4] = CHSV(hue, sat, pulseValxCC-fadeFactor*4);}if (masterHue > 245) { leds[indexCC-4] = CHSV(hue+128, sat, pulseValxCC-fadeFactor*4);} } }
if (tailLengthCC >= 6){if (pulseValxCC - fadeFactor*5 <= 255 && pulseValxCC - fadeFactor*5 >= 0) {if (masterHue < 245) {  leds[indexCC-5] = CHSV(hue, sat, pulseValxCC-fadeFactor*5);}if (masterHue > 245) { leds[indexCC-5] = CHSV(hue+160, sat, pulseValxCC-fadeFactor*5);} } }
if (tailLengthCC >= 7){if (pulseValxCC - fadeFactor*6 <= 255 && pulseValxCC - fadeFactor*6 >= 0) {if (masterHue < 245) {  leds[indexCC-6] = CHSV(hue, sat, pulseValxCC-fadeFactor*6);}if (masterHue > 245) { leds[indexCC-6] = CHSV(hue+180, sat, pulseValxCC-fadeFactor*6);} } }
if (tailLengthCC >= 8){if (pulseValxCC - fadeFactor*7 <= 255 && pulseValxCC - fadeFactor*7 >= 0) {if (masterHue < 245) {  leds[indexCC-7] = CHSV(hue, sat, pulseValxCC-fadeFactor*7);}if (masterHue > 245) { leds[indexCC-7] = CHSV(hue+226, sat, pulseValxCC-fadeFactor*7);} } }
if (tailLengthCC >= 9){if (pulseValxCC - fadeFactor*8 <= 255 && pulseValxCC - fadeFactor*8 >= 0) {if (masterHue < 245) {  leds[indexCC-8] = CHSV(hue, sat, pulseValxCC-fadeFactor*8);}if (masterHue > 245) { leds[indexCC-8] = CHSV(hue, sat, pulseValxCC-fadeFactor*8);} } }
if (tailLengthCC >= 10){if (pulseValxCC - fadeFactor*9 <= 255 && pulseValxCC - fadeFactor*9 >= 0) {if (masterHue < 245) {  leds[indexCC-9] = CHSV(hue, sat, pulseValxCC-fadeFactor*9);}if (masterHue > 245) { leds[indexCC-9] = CHSV(hue, sat, pulseValxCC-fadeFactor*9);} } }
if (tailLengthCC >= 11){if (pulseValxCC - fadeFactor*10 <= 255 && pulseValxCC - fadeFactor*10 >= 0) {if (masterHue < 245) {  leds[indexCC-10] = CHSV(hue, sat, pulseValxCC-fadeFactor*10);}if (masterHue > 245) { leds[indexCC-10] = CHSV(hue, sat, pulseValxCC-fadeFactor*10);} } }


 if (pulseValxCC - fadeFactor*tailLengthCC +100 >= 255) {DirectionCC = 1;  } }



 if (DirectionCC == 1) {  pulseValxCC --;

if (tailLengthCC >= 1){ if (pulseValxCC <= 255 && pulseValxCC >= 0) {leds[indexCC].nscale8(250); } }
if (tailLengthCC >= 2){ if (pulseValxCC + fadeOutFactor*1 <= 255 && pulseValxCC + fadeOutFactor*1 >= 0) {  leds[indexCC-1].nscale8(250); } }
if (tailLengthCC >= 3){ if (pulseValxCC + fadeOutFactor*2 <= 255 && pulseValxCC + fadeOutFactor*2 >= 0) { leds[indexCC-2].nscale8(250); } }
if (tailLengthCC >= 4){ if (pulseValxCC + fadeOutFactor*3 <= 255 && pulseValxCC + fadeOutFactor*3 >= 0) {  leds[indexCC-3].nscale8(250); } }
if (tailLengthCC >= 5){ if (pulseValxCC + fadeOutFactor*4 <= 255 && pulseValxCC + fadeOutFactor*4 >= 0) {  leds[indexCC-4].nscale8(250); } }
if (tailLengthCC >= 6){ if (pulseValxCC + fadeOutFactor*5 <= 255 && pulseValxCC + fadeOutFactor*5 >= 0) {  leds[indexCC-5].nscale8(250); } }
if (tailLengthCC >= 7){ if (pulseValxCC + fadeOutFactor*6 <= 255 && pulseValxCC + fadeOutFactor*6 >= 0) {  leds[indexCC-6].nscale8(250); } }
if (tailLengthCC >= 8){ if (pulseValxCC + fadeOutFactor*7 <= 255 && pulseValxCC + fadeOutFactor*7 >= 0) {  leds[indexCC-7].nscale8(250); } }
if (tailLengthCC >= 9){ if (pulseValxCC + fadeOutFactor*8 <= 255 && pulseValxCC + fadeOutFactor*8 >= 0) {  leds[indexCC-8].nscale8(250); } }
if (tailLengthCC >= 10){ if (pulseValxCC + fadeOutFactor*9 <= 255 && pulseValxCC + fadeOutFactor*9 >= 0) {  leds[indexCC-9].nscale8(250); } }
if (tailLengthCC >= 11){ if (pulseValxCC + fadeOutFactor*10 <= 255 && pulseValxCC + fadeOutFactor*10 >= 0) {  leds[indexCC-10].nscale8(250); } }


 if (pulseValxCC + fadeOutFactor*tailLengthCC - 150 <= 0) {DirectionCC = 0; tailLengthCC = random (5, 12);  indexCC = random (tailLengthCC,NUM_LEDS);   }  }  
     



 //for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(220); } 



  
  
  FastLED.show();}




















//redundant  
/*
 if (Direction == 1) {  pulseValx --;

if (pulseValx <= 255 && pulseValx >= 0) { leds[index] = CHSV(hue, sat, pulseValx); }
if (pulseValx + 25 <= 255 && pulseValx + 25 >= 0) {  leds[index-1] = CHSV(hue, sat, pulseValx+25); }
if (pulseValx + 50 <= 255 && pulseValx + 50 >= 0) {  leds[index-2] = CHSV(hue, sat, pulseValx+50); }
if (pulseValx + 75 <= 255 && pulseValx + 75 >= 0) {  leds[index-3] = CHSV(hue, sat, pulseValx+75); }
if (pulseValx + 100 <= 255 && pulseValx + 100 >= 0) {  leds[index-4] = CHSV(hue, sat, pulseValx+100); }
if (pulseValx + 125 <= 255 && pulseValx + 125 >= 0) {  leds[index-5] = CHSV(hue, sat, pulseValx+125); }
if (pulseValx + 150 <= 255 && pulseValx + 150 >= 0) {  leds[index-6] = CHSV(hue, sat, pulseValx+150); }

 if (pulseValx + 150 <= 0) {Direction = 0;  index = random (6,NUM_LEDS);  }  }
  
 */
    
