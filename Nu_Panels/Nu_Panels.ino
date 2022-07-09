//Nu Panels

#include <elapsedMillis.h>
#include <FastLED.h>
#define LED_COUNT 450
struct CRGB leds[LED_COUNT];

/*
//dancing dragons  TAB A    ///////////////////////////////////////////////////////////////////////////
elapsedMillis dragonTimer; 
int dragonTime = 500; //time between dot change
byte dragonHue = 45; //hue of the dots
byte dragonSat = 255; //saturation of the dots
byte dragonVal = 50; //brightness of the dots
byte dragonStage; //which configuration of dots
elapsedMillis dragonStageTimer;
int dragonStageTime = 10000; //time it stays on one configuration of dots
*/
//Scanner  TAB B           ///////////////////////////////////////////////////////////////////////////
byte scannerVerticle;
byte scannerVerticleDirection; //up or down
byte scannerHorizontal;
byte scannerHorizontalDirection; //left or right
byte scannerHue = 95; //hue of lines
byte scannerSat = 255; //saturation of lines
byte scannerVal = 150; //brightness of lines
elapsedMillis scannerTimer;
int scannerTime = 150; //time between frames



const int p0_hline0[] {0,29,30,59,60,89,90,119,120,149}; //10
const int p0_hline1[] {1,28,31,58,61,88,91,118,121,148}; //10
const int p0_hline2[] {2,27,32,57,62,87,92,117,122,147}; //10
const int p0_hline3[] {3,26,33,56,63,86,93,116,123,146}; //10
const int p0_hline4[] {4,25,34,55,64,85,94,115,124,145}; //10

const int p0_hline5[] {5,24,35,54,65,84,95,114,125,144}; //10
const int p0_hline6[] {6,23,36,53,66,83,96,113,126,143}; //10
const int p0_hline7[] {7,22,37,52,67,82,97,112,127,142}; //10
const int p0_hline8[] {8,21,38,51,68,81,98,111,128,141}; //10
const int p0_hline9[] {9,20,39,50,69,80,99,110,129,140}; //10

