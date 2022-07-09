//new caitlin tree display

//Stripped Back tft for tensy
#include <Wire.h>
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"
#include <elapsedMillis.h>

elapsedMillis clearer; 

// For the Adafruit shield, these are the default.
#define TFT_DC 14
#define TFT_CS 15
#define TFT_RST 16
#define TFT_MOSI 11
#define TFT_MISO 12
#define TFT_CLK 13

// Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC
//Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
// If using the breakout, change pins as desired
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

int potZero;
int potOne;
int potTwo;
int potThree;
int potFour;
int potFive;

int potThreeConverted;
int potTwoConverted;
int potOneConverted;


int JokeMd;
int JokeGate;
int JokeHat;

byte Mode;

void setup() {

  Wire.begin(8);                // join i2c bus with address #8
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output

 
  tft.begin();

  
tft.setRotation(3);    

tft.fillScreen(ILI9341_BLACK); /*
tft.setTextColor(ILI9341_RED);  tft.setTextSize(2);
tft.setCursor(20, 80);
   tft.println("Welcome Back Aunty Pam");  
   
    delay (1000); 
    tft.fillScreen(ILI9341_BLACK); */


randomSeed(analogRead(3));

}


void loop() {

StatDisplay ();




Jks ();
  
  }
