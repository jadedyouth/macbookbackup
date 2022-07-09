void Loop_One (){
  
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

  
if (index >= NUM_LEDS) {index = 0; hue = random (0,255);}

  leds[index] = CHSV(hue, 255, 255);
 
 index ++;


 FastLED.delay (15);

   
  FastLED.show();  }


void Loop_Two (){
  
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

  
if (index >= NUM_LEDS) {index = 0; hue = random (0,255);}

  leds[index] = CHSV(hue, 255, 255);
  leds[index+1] = CHSV(hue+ 15, 255, 255);
  leds[index+2] = CHSV(hue+ 30, 255, 255);
  leds[index+3] = CHSV(hue+ 45, 255, 255);
 
 index ++;


 FastLED.delay (15);

   
  FastLED.show();  }


void Loop_Three () {
  
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

if (undex < 0) {undex = NUM_LEDS; loo = random (0,255);}

  leds[undex] = CHSV(loo, 255, 255);
 
 undex --;




 FastLED.delay (15);

   
  FastLED.show();
  
  
  }


void Loop_Four (){
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

if (undex < 0) {undex = NUM_LEDS; loo = random (0,255);}

  leds[undex] = CHSV(loo, 255, 255);
  leds[undex+1] = CHSV(loo+ 15, 255, 255);
  leds[undex+2] = CHSV(loo+ 30, 255, 255);
  leds[undex+3] = CHSV(loo+ 45, 255, 255);
 
 undex --;




 FastLED.delay (15);

   
  FastLED.show();
  
  
  }

void Loop_Five () {
    
 for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

  
if (index >= NUM_LEDS) {index = 0; hue = random (0,255);}

  leds[index] = CHSV(hue, 255, 255);
  leds[index+1] = CHSV(hue+ 15, 255, 255);
  leds[index+2] = CHSV(hue+ 30, 255, 255);
  leds[index+3] = CHSV(hue+ 45, 255, 255);
 
 index ++;


if (undex <= 0) {undex = NUM_LEDS; loo = random (0,255);}

  leds[undex] = CHSV(loo, 255, 255);
  leds[undex+1] = CHSV(loo+ 15, 255, 255);
  leds[undex+2] = CHSV(loo+ 30, 255, 255);
  leds[undex+3] = CHSV(loo+ 45, 255, 255);
 
 undex --;


 FastLED.delay (15);

   
  FastLED.show();    
    
    }


void Loop_Six (){
   for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }

  
if (index >= NUM_LEDS) {index = 0; hue = random (0,255);}

  leds[index] = CHSV(hue, 255, 255);
  leds[index+1] = CHSV(hue+ 15, 255, 255);
  leds[index+2] = CHSV(hue+ 30, 255, 255);
  leds[index+3] = CHSV(hue+ 45, 255, 255);
  
  leds[index+4] = CHSV(0, 0, 0);

  leds[index+5] = CHSV(hue+ 60, 255, 255);
  leds[index+6] = CHSV(hue+ 75, 255, 255);
 
 index ++;


if (undex <= 0) {undex = NUM_LEDS; loo = random (0,255);}

  leds[undex] = CHSV(loo, 255, 255);
  leds[undex+1] = CHSV(loo+ 15, 255, 255);

  leds[undex+2] = CHSV(0, 0, 0);
  
  leds[undex+3] = CHSV(loo+ 30, 255, 255);
  leds[undex+4] = CHSV(loo+ 45, 255, 255);
  leds[undex+5] = CHSV(loo+ 60, 255, 255);
  leds[undex+6] = CHSV(loo+ 75, 255, 255);
  
 
 undex --;




 FastLED.delay (15);

   
  FastLED.show();   
  }


    
