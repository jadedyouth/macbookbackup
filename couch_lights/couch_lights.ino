#include <FastLED.h>
#define NUM_LEDS 150
#define DATA_PIN 7
CRGB leds[NUM_LEDS];


void setup() {
 FastLED.addLeds<WS2811,DATA_PIN,BRG>(leds, NUM_LEDS);

}

void loop() {
 
 for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(25, 255, 255); }  
 FastLED.show();

}
