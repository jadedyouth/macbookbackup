#include <EEPROM.h>
#include <FastLED.h>
#include <elapsedMillis.h>
#define NUM_LEDS 144*2 

CRGB leds[NUM_LEDS];
#define DATA_PIN 3
#define CLOCK_PIN 2

int indexA = 0;
int hue;
int val;

void setup() {
  // put your setup code here, to run once:
FastLED.addLeds<APA102,DATA_PIN,CLOCK_PIN,BGR>(leds, NUM_LEDS);
 for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}
}

void loop() {
  // put your main code here, to run repeatedly:
loop_one(); //B
}
