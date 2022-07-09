


void loop_six () {
for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0); }

if (timer0 >= graftspeed) {
if (graftdirection == 0) {graftlowA ++; grafthighA ++; if (graftlowA >= 12) {graftdirection = 1;} }
if (graftdirection == 1) {graftlowA --; grafthighA --; if (graftlowA <= 0) {graftdirection = 0; graftmode++; if (graftmode >= 3) { graftmode = 0; if (intensitymode ==  0) {grafthue = random (0,45);} if (intensitymode ==  1) {grafthue = random (0,255);}}} }


timer0 = 0;}


if (graftmode == 0) {
 for (int i = 11 - graftlowA; i< 12 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); } 
for (int i = 35 - graftlowA; i< 36 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 59 - graftlowA; i< 60 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 83 - graftlowA; i< 84 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 107 - graftlowA; i< 108 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 131 - graftlowA; i< 132 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 11 + 144 - graftlowA; i< 12  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 35 + 144 - graftlowA; i< 36  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 59 + 144 - graftlowA; i< 60  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 83 + 144 - graftlowA; i< 84  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 107 + 144 - graftlowA; i< 108 + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }
for (int i = 131 + 144 - graftlowA; i< 132  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }





}

if (graftmode == 1) {

for (int i = 11 - graftlowA; i< 12 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); } 

for (int i = 59 - graftlowA; i< 60 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 107 - graftlowA; i< 108 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }



for (int i = 35 + 144 - graftlowA; i< 36  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 83 + 144 - graftlowA; i< 84  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 131 + 144 - graftlowA; i< 132  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

}

if (graftmode == 2) {


for (int i = 35 - graftlowA; i< 36 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 83 - graftlowA; i< 84 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 131 - graftlowA; i< 132 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 11 + 144 - graftlowA; i< 12  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 59 + 144 - graftlowA; i< 60  + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }

for (int i = 107 + 144 - graftlowA; i< 108 + 144 + grafthighA; i++){ leds[i] = CHSV(grafthue, graftsat, graftval); }


}
  
   FastLED.show(); }
