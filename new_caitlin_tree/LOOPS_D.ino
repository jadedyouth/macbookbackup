void darkenThrough () {
hue = masterHue;  //////////UPDATE SCREEN SO IT DOESNT SAY RAINBOW. NO RAINBOW IN THIS SKETCH

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat, val); } 


 if (masterTime > 850) {                         fadeFactor = 150;  }
 if (masterTime < 850 && masterTime > 800) {   fadeFactor = 125; }
 if (masterTime < 800 && masterTime > 600) {    fadeFactor = 100;  }
 if (masterTime < 600 && masterTime > 400) {    fadeFactor = 75; }  
 if (masterTime < 400 && masterTime > 200) {   fadeFactor = 50; }
 if (masterTime < 200 && masterTime > 50) {     fadeFactor = 25;  }
 if (masterTime < 50 && masterTime > 12) {        fadeFactor = 15;  }
 if (masterTime <= 12) {                     fadeFactor = 0;      }
 

 if (timerZero > fadeFactor) { index++; timerZero = 0;}  if (index >= NUM_LEDS+7) {index = 0;}


  
 if (index >=0 && index <= NUM_LEDS) {  leds[index] = CHSV(hue, sat, val-100); }
 if (index +1 >=0 && index +1 < NUM_LEDS) {  leds[index+1] = CHSV(hue, sat, val-170); }
 if (index +2 >=0 && index +2 < NUM_LEDS) {  leds[index+2] = CHSV(hue, sat, val-170); }
 if (index +3 >=0 && index +3 < NUM_LEDS) { leds[index+3] = CHSV(hue, sat, val-170); }

 if (index +4 >=0 && index +4 < NUM_LEDS) {  leds[index+4] = CHSV(hue, sat, val-170); }
 if (index +5 >=0 && index +5 < NUM_LEDS) {  leds[index+5] = CHSV(hue, sat, val-170); }
 if (index +6 >=0 && index +6 < NUM_LEDS) {  leds[index+6] = CHSV(hue, sat, val-170); }
 if (index +7 >=0 && index +7 < NUM_LEDS) { leds[index+7] = CHSV(hue, sat, val-100); }
  
    FastLED.show(); }



