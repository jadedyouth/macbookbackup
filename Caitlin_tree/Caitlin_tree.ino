//caitlin tree
////////some stuff is commented out because redundant. some needs conversion from delay to millis. Tree still has major power problems. may have to conver to 12v.



#include <elapsedMillis.h>
#include <FastLED.h>
#define NUM_LEDS 250
#define DATA_PIN 6
CRGB leds[NUM_LEDS];
#include <Encoder.h>
Encoder myEnc(47, 2);
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 9, 10, 12, 11, 8);

//Buttons

const int ZerobuttonPin = 53; 
int ZerobuttonState = 0;    
elapsedMillis PushZero;
int PushZeroOutput;

const int LeftbuttonPin = 49; 
int LeftbuttonState = 0;    
elapsedMillis PushLeft;
int PushLeftOutput;

const int RightbuttonPin = 51; 
int RightbuttonState = 0;    
elapsedMillis PushRight;
int PushRightOutput;

elapsedMillis timer0;
//encoder
byte main_hue = 0;
int main_delay = 30;
byte main_val = 254;  ///no brightness higher than 254 because of display constraintes
int main_val_dsp;


byte CindexAA;
byte CindexAB = 250; 

byte indexAA;
byte indexAB;
byte indexAC; 
byte indexAD; 

byte Direction;

byte CurtainMd;
byte CurtainHue;
byte CurtainIndex;

byte pulseVal = 254;

long LED_LOOP = 0;


byte ChristmasIndexGreen = 0;
byte ChristmasIndexRed = 1;
byte ChristmasIndexWhite = 2;
elapsedMillis ChristmasTimer;
byte ChristmasIndexOff;


//Rain


int RainIndexA = 49 + 15;
byte RainTailA = 5;
int RainIndexAA = 49 + 15 + 10;
byte RainTailAA = 2;
int RainIndexAAA = 49 + 15 + 20;
byte RainTailAAA = 10;
int RainIndexAAAA = 49 + 15 + 30;
byte RainTailAAAA = 7;
int RainIndexAAAAA = 49 + 15 + 40;
byte RainTailAAAAA = 3;
int RainIndexAAAAAA = 49 + 15 + 50;
byte RainTailAAAAAA = 5;

int RainIndexC = 146 + 15;
byte RainTailC = 3;
int RainIndexCC = 146 + 15 + 10;
byte RainTailCC = 7;
int RainIndexCCC = 146 + 15 + 20;
byte RainTailCCC = 1;
int RainIndexCCCC = 146 + 15 + 30;
byte RainTailCCCC = 3;
int RainIndexCCCCC = 146 + 15 + 40;
byte RainTailCCCCC = 9;
int RainIndexCCCCCC = 146 + 15 + 50;
byte RainTailCCCCCC = 4;

int RainIndexE = 249 + 15;
byte RainTailE = 5;
int RainIndexEE = 249 + 15 + 10;
byte RainTailEE = 3;
int RainIndexEEE = 249 + 15 + 20;
byte RainTailEEE = 8;
int RainIndexEEEE = 249 + 15 + 30;
byte RainTailEEEE = 2;
int RainIndexEEEEE = 249 + 15 + 40;
byte RainTailEEEEE = 4;
int RainIndexEEEEEE = 249 + 15 + 50;
byte RainTailEEEEEE = 6;

int RainIndexB = 55 - 15;
byte RainTailB = 3;
int RainIndexBB = 55 - 15 - 10;
byte RainTailBB = 8;
int RainIndexBBB = 55 - 15 - 20;
byte RainTailBBB = 2;
int RainIndexBBBB = 55 - 15 - 30;
byte RainTailBBBB = 7;
int RainIndexBBBBB = 55 - 15 - 40;
byte RainTailBBBBB = 5;
int RainIndexBBBBBB = 55 - 15 - 50;
byte RainTailBBBBBB = 4;

int RainIndexD = 151 - 15;
byte RainTailD = 2;
int RainIndexDD = 151 - 15 - 10;
byte RainTailDD = 6;
int RainIndexDDD = 151 - 15 - 20;
byte RainTailDDD = 6;
int RainIndexDDDD = 151 - 15 - 30;
byte RainTailDDDD = 4;
int RainIndexDDDDD = 151 - 15 - 40;
byte RainTailDDDDD = 3;
int RainIndexDDDDDD = 151 - 15 - 50;
byte RainTailDDDDDD = 5;


