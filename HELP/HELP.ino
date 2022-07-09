#include <FastLED.h>
#define LED_COUNT 94    
struct CRGB leds[LED_COUNT];
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<APA102,2,3,BGR>(leds, 12);
  FastLED.addLeds<APA102,4,5,BGR>(leds, 12, 24);
  FastLED.addLeds<APA102,6,7,BGR>(leds, 24, 36);
FastLED.addLeds<APA102,10,11,BGR>(leds, 36, LED_COUNT);
for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0); }

}

void loop() {
for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0); }
  
//leds[0] = CHSV (180, 255, 255); 
//leds[12] = CHSV (96, 255, 255); 
  //leds[24] = CHSV (0, 255, 255); 
//leds[37] = CHSV (160, 255, 255); 
for (int i = 0; i< 12; i++){leds[i] = CHSV (180, 255, 255); }

for (int i = 12; i< 24; i++){leds[i] = CHSV (160, 255, 255); }
for (int i = 24; i< 36; i++){leds[i] = CHSV (90, 255, 255); }

for (int i = 36; i< LED_COUNT; i++){leds[i] = CHSV (0, 255, 255); }

/*
//dots
leds[64] = CHSV (0, 255, 255);
leds[65] = CHSV (0, 255, 255);
*/
LEDS.show();
}
