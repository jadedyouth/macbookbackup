void loop_two (){
  
    for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(35, 200, 130); }  
  FastLED.show();    
FastLED.delay (10);
  
  
  
  }
