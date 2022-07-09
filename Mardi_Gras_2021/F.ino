void Allrainbow () {
 if (BB <= 60000) {


  if (AA > 150) {
  for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(hue++, 255, 150);} 
  
  AA = 0;}

 }

else    {Master = 0; BB = 0; }
  
  
  

  
  
  
  FastLED.show(); 
  
  }
