//Poles
#include <EEPROM.h>
#include <FastLED.h>
#include <elapsedMillis.h>
#define NUM_LEDS 144*2 


#define DATA_PIN 3
#define CLOCK_PIN 2
#define DATA_PIN1 8 
#define CLOCK_PIN1 9 

elapsedMillis timer0;
elapsedMillis intensityTimer;
elapsedMillis mastertimer;
int masterspeed = 30000;
byte mastermode = 5;
byte intensitymode = 0;

int index;
int hue;
int val;


//loop3 
byte section;
int loop3spd = 300;

//loop 4
int raindexA  = 184;
int raindexAtail = 10;
int raindexB = 214;
int raindexBtail = 5;
int raindexC = 244;
int raindexCtail = 20;
int raindexD = 274;
int raindexDtail = 15;
int raindexE = 304;
int raindexEtail = 20;
int raindexF = 334;
int raindexFtail = 5;
int raindexG = 364;
int raindexGtail = 15;

int raindexAA  = 184 +144 +10;
int raindexAAtail = 5;
int raindexBB = 214 +144 +10;
int raindexBBtail = 15;
int raindexCC = 244 +144 +10;
int raindexCCtail = 10;
int raindexDD = 274 +144 +10;
int raindexDDtail = 20;
int raindexEE = 304 +144+10;
int raindexEEtail = 5;
int raindexFF = 334 +144+10;
int raindexFFtail = 15;
int raindexGG = 364 +144+10;
int raindexGGtail = 20;

int rainval = 255;
byte rainspd = 0; //speed
byte rainmd = 0; //pulse on 1
byte raindmddir;
int rainhue = 0;
byte rainhuemd = 4; //colour
byte rainhuedir;


//loop 5
int warpdexA  = 106;
int warpdexAtail = 10;
int warpdexB = 136;
int warpdexBtail = 5;
int warpdexC = 166;
int warpdexCtail = 20;

int warpdexD = 42;
int warpdexDtail = 15;
int warpdexE = 12;
int warpdexEtail = 20;
int warpdexF = - 18;
int warpdexFtail = 20;

int warpdexAA  = 106 +144 +10;
int warpdexAAtail = 5;
int warpdexBB = 136 +144 +10;
int warpdexBBtail = 15;
int warpdexCC = 166 +144 +10;
int warpdexCCtail = 10;

int warpdexDD = 42 +144 +10;
int warpdexDDtail = 20;
int warpdexEE = 12 +144 +10;
int warpdexEEtail = 20;
int warpdexFF = -18 +144 +10;
int warpdexFFtail = 20;

int warpval = 255;
int warphue = 0;
byte warpmin = 8;
byte warphuemd = 5; //colour
byte warphuedir;
byte warpspd = 0; //speed


//loop 6
int graftlowA;
byte grafthighA;
int graftlowB;
byte grafthighB;

byte graftdirection;
byte graftspeed = 35; //35

int grafthue;
byte graftsat = 255;
byte graftval = 255;
byte graftmode = 0;




int hue0;

//loop 7
int pulsehue;
byte pulsesat = 255;
byte pulseval = 71;
byte pulsedir;
elapsedMillis pulsetimer;
int pulsetime = 20;
byte pulsehuevariant;
elapsedMillis pulasevarianttimer;

CRGB leds[NUM_LEDS];

byte epromval;
int intensitystep;
void setup() {
/*
epromval = EEPROM.read(0);


epromval++;
EEPROM.write(0, epromval);

intensitymode = epromval;
*/
  Serial.begin (9600);
   FastLED.addLeds<APA102,DATA_PIN,CLOCK_PIN,BGR>(leds, 144);
  FastLED.addLeds<APA102,DATA_PIN1,CLOCK_PIN1,BGR>(leds,144,NUM_LEDS);
   for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 0, 0);}
//start_loop (); //A
}

void loop() {

 //for (int i = 0; i< NUM_LEDS; i++){ leds[i] = CHSV(0, 255, 255);} FastLED.show(); 

if (intensitymode == 0) {masterloop (); } //G 

/*
//* 60 * 3
if (intensityTimer >= 60000 ) { intensitystep ++; if( intensitystep >= 300) {intensitymode = 1; Serial.println (intensitystep);  }intensityTimer = 0;
   }



//if (pulsehuevariant == 0) {  pulsehue++; }  if (pulsehuevariant == 1) {  pulsehue = pulsehue + 2; } if (pulasevarianttimer >= 30000) {pulsehuevariant++; if (pulsehuevariant >= 2) {pulsehuevariant = 0;} pulasevarianttimer = 0;}

if (intensitymode == 1) { loop_seven ();   pulsetime = 0;   if (pulsehuevariant == 0) {  pulsehue++; }  if (pulsehuevariant == 1) {  pulsehue = pulsehue + 3; } if (pulasevarianttimer >= 30000) {pulsehuevariant++; if (pulsehuevariant >= 2) {pulsehuevariant = 0;} pulasevarianttimer = 0;}
 }   
*/

 
//loop3spd = 200; rainspd = 2;   warpspd = 2;  graftspeed = 15;  rainhuemd = 3; rainmd = 1;   warphuemd = 3;
 
  //Serial.println(epromval);
//for (int i = 0; i< 144; i++){ leds[i] = CHSV(220, 255, 255);} 
//for (int i = 144; i< NUM_LEDS; i++){ leds[i] = CHSV(180, 255, 255);}  

//FastLED.show(); 
//loop_zero (); //D  
//loop_one(); //B
//loop_two (); //C
//loop_three(); //E
//leds[143] = CHSV(160, 200, 130);  
  //FastLED.show();    
//loop_four (); //F
//loop_five (); //H
//loop_six ();//I
//loop_seven (); //J
}
