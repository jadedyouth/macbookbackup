//new boxes

#include <FastLED.h>
#include <elapsedMillis.h>
#define NUM_LEDS 12 
#define DATA_PIN 7
CRGB leds[NUM_LEDS];
int hue;

void setup() {
FastLED.addLeds<WS2812,DATA_PIN,GRB>(leds, NUM_LEDS);
//for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);} FastLED.show();

}

void loop() {
for (int i = 0; i< 12; i++){ leds[i] = CHSV(160, 255, 255);} FastLED.show();

}
