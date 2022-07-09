//outdoor poles
#include <FastLED.h>
#define NUM_LEDS 288
#define DATA_PIN 3
#define CLOCK_PIN 2

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<APA102,DATA_PIN,CLOCK_PIN,BGR>(leds, NUM_LEDS);
  // put your setup code here, to run once:
for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);} FastLED.show(); 
}

void loop() {
for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 255, 155);} FastLED.show(); 

}
