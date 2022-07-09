void fadeTrainMove () {
  
  if (masterHue < 240) {hue = masterHue; } 
     

 
//  Serial.println (masterTime); 
 if (masterTime > 850) {   fadeFactor = 600; fadeOutFactor = 250; tailLength = 100;}
 if (masterTime < 850 && masterTime > 800) {  fadeOutFactor = 250; fadeFactor = 500; tailLength = 90;}
 if (masterTime < 800 && masterTime > 600) {  fadeOutFactor = 250;  fadeFactor = 400;  tailLength = 80;}
 if (masterTime < 600 && masterTime > 400) {  fadeOutFactor = 250;  fadeFactor = 300; tailLength = 60;}  
 if (masterTime < 400 && masterTime > 200) {  fadeOutFactor = 250;  fadeFactor = 200; tailLength = 45;}
 if (masterTime < 200 && masterTime > 50) {   fadeOutFactor = 250;  fadeFactor = 100;  tailLength = 30;}
 if (masterTime < 50 && masterTime > 12) {   fadeOutFactor = 245;     fadeFactor = 50;  tailLength = 20;}
 if (masterTime <= 12) {                   fadeOutFactor = 240;  fadeFactor = 0;      tailLength = 0;}
  

 


leds[index] = CHSV(hue, sat, 255);

  
  
 if (timerZero > fadeFactor) { index++; if (masterHue > 240) { hue = hue + 16;} timerZero = 0;}  if (index >= NUM_LEDS) {index = 0;}
 
 if (timerOne > tailLength) { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(fadeOutFactor); } timerOne = 0;}
  
  
   FastLED.show(); }




void fadeTrainCrossover () {


  if (masterHue < 240) {hue = masterHue; } 
     

 
//  Serial.println (masterTime); 
 if (masterTime > 850) {                     fadeOutFactor = 250; fadeFactor = 600; tailLength = 100;}
 if (masterTime < 850 && masterTime > 800) {  fadeOutFactor = 250; fadeFactor = 500; tailLength = 90;}
 if (masterTime < 800 && masterTime > 600) {  fadeOutFactor = 250;  fadeFactor = 400;  tailLength = 80;}
 if (masterTime < 600 && masterTime > 400) {  fadeOutFactor = 250;  fadeFactor = 300; tailLength = 60;}  
 if (masterTime < 400 && masterTime > 200) {  fadeOutFactor = 250;  fadeFactor = 200; tailLength = 45;}
 if (masterTime < 200 && masterTime > 50) {   fadeOutFactor = 250;  fadeFactor = 100;  tailLength = 30;}
 if (masterTime < 50 && masterTime > 12) {    fadeOutFactor = 235;   fadeFactor = 50;  tailLength = 20;}
 if (masterTime <= 12) {                     fadeOutFactor = 230;     fadeFactor = 0;         tailLength = 0;}
  

 


leds[index] = CHSV(hue, sat, 255);
leds[indexDD] = CHSV(hue+128, sat, 255);

  
  
 if (timerZero > fadeFactor) { index++; indexDD--; if (masterHue > 240) { hue = hue + 16;} timerZero = 0;}  if (index >= NUM_LEDS) {index = 0;} if (indexDD <= 0) {indexDD = NUM_LEDS;}
 
 
 
 
 if (timerOne > tailLength) { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(fadeOutFactor); } timerOne = 0;}
  






     FastLED.show(); }