byte RainHue = 190;
byte RainVal = 220; //220 for purple
elapsedMillis RainTimer;
int RainSpeed = 100;


byte hue;
byte brightness = 255;

elapsedMillis EncoderOne;
int encoder_output;

void setup() {
 FastLED.addLeds<WS2811,DATA_PIN,RGB>(leds, NUM_LEDS);
  pinMode(ZerobuttonPin, INPUT);
  pinMode(LeftbuttonPin, INPUT);
  pinMode(RightbuttonPin, INPUT);
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
 FastLED.show();
Serial.begin (9600);

lcd.begin(3, 2);
Welcome_Back ();
Reset_Position ();

 


}
long oldPosition  = -999;
void loop() {
//Pulse ();
//Cylon ();
//Iron_Curtain ();
//if (LED_LOOP == 4) {indexAA = 5; } //////////////////BAAAD FIX PLZ WHEN SOBER/ Have a switch over loop.
//Christmas (); //Loops 0

//for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 255, 100); } 


FastLED.setBrightness(brightness);
switch (LED_LOOP){

  case 0: for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, 255);} FastLED.show(); break;
  
  
  }

if (LED_LOOP == 0) {hue = encoder_output;}

//hue++; delay (10);
//Serial.println (LED_LOOP);
/*

if (LED_LOOP == 1){ Random_Flash (); } //Loops O
if (LED_LOOP == 2){ Random_Flash (); } //Loops O
if (LED_LOOP == 3){ Gradient (); } //Loops 0
if (LED_LOOP == 4){ Gradient (); } //Loops 0
if (LED_LOOP == 5){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(45, 255, 120); }   FastLED.show(); } //yellow      ////CHeck Power levels
if (LED_LOOP == 6){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(45, 255, 120); }  FastLED.show();  } 
if (LED_LOOP == 7){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 100); }  FastLED.show();  } //white
if (LED_LOOP == 8){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 100); }  FastLED.show();  } 
if (LED_LOOP == 9){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(95, 255, 254); }  FastLED.show();  } //green
if (LED_LOOP == 10){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(95, 255, 254); }  FastLED.show();  } 
if (LED_LOOP == 11){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(160, 255, 254); }  FastLED.show();  } //blue
if (LED_LOOP == 12){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(160, 255, 254); }  FastLED.show();  } 
if (LED_LOOP == 13){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(130, 255, 254); }  FastLED.show();  } //cyan - green because low power
if (LED_LOOP == 14){ for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(130, 255, 254); }  FastLED.show();  } 
if (LED_LOOP == 15){ Pulse (); main_hue = 0; } 
if (LED_LOOP == 16){ Pulse (); } 
//if (LED_LOOP == 17){ Cylon ();  } ////////////////////////////////////////////////////////////////////////////////Broken. STILL
//if (LED_LOOP == 18){ Cylon (); } 
if (LED_LOOP == 19){ Iron_Curtain ();} 
if (LED_LOOP == 20){ Iron_Curtain ();} 
if (LED_LOOP == 21){ Christmas (); }//Loops 0 
if (LED_LOOP == 22){ Christmas (); }//Loops 0 
if (LED_LOOP == 23){ SolidRainbow (); }//Loops 0 
if (LED_LOOP == 24){ SolidRainbow ();}//Loops 0 
if (LED_LOOP == 25){ DigitalRain (); RainHue = 95; }//Loops 1 
if (LED_LOOP == 26){ DigitalRain (); RainHue = 95;}//Loops 1
if (LED_LOOP == 27){ DigitalRain (); RainHue = 0; }//Loops 1 
if (LED_LOOP == 28){ DigitalRain (); RainHue = 0;}//Loops 1
if (LED_LOOP == 29){ DigitalRain (); RainHue = 190; }//Loops 1 
if (LED_LOOP == 30){ DigitalRain (); RainHue = 190;}//Loops 1



if (LED_LOOP >= 31) {LED_LOOP = 1;}
*/

 LCD_Display ();
 inputs(); 
 brightnesscontroll ();
}
