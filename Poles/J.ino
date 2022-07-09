


void loop_seven () {
if (pulsetimer >= pulsetime) { 



  
if (pulsedir == 0) { pulseval++; if (pulseval >= 254) {pulsedir = 1;} }
if (pulsedir == 1) { pulseval--; if (pulseval <= 70) {pulsedir = 0;} }  




  
pulsetimer = 0;}

  
  for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(pulsehue, pulsesat, pulseval); }

  
  FastLED.show(); }