void darkenThroughTwo () {
hue = masterHue;   //////////UPDATE SCREEN SO IT DOESNT SAY RAINBOW. NO RAINBOW IN THIS SKETCH

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat, val); } 


 if (masterTime > 850) {                         fadeFactor = 150;  }
 if (masterTime < 850 && masterTime > 800) {   fadeFactor = 125; }
 if (masterTime < 800 && masterTime > 600) {    fadeFactor = 100;  }
 if (masterTime < 600 && masterTime > 400) {    fadeFactor = 75; }  
 if (masterTime < 400 && masterTime > 200) {   fadeFactor = 50; }
 if (masterTime < 200 && masterTime > 50) {     fadeFactor = 25;  }
 if (masterTime < 50 && masterTime > 12) {        fadeFactor = 15;  }
 if (masterTime <= 12) {                     fadeFactor = 0;      }
 

 if (timerZero > fadeFactor) { index++; indexBB++; timerZero = 0;}   
  //if (timerOne > fadeFactor) {  timerOne = 0;}   
 
 if (index >= NUM_LEDS+7) {index = 0;} 
 if (indexBB >= NUM_LEDS+7) {indexBB = 0;}



 if (index >=0 && index < NUM_LEDS) {  leds[index] = CHSV(hue, sat, val-100); }
 if (index +1 >=0 && index +1 < NUM_LEDS) {  leds[index+1] = CHSV(hue, sat, val-170); }
 if (index +2 >=0 && index +2 < NUM_LEDS) {  leds[index+2] = CHSV(hue, sat, val-170); }
 if (index +3 >=0 && index +3 < NUM_LEDS) { leds[index+3] = CHSV(hue, sat, val-170); }

 if (index +4 >=0 && index +4 < NUM_LEDS) {  leds[index+4] = CHSV(hue, sat, val-170); }
 if (index +5 >=0 && index +5 < NUM_LEDS) {  leds[index+5] = CHSV(hue, sat, val-170); }
 if (index +6 >=0 && index +6 < NUM_LEDS) {  leds[index+6] = CHSV(hue, sat, val-170); }
 if (index +7 >=0 && index +7 < NUM_LEDS) { leds[index+7] = CHSV(hue, sat, val-100); }

 
 if (indexBB >=0 && indexBB < NUM_LEDS) {  leds[indexBB] = CHSV(hue, sat, val-100); }
 if (indexBB +1 >=0 && indexBB +1 < NUM_LEDS) {  leds[indexBB+1] = CHSV(hue, sat, val-170); }
 if (indexBB +2 >=0 && indexBB +2 < NUM_LEDS) {  leds[indexBB+2] = CHSV(hue, sat, val-170); }
 if (indexBB +3 >=0 && indexBB +3 < NUM_LEDS) { leds[indexBB+3] = CHSV(hue, sat, val-170); }

 if (indexBB +4 >=0 && indexBB +4 < NUM_LEDS) {  leds[indexBB+4] = CHSV(hue, sat, val-170); }
 if (indexBB +5 >=0 && indexBB +5 < NUM_LEDS) {  leds[indexBB+5] = CHSV(hue, sat, val-170); }
 if (indexBB +6 >=0 && indexBB +6 < NUM_LEDS) {  leds[indexBB+6] = CHSV(hue, sat, val-170); }
 if (indexBB +7 >=0 && indexBB +7 < NUM_LEDS) { leds[indexBB+7] = CHSV(hue, sat, val-100); }



  
    FastLED.show(); }    


