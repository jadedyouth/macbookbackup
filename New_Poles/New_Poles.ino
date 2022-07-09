#include <FastLED.h>

#define NUM_LEDS 144

#define DATA_PIN 50
#define CLOCK_PIN 52


CRGB leds[NUM_LEDS];
void setup() {
  // put your setup code here, to run once:
 FastLED.addLeds<APA102,DATA_PIN,CLOCK_PIN,BGR>(leds,144);
 for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
  FastLED.show();  
  Serial.begin (9600);
 
}

void loop() {
  leds[1] = CHSV(160, 255, 255);  
  FastLED.show();  
  delay (1000);
  Serial.println ("Serial Works At Least");
}
