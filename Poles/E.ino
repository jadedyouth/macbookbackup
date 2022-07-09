

void loop_three() {
  val0 = 150;
  

if (timer0 >= loop3spd) {stage0++; if (stage0 >= 2) {stage0 = 0;} timer0 = 0; }

if (stage0 == 0) { 
  section = random (0,26);
  
  for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0); }
}

if (stage0 == 1) {

switch (section) {

case 0:  for (int i = 0; i< 24; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 1:   for (int i = 24; i< 48; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 2:   for (int i = 48; i< 72; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 3:   for (int i = 72; i< 96; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 4:   for (int i = 96; i< 120; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 5:   for (int i = 120; i< 144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;

case 6:   for (int i = 0+144; i< 24+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 7:   for (int i = 24+144; i< 48+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 8:   for (int i = 48+144; i< 72+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 9:   for (int i = 72+144; i< 96+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 10:   for (int i = 96+144; i< 120+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 11:   for (int i = 120+144; i< 144+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;

case 12: for (int i = 0; i< 24; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 120+144; i< 144+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 13: for (int i = 24; i< 48; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 96+144; i< 120+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 14: for (int i = 48; i< 72; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 72+144; i< 96+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 15: for (int i = 72; i< 96; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 48+144; i< 72+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 16: for (int i = 96; i< 120; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 24+144; i< 48+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 17: for (int i = 120; i< 144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 0+144; i< 24+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 18: for (int i = 0; i< 24; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 120; i< 144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 48+144; i< 72+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 19: for (int i = 0+144; i< 24+144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 120+144; i< 144+144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 72; i< 96; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 20: for (int i = 0; i< 24; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 24+144; i< 48+144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 21: for (int i = 120+144; i< 144+144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 96; i< 120; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 22: for (int i = 48+144; i< 72+144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 72; i< 96; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 24; i< 48; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 23: for (int i = 120+144; i< 144+144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 0+144; i< 24+144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 120; i< 144; i++){ leds[i] = CHSV(hue0, 255, val0); } for (int i = 0; i< 24; i++){ leds[i] = CHSV(hue0, 255, val0); } break;

case 24:  for (int i = 0; i< 144; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 25:  for (int i = 144; i< NUM_LEDS; i++){ leds[i] = CHSV(hue0, 255, val0); } break;
case 26: for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(hue0, 0, val0); } break;

}

}
 FastLED.show();    
  }