void darkenThroughFour () {
hue = masterHue;   //////////UPDATE SCREEN SO IT DOESNT SAY RAINBOW. NO RAINBOW IN THIS SKETCH

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat, val); } 


 if (masterTime > 850) {                         fadeFactor = 150;  }
 if (masterTime < 850 && masterTime > 800) {   fadeFactor = 125; }
 if (masterTime < 800 && masterTime > 600) {    fadeFactor = 100;  }
 if (masterTime < 600 && masterTime > 400) {    fadeFactor = 75; }  
 if (masterTime < 400 && masterTime > 200) {   fadeFactor = 50; }
 if (masterTime < 200 && masterTime > 50) {     fadeFactor = 25;  }
 if (masterTime < 50 && masterTime > 12) {        fadeFactor = 15;  }
 if (masterTime <= 12) {                     fadeFactor = 0;      }
 

 if (timerZero > fadeFactor) { index++; indexAA++; indexBB++; indexCC++; timerZero = 0;}   
  //if (timerOne > fadeFactor) {  timerOne = 0;}   
 
 if (index >= NUM_LEDS+7) {index = 0;} 
 if (indexAA >= NUM_LEDS+7) {indexAA = 0;}
 if (indexBB >= NUM_LEDS+7) {indexBB = 0;}
 if (indexCC >= NUM_LEDS+7) {indexCC = 0;}



 if (index >=0 && index < NUM_LEDS) {  leds[index] = CHSV(hue, sat, val-100); }
 if (index +1 >=0 && index +1 < NUM_LEDS) {  leds[index+1] = CHSV(hue, sat, val-170); }
 if (index +2 >=0 && index +2 < NUM_LEDS) {  leds[index+2] = CHSV(hue, sat, val-170); }
 if (index +3 >=0 && index +3 < NUM_LEDS) { leds[index+3] = CHSV(hue, sat, val-170); }

 if (index +4 >=0 && index +4 < NUM_LEDS) {  leds[index+4] = CHSV(hue, sat, val-170); }
 if (index +5 >=0 && index +5 < NUM_LEDS) {  leds[index+5] = CHSV(hue, sat, val-170); }
 if (index +6 >=0 && index +6 < NUM_LEDS) {  leds[index+6] = CHSV(hue, sat, val-170); }
 if (index +7 >=0 && index +7 < NUM_LEDS) { leds[index+7] = CHSV(hue, sat, val-100); }

 if (indexAA >=0 && indexAA < NUM_LEDS) {  leds[indexAA] = CHSV(hue, sat, val-100); }
 if (indexAA +1 >=0 && indexAA +1 < NUM_LEDS) {  leds[indexAA+1] = CHSV(hue, sat, val-170); }
 if (indexAA +2 >=0 && indexAA +2 < NUM_LEDS) {  leds[indexAA+2] = CHSV(hue, sat, val-170); }
 if (indexAA +3 >=0 && indexAA +3 < NUM_LEDS) { leds[indexAA+3] = CHSV(hue, sat, val-170); }

 if (indexAA +4 >=0 && indexAA +4 < NUM_LEDS) {  leds[indexAA+4] = CHSV(hue, sat, val-170); }
 if (indexAA +5 >=0 && indexAA +5 < NUM_LEDS) {  leds[indexAA+5] = CHSV(hue, sat, val-170); }
 if (indexAA +6 >=0 && indexAA +6 < NUM_LEDS) {  leds[indexAA+6] = CHSV(hue, sat, val-170); }
 if (indexAA +7 >=0 && indexAA +7 < NUM_LEDS) { leds[indexAA+7] = CHSV(hue, sat, val-100); }
 
 if (indexBB >=0 && indexBB < NUM_LEDS) {  leds[indexBB] = CHSV(hue, sat, val-100); }
 if (indexBB +1 >=0 && indexBB +1 < NUM_LEDS) {  leds[indexBB+1] = CHSV(hue, sat, val-170); }
 if (indexBB +2 >=0 && indexBB +2 < NUM_LEDS) {  leds[indexBB+2] = CHSV(hue, sat, val-170); }
 if (indexBB +3 >=0 && indexBB +3 < NUM_LEDS) { leds[indexBB+3] = CHSV(hue, sat, val-170); }

 if (indexBB +4 >=0 && indexBB +4 < NUM_LEDS) {  leds[indexBB+4] = CHSV(hue, sat, val-170); }
 if (indexBB +5 >=0 && indexBB +5 < NUM_LEDS) {  leds[indexBB+5] = CHSV(hue, sat, val-170); }
 if (indexBB +6 >=0 && indexBB +6 < NUM_LEDS) {  leds[indexBB+6] = CHSV(hue, sat, val-170); }
 if (indexBB +7 >=0 && indexBB +7 < NUM_LEDS) { leds[indexBB+7] = CHSV(hue, sat, val-100); }

 if (indexCC >=0 && indexCC < NUM_LEDS) {  leds[indexCC] = CHSV(hue, sat, val-100); }
 if (indexCC +1 >=0 && indexCC +1 < NUM_LEDS) {  leds[indexCC+1] = CHSV(hue, sat, val-170); }
 if (indexCC +2 >=0 && indexCC +2 < NUM_LEDS) {  leds[indexCC+2] = CHSV(hue, sat, val-170); }
 if (indexCC +3 >=0 && indexCC +3 < NUM_LEDS) { leds[indexCC+3] = CHSV(hue, sat, val-170); }

 if (indexCC +4 >=0 && indexCC +4 < NUM_LEDS) {  leds[indexCC+4] = CHSV(hue, sat, val-170); }
 if (indexCC +5 >=0 && indexCC +5 < NUM_LEDS) {  leds[indexCC+5] = CHSV(hue, sat, val-170); }
 if (indexCC +6 >=0 && indexCC +6 < NUM_LEDS) {  leds[indexCC+6] = CHSV(hue, sat, val-170); }
 if (indexCC +7 >=0 && indexCC +7 < NUM_LEDS) { leds[indexCC+7] = CHSV(hue, sat, val-100); }

  
    FastLED.show(); }        


