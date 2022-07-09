//garage storage

#include <FastLED.h>
#include <elapsedMillis.h>
#define NUM_LEDS 8
#define DATA_PIN 4
CRGB leds[NUM_LEDS];
CRGB ledz[26];
CRGB ledx[48];

int val0 = 0;
int val1 = - 30;
int val2 = - 90;
int val3 = - 120;
int val4 = - 150;
int val5 = - 180;
int val6 = - 210;
int val7 = - 240;
int hue = 15;

elapsedMillis TimerDrape;
elapsedMillis TimerDrapeTail;

elapsedMillis TimerSticks; 

int drapeindex;
int drapeindexB = 48;

void setup() {
FastLED.addLeds<WS2811,DATA_PIN,BRG>(leds, NUM_LEDS); //poles
FastLED.addLeds<WS2811,5,BRG>(ledz, 26); //front fence
FastLED.addLeds<WS2811,7,RGB>(ledx, 48); //draperies

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
for(int i = 0; i < 26; i++) { ledz[i] = CHSV(0, 0, 0); }  
for(int i = 0; i < 48; i++) { ledx[i] = CHSV(0, 0, 0); }  
}

void loop() {
 
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); } 




for(int i = 0; i < 48; i++) { ledx[i].nscale8(254); } 




if (TimerDrape > 300) {

drapeindex++; if (drapeindex >= 48) {drapeindex = 0;}
drapeindexB--; if (drapeindexB < 0) {drapeindexB = 47;}

TimerDrape = 0;}

ledx[drapeindex] = CHSV(hue, 255, 255);
ledx[drapeindexB] = CHSV(hue, 255, 255);


if (TimerSticks > 100) {

val0 ++;
val1 ++;
val2 ++;
val3 ++;
val4 ++;
val5 ++;
val6 ++;
val7 ++;

TimerSticks = 0; }

if (val0 >= 255) { val0 = -190;}
if (val1 >= 255) { val1 = -190;}
if (val2 >= 255) { val2 = -190;}
if (val3 >= 255) { val3 = -190;}
if (val4 >= 255) { val4 = -190;}
if (val5 >= 255) { val5 = -190;}
if (val6 >= 255) { val6 = -190;}
if (val7 >= 255) { val7 = -190;}

//delay (35);


if (val0 >= 0 && val0 <=255) {leds[0] = CHSV(hue, 255, val0);  }
if (val1 >= 0 && val1 <=255) {leds[1] = CHSV(hue, 255, val1);  }
if (val2 >= 0 && val2 <=255) {leds[2] = CHSV(hue, 255, val2);  }
if (val3 >= 0 && val3 <=255) {leds[3] = CHSV(hue, 255, val3);  }
if (val4 >= 0 && val4 <=255) {leds[4] = CHSV(hue, 255, val4);  }
if (val5 >= 0 && val5 <=255) {leds[5] = CHSV(hue, 255, val5);  }
if (val6 >= 0 && val6 <=255) {leds[6] = CHSV(hue, 255, val6);  }
if (val7 >= 0 && val7 <=255) {leds[7] = CHSV(hue, 255, val7);  }




for(int i = 0; i < 26; i++) { ledz[i] = CHSV(hue, 255, 255); }  
 FastLED.show();
 }
