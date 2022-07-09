void Random_Flash (){
  indexAA = random (0, NUM_LEDS);
 indexAB = random (0, NUM_LEDS);
  indexAC = random (0, NUM_LEDS);
  indexAD = random (0, NUM_LEDS);

  
  leds[indexAA] = CHSV(main_hue, 255, main_val); 
  leds[indexAB] = CHSV(main_hue, 255, main_val); 
  leds[indexAC] = CHSV(main_hue, 255, main_val); 
  leds[indexAD] = CHSV(main_hue, 255, main_val); 
   main_hue++; if (main_hue >= 255) {main_hue = 0;}
 FastLED.show();

delay (main_delay);
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
   
 FastLED.show(); 
  
  }

  void Cylon () {

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
  
  leds[indexAA] = CHSV(main_hue, 255, main_val); 

  if (Direction == 0) { indexAA ++; if (indexAA >= NUM_LEDS) { Direction = 1;} } 
  if (Direction == 1) { indexAA --; if (indexAA <= 0) { Direction = 0;} } 

  leds[indexAA] = CHSV(main_hue, 255, main_val); 
  
 FastLED.show();
  }


void  Pulse (){ 
  
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(main_hue, 255, main_val); }  
 
  if (Direction == 0) { main_val ++; if (main_val >= 254) { Direction = 1;} } 
  if (Direction == 1) { main_val --; if (main_val <= 120) { Direction = 0;} }  
 delay (10);
 FastLED.show();
  
  } 

void  PulseFast (){ 
  
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(main_hue, 255, main_val); }  
 
  if (Direction == 0) { main_val ++; if (main_val >= 254) { Direction = 1;} } 
  if (Direction == 1) { main_val --; if (main_val <= 120) { Direction = 0;} }  

 FastLED.show();
  
  } 



void Gradient (){

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(main_hue, 255, main_val); }  
 FastLED.show();

main_hue++;
  
  } 
  
void Iron_Curtain (){ //a solid mix of reds and oranges with a little yellow
  
  leds[indexAA] = CHSV(main_hue, 255, main_val); 
  main_hue++; if (main_hue >= 35) {main_hue = 0;}
  indexAA++; if (indexAA>=NUM_LEDS) {indexAA = 0;}
  delay (20);
  FastLED.show(); 
  
  }  
