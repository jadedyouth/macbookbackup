void start_loop (){
  


  while (val <= 150) {val++;   for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(160, 0, val); }    FastLED.delay (15);   FastLED.show();}   
//if (index >= NUM_LEDS) {index = 0; hue = random (0,255);}


 //leds[index] = CHSV(hue, 255, 255);
 
// index ++;




   
FastLED.delay (200);
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(160, 0, 0); }  
  FastLED.show();    
FastLED.delay (200);

  
  }
