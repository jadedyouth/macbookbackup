void loop_one (){
  
  if (index >= 144) {index = 0; hue = random (0,45);}


 leds[index] = CHSV(hue, 255, 155);
 leds[index+1] = CHSV(hue, 255, 155);
 leds[index+2] = CHSV(hue, 255, 155);
 
 
 leds[index +144] = CHSV(hue, 255, 155);
 leds[index +145] = CHSV(hue, 255, 155);
  leds[index +146] = CHSV(hue, 255, 155);
 
 index = index+3;

//for(int i = 0; i < 144; i++) { leds[i] = CHSV(95, 255, 255); }  
//for(int i = 144; i < NUM_LEDS; i++) { leds[i] = CHSV(160, 255, 255); }  
 FastLED.show();
  
  }
