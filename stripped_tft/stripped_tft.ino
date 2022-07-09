//Stripped Back tft for tensy

#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"

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

void setup() {



 
  tft.begin();
    tft.fillScreen(ILI9341_BLACK);



}


void loop() {

    tft.setRotation(3);

  tft.setCursor(0, 0);
      tft.setTextColor(ILI9341_GREEN);
  tft.setTextSize(2);
   tft.println("Why dont pirates shower before they walk the plank?");
    delay(5000);

     tft.fillScreen(ILI9341_BLACK);
      tft.setCursor(0, 0);
      
     tft.println("Because theyll just wash up on shore later");
 
         delay(5000);
      tft.fillScreen(ILI9341_BLACK);
  }
