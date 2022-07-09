void Loop_Seven () {
  
counter++; if (counter >= 1000) {hue = hue + 45; counter = 0; }
  
  index = random (0, NUM_LEDS); 
leds[index] = CHSV(hue, 255, 255);
   
    FastLED.show();  


index = random (0, NUM_LEDS); 
  leds[index] = CHSV(0, 0, 0);

   FastLED.show();   

 
index = random (0, NUM_LEDS); 
  leds[index] = CHSV(0, 0, 0);

   FastLED.show();


 FastLED.delay (15);
  
  
  }

void fadeall() { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(250); } }
 
  void Loop_Twelve () {
  
//counter++; if (counter >= 1000) {hue = hue + 45; counter = 0; }
hue = random (0, 45);
  
  index = random (0, NUM_LEDS); 
leds[index] = CHSV(hue, 255, 255);

   fadeall ();
    FastLED.show();  





 FastLED.delay (15);
  
  
  }
