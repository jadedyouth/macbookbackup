void Random_Flash (){
 
  
  if (timer0 <= 7000) {
  indexAA = random (0, NUM_LEDS);
 indexAB = random (0, NUM_LEDS);
  indexAC = random (0, NUM_LEDS);
  indexAD = random (0, NUM_LEDS);

  
  leds[indexAA] = CHSV(main_hue, 255, 255); 
  leds[indexAB] = CHSV(main_hue, 255, 255); 
  leds[indexAC] = CHSV(main_hue, 255, 255); 
  leds[indexAD] = CHSV(main_hue, 255, 255); 
   main_hue++; if (main_hue >= 255) {main_hue = 0;}


  }
if (timer0 >= 7000) { 
  
  indexAA = random (0, NUM_LEDS);
  indexAB = random (0, NUM_LEDS);
  indexAC = random (0, NUM_LEDS);
  indexAD = random (0, NUM_LEDS);

  
  leds[indexAA] = CHSV(0, 0, 0); 
  leds[indexAB] = CHSV(0, 0, 0); 
  leds[indexAC] = CHSV(0, 0, 0); 
  leds[indexAD] = CHSV(0, 0, 0); 
  
   
}

if (timer0 >= 9000) { for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  }
if (timer0 >= 11000) { timer0 = 0;}
   
 FastLED.show(); 
  
  }


void Cylon () {

if (timer0 >= 200) {

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
  
  leds[CindexAA] = CHSV(0, 255, 254); 
  leds[CindexAB] = CHSV(0, 255, 254); 

  if (Direction == 0) { CindexAA ++; if (CindexAA >= NUM_LEDS) { Direction = 1;}      CindexAB --; } 
  if (Direction == 1) { CindexAA --; if (CindexAA <= 0) { Direction = 0;}              CindexAB ++; } 

  leds[CindexAA] = CHSV(0, 255, 254); 
  leds[CindexAB] = CHSV(0, 255, 254); 




timer0 = 0; }
  
 FastLED.show();
  }


void  Pulse (){ 
  
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(main_hue, 255, pulseVal); }  
 
  if (Direction == 0) { pulseVal ++; if (pulseVal >= 254) { Direction = 1;} } 
  if (Direction == 1) { pulseVal --; if (pulseVal <= 2) { Direction = 0;} }  
 
 FastLED.show();
  
  } 


void Gradient (){

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(main_hue, 255, 150); }  
 FastLED.show();

main_hue++;
  
  }  
/*
void Kitt () {
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
  
 if (Direction == 0) {  leds[indexAA] = CHSV(main_hue, 255, main_val); }

 FastLED.show(); delay (500); Direction = 1;
 
 if (Direction == 1) { leds[indexAA-1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA] = CHSV(main_hue, 255, main_val); 
                       leds[indexAA+1] = CHSV(main_hue, 255, main_val);}
 

 FastLED.show(); delay (500); Direction = 2;

 if (Direction == 2) { leds[indexAA-2] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA] = CHSV(main_hue, 255, main_val); 
                       leds[indexAA+1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+2] = CHSV(main_hue, 255, main_val);}

   FastLED.show(); delay (500); Direction = 3;

 if (Direction == 3) { leds[indexAA-3] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-2] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA] = CHSV(main_hue, 255, main_val); 
                       leds[indexAA+1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+2] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+3] = CHSV(main_hue, 255, main_val);}


    FastLED.show(); delay (500); Direction = 4;

 if (Direction == 4) {leds[indexAA-4] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-3] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-2] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA] = CHSV(main_hue, 255, main_val); 
                       leds[indexAA+1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+2] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+3] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+4] = CHSV(main_hue, 255, main_val);}

    FastLED.show(); delay (500); Direction = 5;

 if (Direction == 5) {leds[indexAA-5] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-4] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-3] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-2] = CHSV(main_hue, 255, main_val);
                       leds[indexAA-1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA] = CHSV(main_hue, 255, main_val); 
                       leds[indexAA+1] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+2] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+3] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+4] = CHSV(main_hue, 255, main_val);
                       leds[indexAA+5] = CHSV(main_hue, 255, main_val);}

  Direction = 5;   FastLED.show(); delay (500); 
  }

  ////////was meant to contract and replicate this, but it needs to be converted into millis first (also everything else).

*/

