int val0 = 200;
int val1 = 0;
byte stage0;

int timeElapsed0 = 200;
byte colourMode0 = 7;
byte length0 = 1;
void loop_zero () {

  if (colourMode0 == 0) {hue = 0; val1 = 0;}
  if (colourMode0 == 1) {hue = 30; val1 = 0;}
  if (colourMode0 == 2) {hue = 45; val1 = 0;}
  if (colourMode0 == 3) {hue = 90; val1 = 0;}
  if (colourMode0 == 4) {hue = 135; val1 = 0;}
  if (colourMode0 == 5) {hue = 160; val1 = 0;}
  if (colourMode0 == 6) {hue = 160; hue0 = 0; val1 = 200;}
  if (colourMode0 == 7) {hue = 160; hue0 = 130; val1 = 150;}
  if (colourMode0 == 8) {hue = 45; hue0 = 0; }
  
  //colour modes 10&11 nested in stage0 = 0 for rainbow




if (stage0 == 0) {if (timer0 >= timeElapsed0) { stage0 = 1; timer0 = 0; } }
if (stage0 == 1) {for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(hue0, 255, val1); } timer0 = 0; stage0 = 2; if (length0 == 0){index = 5;} if (length0 == 1){index = 10;}  if (colourMode0 == 10) {hue++; val1 = 0;} if (colourMode0 == 11) {hue = hue + 8; val1 = 0; }}
if (stage0 == 2) {if (timer0 >= timeElapsed0) { stage0 = 3; timer0 = 0; } }
if (stage0 == 3) {for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(hue0, 255, val1); } timer0 = 0;  stage0 = 0;  index = 0;}

if (length0 == 0) {

if (stage0 == 0){

while (index <= 144) {

leds[index] = CHSV(hue, 255, val0);
leds[index+1] = CHSV(hue, 255, val0);
leds[index+2] = CHSV(hue, 255, val0);
leds[index+3] = CHSV(hue, 255, val0);
leds[index+4] = CHSV(hue, 255, val0); 

leds[index + 144 - 5 ] = CHSV(hue, 255, val0);
leds[index + 144 + 1 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 2 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 3 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 4 - 5] = CHSV(hue, 255, val0); 

index = index + 10;   }

}



if (stage0 == 2){

while (index < 144) {

leds[index] = CHSV(hue, 255, val0);
leds[index + 1] = CHSV(hue, 255, val0);
leds[index + 2] = CHSV(hue, 255, val0);
leds[index + 3] = CHSV(hue, 255, val0);
leds[index + 4] = CHSV(hue, 255, val0); 

leds[index + 144 - 5 ] = CHSV(hue, 255, val0);
leds[index + 144 + 1 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 2 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 3 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 4 - 5] = CHSV(hue, 255, val0); 

index = index + 10;   }

}

}



if (length0 == 1) {

if (stage0 == 0){

while (index <= 144) {

leds[index] = CHSV(hue, 255, val0);
leds[index+1] = CHSV(hue, 255, val0);
leds[index+2] = CHSV(hue, 255, val0);
leds[index+3] = CHSV(hue, 255, val0);
leds[index+4] = CHSV(hue, 255, val0); 
leds[index+5] = CHSV(hue, 255, val0); 
leds[index+6] = CHSV(hue, 255, val0); 
leds[index+7] = CHSV(hue, 255, val0); 
leds[index+8] = CHSV(hue, 255, val0); 
leds[index+9] = CHSV(hue, 255, val0); 

leds[index + 144 - 5 ] = CHSV(hue, 255, val0);
leds[index + 144 + 1 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 2 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 3 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 4 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 5 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 6 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 7 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 8 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 9 - 5] = CHSV(hue, 255, val0);  

index = index + 20;   }

}


if (stage0 == 2){

while (index < 144) {

leds[index] = CHSV(hue, 255, val0);
leds[index + 1] = CHSV(hue, 255, val0);
leds[index + 2] = CHSV(hue, 255, val0);
leds[index + 3] = CHSV(hue, 255, val0);
leds[index + 4] = CHSV(hue, 255, val0); 
leds[index + 5] = CHSV(hue, 255, val0); 
leds[index + 6] = CHSV(hue, 255, val0); 
leds[index + 7] = CHSV(hue, 255, val0); 
leds[index + 8] = CHSV(hue, 255, val0); 
leds[index + 9] = CHSV(hue, 255, val0); 

leds[index + 144 - 5 ] = CHSV(hue, 255, val0);
leds[index + 144 + 1 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 2 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 3 - 5] = CHSV(hue, 255, val0);
leds[index + 144 + 4 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 5 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 6 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 7 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 8 - 5] = CHSV(hue, 255, val0); 
leds[index + 144 + 9 - 5] = CHSV(hue, 255, val0); 

index = index + 20;   }

}

}




FastLED.show();    

  
  }