void fireflies () {
if (masterHue < 240) {hue = masterHue; } 

 if (masterTime > 850) {                         fadeFactor = 150;  }
 if (masterTime < 850 && masterTime > 800) {   fadeFactor = 125; }
 if (masterTime < 800 && masterTime > 600) {    fadeFactor = 100;  }
 if (masterTime < 600 && masterTime > 400) {    fadeFactor = 75; }  
 if (masterTime < 400 && masterTime > 200) {   fadeFactor = 50; }
 if (masterTime < 200 && masterTime > 50) {     fadeFactor = 25;  }
 if (masterTime < 50 && masterTime > 12) {        fadeFactor = 15;  }
 if (masterTime <= 12) {                     fadeFactor = 0;      }
 
 if (timerZero > fadeFactor) { if (masterHue > 240) {hue = random (0,255); }
index = random (0,NUM_LEDS);  timerZero = 0;}

leds[index] = CHSV(hue, sat, val);


  
  for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(250); }
  
FastLED.show();   }


void saturationFade (){  ////////////////////////////Disable saturation control on the screen for this one
if (masterHue < 240) {hue = masterHue; } 
  
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, sat0, val); } 

if (timerZero > 25) {

        if (masterTime > 1000) { if (Direction == 0) { sat0--; }
                                 if (Direction == 1) { sat0++; } }
       
        if (masterTime < 1000 && masterTime > 800) { if (Direction == 0) { sat0 = sat0 - 2; }
                                                     if (Direction == 1) { sat0 = sat0 + 2; }}
        if (masterTime < 800 && masterTime > 600) {  if (Direction == 0) { sat0 = sat0 - 3; }
                                                     if (Direction == 1) { sat0 = sat0 + 3; }}
        if (masterTime < 600 && masterTime > 400) {  if (Direction == 0) { sat0 = sat0 - 4; }
                                                     if (Direction == 1) { sat0 = sat0 + 4; }}
        if (masterTime < 400 && masterTime > 200) {  if (Direction == 0) { sat0 = sat0 - 5; }
                                                     if (Direction == 1) { sat0 = sat0 + 5; }}
        if (masterTime < 200 && masterTime > 50)  {  if (Direction == 0) { sat0 = sat0 - 6; }
                                                     if (Direction == 1) { sat0 = sat0 + 6; }}
        if (masterTime < 50 )  {                     if (Direction == 0) { sat0 = sat0 - 7; }
                                                     if (Direction == 1) { sat0 = sat0 + 7; }}


timerZero = 0;}





  if (sat0 <= 120) {Direction = 1; if (masterHue > 240) {hue = hue + 4;}}
  if (sat0 >= 247) {Direction = 0;  }
  
  
FastLED.show();   }


void swoosh (){ 

if (masterHue < 240) { huedex = masterHue;  }


  if (hue2 < huedex - 26) {hue2 = huedex; }
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue2, sat, val); } 



        if (masterTime > 1000) { fadeFactor = 200; }
       
        if (masterTime < 1000 && masterTime > 800) { fadeFactor = 150; }
        if (masterTime < 800 && masterTime > 600) {  fadeFactor = 125; }
        if (masterTime < 600 && masterTime > 400) {  fadeFactor = 100; }
        if (masterTime < 400 && masterTime > 200) {  fadeFactor = 75; }
        if (masterTime < 200 && masterTime > 50)  {  fadeFactor = 50; }
        if (masterTime < 50 )                    {   fadeFactor = 20; }

if (timerZero > fadeFactor) {
  
  if (Direction == 0) { hue2--; }
   if (Direction == 1) { hue2++; }

timerZero = 0;}


  if (hue2 <= huedex- 25) {Direction = 1; }
  if (hue2 >= huedex) {Direction = 0; if (masterHue >= 240) { huedex = huedex + 4; }}

  FastLED.show();   
}
    
