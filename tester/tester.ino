#include <FastLED.h>
#include <elapsedMillis.h>
#define NUM_LEDS 750 
#define DATA_PIN 17
CRGB leds[NUM_LEDS];

int hueP;
int PiecesIndex;
const int Pieces [] {27,122,33,116,55,94,54,95,53,96,22,37,52,67,82,97,112,127,51,98,50,99,49,100,41,108,17,132}; //28

const int row1 []{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};//15
elapsedMillis AA;

void setup() {
 
FastLED.addLeds<WS2812,DATA_PIN,GRB>(leds, NUM_LEDS);
 FastLED.show(); 


}

void loop() {
for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}
  //for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}
 // for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}
 // for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);} 

 leds[row1 [PiecesIndex]] = CHSV(hueP, 255, 150);
 leds[row1 [PiecesIndex+1]] = CHSV(hueP, 255, 150);
 leds[row1 [PiecesIndex+2]] = CHSV(hueP, 255, 150);
 leds[row1 [PiecesIndex+3]] = CHSV(hueP, 255, 150);

if (AA >= 100) { 
 AA = 0; hueP++;  PiecesIndex++; if (PiecesIndex >= 5) {PiecesIndex = 0;} }

   FastLED.show(); 

}