const int p0_hline10[] {10,19,40,49,70,79,100,109,130,139}; //10
const int p0_hline11[] {11,18,41,48,71,78,101,108,131,138}; //10
const int p0_hline12[] {12,17,42,47,72,77,102,107,132,137}; //10
const int p0_hline13[] {13,16,43,46,73,76,103,106,133,136}; //10
const int p0_hline14[] {14,15,44,45,74,75,104,105,134,135}; //10
/*
//Panel 1 (p1)
const int p1_hline0[] {p1+0,p1+29,p1+30,p1+59,p1+60,p1+89,p1+90,p1+119,p1+120,p1+149}; //10
const int p1_hline1[] {p1+1,p1+28,p1+31,p1+58,p1+61,p1+88,p1+91,p1+118,p1+121,p1+148}; //10
const int p1_hline2[] {p1+2,p1+27,p1+32,p1+57,p1+62,p1+87,p1+92,p1+117,p1+122,p1+147}; //10
const int p1_hline3[] {p1+3,p1+26,p1+33,p1+56,p1+63,p1+86,p1+93,p1+116,p1+123,p1+146}; //10
const int p1_hline4[] {p1+4,p1+25,p1+34,p1+55,p1+64,p1+85,p1+94,p1+115,p1+124,p1+145}; //10 

const int p1_hline5[] {p1+5,p1+24,p1+35,p1+54,p1+65,p1+84,p1+95,p1+114,p1+125,p1+144}; //10
const int p1_hline6[] {p1+6,p1+23,p1+36,p1+53,p1+66,p1+83,p1+96,p1+113,p1+126,p1+143}; //10
const int p1_hline7[] {p1+7,p1+22,p1+37,p1+52,p1+67,p1+82,p1+97,p1+112,p1+127,p1+142}; //10
const int p1_hline8[] {p1+8,p1+21,p1+38,p1+51,p1+68,p1+81,p1+98,p1+111,p1+128,p1+141}; //10
const int p1_hline9[] {p1+9,p1+20,p1+39,p1+50,p1+69,p1+80,p1+99,p1+110,p1+129,p1+140}; //10

const int p1_hline10[] {p1+10,p1+19,p1+40,p1+49,p1+70,p1+79,p1+100,p1+109,p1+130,p1+139}; //10
const int p1_hline11[] {p1+11,p1+18,p1+41,p1+48,p1+71,p1+78,p1+101,p1+108,p1+131,p1+138}; //10
const int p1_hline12[] {p1+12,p1+17,p1+42,p1+47,p1+72,p1+77,p1+102,p1+107,p1+132,p1+137}; //10
const int p1_hline13[] {p1+13,p1+16,p1+43,p1+46,p1+73,p1+76,p1+103,p1+106,p1+133,p1+136}; //10
const int p1_hline14[] {p1+14,p1+15,p1+44,p1+45,p1+74,p1+75,p1+104,p1+105,p1+134,p1+135}; //10

//Panel 2 (p2)

const int p2_hline0[] {p2+0,p2+29,p2+30,p2+59,p2+60,p2+89,p2+90,p2+119,p2+120,p2+149}; //10
const int p2_hline1[] {p2+1,p2+28,p2+31,p2+58,p2+61,p2+88,p2+91,p2+118,p2+121,p2+148}; //10
const int p2_hline2[] {p2+2,p2+27,p2+32,p2+57,p2+62,p2+87,p2+92,p2+117,p2+122,p2+147}; //10
const int p2_hline3[] {p2+3,p2+26,p2+33,p2+56,p2+63,p2+86,p2+93,p2+116,p2+123,p2+146}; //10
const int p2_hline4[] {p2+4,p2+25,p2+34,p2+55,p2+64,p2+85,p2+94,p2+115,p2+124,p2+145}; //10

const int p2_hline5[] {p2+5,p2+24,p2+35,p2+54,p2+65,p2+84,p2+95,p2+114,p2+125,p2+144}; //10
const int p2_hline6[] {p2+6,p2+23,p2+36,p2+53,p2+66,p2+83,p2+96,p2+113,p2+126,p2+143}; //10
const int p2_hline7[] {p2+7,p2+22,p2+37,p2+52,p2+67,p2+82,p2+97,p2+112,p2+127,p2+142}; //10
const int p2_hline8[] {p2+8,p2+21,p2+38,p2+51,p2+68,p2+81,p2+98,p2+111,p2+128,p2+141}; //10
const int p2_hline9[] {p2+9,p2+20,p2+39,p2+50,p2+69,p2+80,p2+99,p2+110,p2+129,p2+140}; //10

const int p2_hline10[] {p2+10,p2+19,p2+40,p2+49,p2+70,p2+79,p2+100,p2+109,p2+130,p2+139}; //10
const int p2_hline11[] {p2+11,p2+18,p2+41,p2+48,p2+71,p2+78,p2+101,p2+108,p2+131,p2+138}; //10
const int p2_hline12[] {p2+12,p2+17,p2+42,p2+47,p2+72,p2+77,p2+102,p2+107,p2+132,p2+137}; //10
const int p2_hline13[] {p2+13,p2+16,p2+43,p2+46,p2+73,p2+76,p2+103,p2+106,p2+133,p2+136}; //10
const int p2_hline14[] {p2+14,p2+15,p2+44,p2+45,p2+74,p2+75,p2+104,p2+105,p2+134,p2+135}; //10
*/
/*
//the matrix ooooh////////////////////////////////////////////////////////////////////////////
//////this is the magic i copied and re copied years ago
const uint8_t kMatrixWidth = 15;
const uint8_t kMatrixHeight = 10;
const bool    kMatrixSerpentineLayout = true;
uint16_t XY( uint8_t y, uint8_t x)
{
  uint16_t i;
  
  if( kMatrixSerpentineLayout == false) {
    i = (y * kMatrixWidth) + x;
  }

  if( kMatrixSerpentineLayout == true) {
    if( y & 0x01) {
      // Odd rows run backwards
      uint8_t reverseX = (kMatrixWidth - 1) - x;
      i = (y * kMatrixWidth) + reverseX;
    } else {
      // Even rows run forwards
      i = (y * kMatrixWidth) + x;
    }
  }
  
  return i;
}

//fireworks TAB C
int x = 3;
int y = 3;
byte middleHue;
byte hue;
byte sat = 255;
byte val = 50;
byte verticalFactor = 0;
byte horizontalFactor = 0;
byte fireworksStage;

int AAx;
int AAy;
byte AAmiddleHue;
byte AAhue = 95;
byte AAsat = 255;
byte AAval = 50;
byte AAverticalFactor = 0;
byte AAhorizontalFactor = 0;
byte AAfireworksStage;
int AAseparater;

int ABx;
int ABy;
byte ABmiddleHue;
byte ABhue = 200;
byte ABsat = 255;
byte ABval = 50;
byte ABverticalFactor = 0;
byte ABhorizontalFactor = 0;
byte ABfireworksStage;
int ABseparater;

int fireCounter;
int fireXYindex;
*/
int verticalCross [] {75,76,77,78,79,80,81,83,84,85,86,87,88}; //14
int horizontalCross [] {}; //9

void setup() {

FastLED.addLeds<WS2811,17,GRB>(leds, LED_COUNT); 
 for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);}  LEDS.show();   
randomSeed(analogRead(12));


}

void loop() {



 
   


//fireWorksBoxes (); //C

//fireWorksThreePointFive (); //C
//fireWorksThree (); //C
//fireworksTwo (); //C
//fireworksOne (); //C 
//dragons(); //TAB A
scanner (); //TAB B
}