void faierie () {     

if (masterHue < 240) {hue = masterHue; } 


 if (masterTime > 850) {                     fadeOutFactor = 210; fadeFactor = 400; tailLength = 100;}
 if (masterTime < 850 && masterTime > 800) {  fadeOutFactor = 210; fadeFactor = 350; tailLength = 90;}
 if (masterTime < 800 && masterTime > 600) {  fadeOutFactor = 210;  fadeFactor = 300;  tailLength = 80;}
 if (masterTime < 600 && masterTime > 400) {  fadeOutFactor = 210;  fadeFactor = 200; tailLength = 60;}  
 if (masterTime < 400 && masterTime > 200) {  fadeOutFactor = 200;  fadeFactor = 100; tailLength = 45;}
 if (masterTime < 200 && masterTime > 50) {   fadeOutFactor = 200;  fadeFactor = 80;  tailLength = 30;}
 if (masterTime < 50 && masterTime > 12) {   fadeOutFactor = 200;    fadeFactor = 50;  tailLength = 20;}
 if (masterTime <= 12) {                   fadeOutFactor = 200;      fadeFactor = 25;       tailLength = 0;}
  

leds[index] = CHSV(hue, sat, 255);


 if (timerZero > fadeFactor) {  if (Direction == 0) {index++; faerieGate = random (0,10); if (faerieGate >= 9) {Direction = 1;} } if (Direction == 1) {index--; faerieGate = random (0,10); if (faerieGate >= 9) {Direction = 0;}} if (masterHue > 240) { hue = hue + 16;} timerZero = 0;}  
 
 if (index > NUM_LEDS) {index = 0;} if (index < 0) {index = NUM_LEDS;}



 if (timerOne > tailLength) { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(fadeOutFactor); } timerOne = 0;}


   FastLED.show(); }




 void faieries () {     

if (masterHue < 240) {hue = masterHue; } 


 if (masterTime > 850) {                     fadeOutFactor = 210; fadeFactor = 400; tailLength = 100;}
 if (masterTime < 850 && masterTime > 800) {  fadeOutFactor = 210; fadeFactor = 350; tailLength = 90;}
 if (masterTime < 800 && masterTime > 600) {  fadeOutFactor = 210;  fadeFactor = 300;  tailLength = 80;}
 if (masterTime < 600 && masterTime > 400) {  fadeOutFactor = 210;  fadeFactor = 200; tailLength = 60;}  
 if (masterTime < 400 && masterTime > 200) {  fadeOutFactor = 200;  fadeFactor = 100; tailLength = 45;}
 if (masterTime < 200 && masterTime > 50) {   fadeOutFactor = 200;  fadeFactor = 80;  tailLength = 30;}
 if (masterTime < 50 && masterTime > 12) {   fadeOutFactor = 200;    fadeFactor = 50;  tailLength = 20;}
 if (masterTime <= 12) {                   fadeOutFactor = 200;      fadeFactor = 25;       tailLength = 0;}
  

leds[index] = CHSV(hue, sat, 255);
leds[indexAA] = CHSV(hue, sat, 255);
leds[indexBB] = CHSV(hue, sat, 255);


 if (timerZero > fadeFactor) {  
    if (Direction == 0) {index++; faerieGate = random (0,10); if (faerieGate >= 9) {Direction = 1;} } if (Direction == 1) {index--; faerieGate = random (0,10); if (faerieGate >= 9) {Direction = 0;}} if (masterHue > 240) { hue = hue + 16;}  
    if (DirectionAA == 0) {indexAA++; faerieGateAA = random (0,10); if (faerieGateAA >= 9) {DirectionAA = 1;} } if (DirectionAA == 1) {indexAA--; faerieGateAA = random (0,10); if (faerieGateAA >= 9) {DirectionAA = 0;}} if (masterHue > 240) { hue = hue + 16;} 
    if (DirectionBB == 0) {indexBB++; faerieGateBB = random (0,10); if (faerieGateBB >= 9) {DirectionBB = 1;} } if (DirectionBB == 1) {indexBB--; faerieGateBB = random (0,10); if (faerieGateBB >= 9) {DirectionBB = 0;}} if (masterHue > 240) { hue = hue + 16;} 



 timerZero = 0;}
 
 
 if (index > NUM_LEDS) {index = 0;} if (index < 0) {index = NUM_LEDS;}
 if (indexAA > NUM_LEDS) {indexAA = 0;} if (indexAA < 0) {indexAA = NUM_LEDS;}
 if (indexBB > NUM_LEDS) {indexBB = 0;} if (indexBB < 0) {indexBB = NUM_LEDS;}


 if (timerOne > tailLength) { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(fadeOutFactor); } timerOne = 0;}


   FastLED.show(); }  
   
