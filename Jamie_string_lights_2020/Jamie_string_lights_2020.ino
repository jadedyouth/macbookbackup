//string lights for jamies drinks september 2020

#include <FastLED.h>
#define NUM_LEDS 250
#define DATA_PIN 50
CRGB leds[NUM_LEDS];

byte main_hue = 0;
int main_delay = 30;
byte main_val = 150; 


byte indexAA;
byte indexAB; 
byte indexAC; 
byte indexAD; 

byte Direction;
int LED_LOOP = 3;

void setup() {
  FastLED.addLeds<WS2811,DATA_PIN,RGB>(leds, NUM_LEDS);

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
 FastLED.show();

}

void loop() {
//Random_Flash ();
//Cylon ();

//Pulse ();
//Gradient ();
//Iron_Curtain ();

if (LED_LOOP == 0){ Random_Flash (); } //Loops O
if (LED_LOOP == 1){  } //Loops O
if (LED_LOOP == 2){ Pulse (); } //Loops 0
if (LED_LOOP == 3){ Gradient (); } //Loops 0
if (LED_LOOP == 4){  } //Loops 0 .   /////////Unfinished
if (LED_LOOP == 5){ Iron_Curtain (); } //Loops 0

if (LED_LOOP == 6){ PulseFast (); } //Loops 0

}