void Iron_Curtain (){ //a solid mix of reds and oranges with a little yellow
  
  if (CurtainMd == 0) {
  if (timer0 > 50) {
  leds[CurtainIndex] = CHSV(CurtainHue, 255, 120); 
  CurtainHue++; if (CurtainHue >= 45) {CurtainHue = 0;}
  CurtainIndex++; if (CurtainIndex>=NUM_LEDS) {CurtainIndex = 0; CurtainMd = 1;}
 timer0 = 0; }

  }

  if (CurtainMd == 1) {
  if (timer0 > 50) {
  leds[CurtainIndex] = CHSV(0, 0, 0); 
   CurtainIndex++; if (CurtainIndex>=NUM_LEDS) {CurtainIndex = 0; CurtainMd = 0;}
 timer0 = 0; 
 } }
 
  FastLED.show(); 
  
  }  


void Christmas (){
if (ChristmasTimer >= 50) {
/*
if (ChristmasIndexGreen <= NUM_LEDS-3) { ChristmasIndexGreen = ChristmasIndexGreen + 3; }
if (ChristmasIndexRed <= NUM_LEDS-3) { ChristmasIndexRed = ChristmasIndexRed + 3; }
if (ChristmasIndexWhite <= NUM_LEDS-3) { ChristmasIndexWhite = ChristmasIndexWhite + 3; }



if (ChristmasIndexGreen > NUM_LEDS-3) {ChristmasIndexGreen = 0;}
if (ChristmasIndexRed > NUM_LEDS-3) {ChristmasIndexRed = 1;}
if (ChristmasIndexWhite > NUM_LEDS-3) {ChristmasIndexWhite = 2;}
*/
ChristmasIndexGreen = random (0, NUM_LEDS);
ChristmasIndexRed = random (0, NUM_LEDS);
ChristmasIndexWhite = random (0, NUM_LEDS);



ChristmasTimer = 0;}

  
leds[ChristmasIndexGreen] = CHSV(96, 255, 150); 


leds[ChristmasIndexRed] = CHSV(0, 255, 150); 


leds[ChristmasIndexWhite] = CHSV(0, 0, 150); 

ChristmasIndexOff = random (0, NUM_LEDS);


leds[ChristmasIndexOff] = CHSV(0, 0, 0); 


   FastLED.show();  }  



void SolidRainbow (){
  
 for(int i = 0; i < 14; i++) {  leds[i] = CHSV(0, 255, 150); }
for(int i = 14; i < 23; i++) {   leds[i] = CHSV(45, 255, 150); }
for(int i = 23; i < 30; i++) {    leds[i] = CHSV(90, 255, 150); }
for(int i = 30; i < 39; i++) {     leds[i] = CHSV(135, 255, 150); }
for(int i = 39; i < 50; i++) {      leds[i] = CHSV(180, 255, 150); }

for(int i = 50; i < 67; i++) {      leds[i] = CHSV(180, 255, 150); }
for(int i = 67; i < 77; i++) {     leds[i] = CHSV(135, 255, 150); }
for(int i = 77; i < 84; i++) {    leds[i] = CHSV(90, 255, 150); }  
for(int i = 84; i < 95; i++) {   leds[i] = CHSV(45, 255, 150); }          
for(int i = 95; i < 107; i++) {  leds[i] = CHSV(0, 255, 150); }              

for(int i = 107; i < 116; i++) {   leds[i] = CHSV(45, 255, 150); }
for(int i = 116; i < 123; i++) {    leds[i] = CHSV(90, 255, 150); }
for(int i = 123; i < 133; i++) {     leds[i] = CHSV(135, 255, 150); }    
for(int i = 133; i < 163; i++) {      leds[i] = CHSV(180, 255, 150); }    
             
for(int i = 163; i < 173; i++) {     leds[i] = CHSV(135, 255, 150); }  
for(int i = 173; i < 181; i++) {     leds[i] = CHSV(90, 255, 150); }
for(int i = 181; i < 191; i++) {   leds[i] = CHSV(45, 255, 150); }
for(int i = 191; i < 206; i++) {  leds[i] = CHSV(0, 255, 150); }               
            
for(int i = 206; i < 217; i++) {   leds[i] = CHSV(45, 255, 150); }                                       
for(int i = 218; i < 226; i++) {     leds[i] = CHSV(90, 255, 150); }
for(int i = 226; i < 236; i++) {     leds[i] = CHSV(135, 255, 150); }
for(int i = 236; i < NUM_LEDS; i++) {      leds[i] = CHSV(180, 255, 150); }  




 FastLED.show(); 
  
  
  
  }   
