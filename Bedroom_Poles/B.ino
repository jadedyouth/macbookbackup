void loop_one (){
  
  if (indexA >= 144) {indexA = 0; hue = random (0,255);}


 leds[indexA] = CHSV(hue, 255, 155);
 leds[indexA+1] = CHSV(hue, 255, 155);
 leds[indexA+2] = CHSV(hue, 255, 155);
 
 
 leds[indexA +144] = CHSV(hue, 255, 155);
 leds[indexA +145] = CHSV(hue, 255, 155);
  leds[indexA +146] = CHSV(hue, 255, 155);
 
 indexA = indexA+3;

//for(int i = 0; i < 144; i++) { leds[i] = CHSV(95, 255, 255); }  
//for(int i = 144; i < NUM_LEDS; i++) { leds[i] = CHSV(160, 255, 255); }  
 FastLED.show();
  
  }
