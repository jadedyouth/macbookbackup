// FastLED - Version: Latest 
#include <FastLED.h>
#include <elapsedMillis.h>
#define NUM_LEDS 141 

#define DATA_PIN 11
#define CLOCK_PIN 12
/*
wheeliebin 2020
*/

elapsedMillis MasterTImer;

CRGB leds[NUM_LEDS];
int index;

byte hue;
int counter;

int undex = NUM_LEDS;
byte loo;

byte gate;
int halfdex = NUM_LEDS/2;
int loodex = NUM_LEDS/2;

byte gateAA;
int halfdexAA = NUM_LEDS/2;
int loodexAA = NUM_LEDS/2;

byte gateAB = 99;
int halfdexAB = NUM_LEDS/2;
int loodexAB = NUM_LEDS/2;

byte gateAC = 99;
int halfdexAC = NUM_LEDS/2;
int loodexAC = NUM_LEDS/2;

byte gateAD = 99;
int halfdexAD = NUM_LEDS/2;
int loodexAD = NUM_LEDS/2;

byte gateAE = 99;
int halfdexAE = NUM_LEDS/2;
int loodexAE = NUM_LEDS/2;

byte gateAF = 99;
int halfdexAF = NUM_LEDS/2;
int loodexAF = NUM_LEDS/2;

byte gateAG = 99;
int halfdexAG = NUM_LEDS/2;
int loodexAG = NUM_LEDS/2;

byte gateAH = 0;
int halfdexAH = NUM_LEDS/2;
int loodexAH = NUM_LEDS/2;

byte gateAI = 99;
int halfdexAI = NUM_LEDS/2;
int loodexAI = NUM_LEDS/2;

byte gateAJ = 99;
int halfdexAJ = NUM_LEDS/2;
int loodexAJ = NUM_LEDS/2;

byte gateAK = 99;
int halfdexAK = NUM_LEDS/2;
int loodexAK = NUM_LEDS/2;

byte gateAL = 99;
int halfdexAL = NUM_LEDS/2;
int loodexAL = NUM_LEDS/2;

byte gateAM = 99;
int halfdexAM = NUM_LEDS/2;
int loodexAM = NUM_LEDS/2;

byte gateAN = 99;
int halfdexAN = NUM_LEDS/2;
int loodexAN = NUM_LEDS/2;



byte Master = 0; 
long specificTime;

int val = 00;
byte factor = 2;

int hueFactor = 3;

byte rainhue = 160;
byte reach;
const byte barVal = 255;
const byte barHue = 160;
const byte barSat = 160;
byte stage;
byte stageAA = 99;
int flex;
const byte flexmax = 3;
const int delayset = 100;



const int barZero [] {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17}; //18
const int barOne [] {8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}; //18
const int barTwo [] {18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35}; //18
const int barThree [] {26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43}; //18
const int barFour [] {36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53}; //18
const int barFive [] {43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60}; //18

const int barSix [] {NUM_LEDS - 1,NUM_LEDS - 1 - 1,NUM_LEDS - 1 - 2,NUM_LEDS - 1 - 3,NUM_LEDS - 1 - 4,NUM_LEDS - 1 - 5,NUM_LEDS - 1 - 6,NUM_LEDS - 1 - 7,NUM_LEDS - 1 - 8,NUM_LEDS - 1 - 9,NUM_LEDS - 1 - 10,NUM_LEDS - 1 - 11,NUM_LEDS - 1 - 12,NUM_LEDS - 1 - 13,NUM_LEDS - 1 - 14,NUM_LEDS - 1 - 15,NUM_LEDS - 1 - 16,NUM_LEDS - 1 - 17}; //18
const int barSeven[] {NUM_LEDS - 1 - 8,NUM_LEDS - 1 - 9,NUM_LEDS - 1 - 10,NUM_LEDS - 1 - 11,NUM_LEDS - 1 - 12,NUM_LEDS - 1 - 13,NUM_LEDS - 1 - 14,NUM_LEDS - 1 - 15,NUM_LEDS - 1 - 16,NUM_LEDS - 1 - 17,NUM_LEDS - 1 - 18,NUM_LEDS - 1 - 19,NUM_LEDS - 1 - 20,NUM_LEDS - 1 - 21,NUM_LEDS - 1 - 22,NUM_LEDS - 1 - 23,NUM_LEDS - 1 - 24,NUM_LEDS - 1 - 25}; //18
const int barEight [] {NUM_LEDS - 1 - 18,NUM_LEDS - 1 - 19,NUM_LEDS - 1 - 20,NUM_LEDS - 1 - 21,NUM_LEDS - 1 - 22,NUM_LEDS - 1 - 23,NUM_LEDS - 1 - 24,NUM_LEDS - 1 - 25,NUM_LEDS - 1 - 26,NUM_LEDS - 1 - 27,NUM_LEDS - 1 - 28,NUM_LEDS - 1 - 29,NUM_LEDS - 1 - 30,NUM_LEDS - 1 - 31,NUM_LEDS - 1 - 32,NUM_LEDS - 1 - 33,NUM_LEDS - 1 - 34,NUM_LEDS - 1 - 35}; //18
const int barNine [] {NUM_LEDS - 1 - 26,NUM_LEDS - 1 - 27,NUM_LEDS - 1 - 28,NUM_LEDS - 1 - 29,NUM_LEDS - 1 - 30,NUM_LEDS - 1 - 31,NUM_LEDS - 1 - 32,NUM_LEDS - 1 - 33,NUM_LEDS - 1 - 34,NUM_LEDS - 1 - 35,NUM_LEDS - 1 - 36,NUM_LEDS - 1 - 37,NUM_LEDS - 1 - 38,NUM_LEDS - 1 - 39,NUM_LEDS - 1 - 40,NUM_LEDS - 1 - 41,NUM_LEDS - 1 - 42,NUM_LEDS - 1 - 43}; //18
const int barTen[] {NUM_LEDS - 1 - 36,NUM_LEDS - 1 - 37,NUM_LEDS - 1 - 38,NUM_LEDS - 1 - 39,NUM_LEDS - 1 - 40,NUM_LEDS - 1 - 41,NUM_LEDS - 1 - 42,NUM_LEDS - 1 - 43,NUM_LEDS - 1 - 44,NUM_LEDS - 1 - 45,NUM_LEDS - 1 - 46,NUM_LEDS - 1 - 47,NUM_LEDS - 1 - 48,NUM_LEDS - 1 - 49,NUM_LEDS - 1 - 50,NUM_LEDS - 1 - 51,NUM_LEDS - 1 - 52,NUM_LEDS - 1 - 53}; //18
const int barEleven [] {NUM_LEDS - 1 - 43,NUM_LEDS - 1 - 44,NUM_LEDS - 1 - 45,NUM_LEDS - 1 - 46,NUM_LEDS - 1 - 47,NUM_LEDS - 1 - 48,NUM_LEDS - 1 - 49,NUM_LEDS - 1 - 50,NUM_LEDS - 1 - 51,NUM_LEDS - 1 - 52,NUM_LEDS - 1 - 53,NUM_LEDS - 1 - 54,NUM_LEDS - 1 - 55,NUM_LEDS - 1 - 56,NUM_LEDS - 1 - 57,NUM_LEDS - 1 - 58,NUM_LEDS - 1 - 59,NUM_LEDS - 1 - 60}; //18

byte tail = 3;


void setup() { 

  FastLED.addLeds<APA102,DATA_PIN,CLOCK_PIN,BGR>(leds,NUM_LEDS);
  FastLED.setBrightness(84); 
  Serial.begin (9600);
}

void loop() {






//Loop_One (); // TAB A
//Loop_Two (); //TAB A
//Loop_Three (); //TAB A
//Loop_Four (); //TAB A
//Loop_Five (); //TAB A
//Loop_Six (); //TAB A
//Loop_Seven (); //TAB B
//Loop_Eight (); //TAB C old digital rain
//Loop_Nine (); //TAB D
//Loop_Ten (); //TAB D
//Loop_Eleven (); //TAB D
//Loop_Twelve (); //TAB B
//Loop_Thirteen (); //TAB E Red ease in and out
//Loop_Fourteen (); //TAB Rainbow ease In and out
//Loop_Fifteen (); //TAB F Strobing Bars
//Loop_Sixteen (); //TAB F New digital Rain



switch (Master) {
  case 0: Loop_One (); break; // single counter clockwise
    case 1: Loop_Three (); break; //single clockwise
      case 2: Loop_Two (); break; //4 counter clockwise
        case 3: Loop_Four (); break; //4 clockwise
          case 4: Loop_Five (); break; //4 both directions
           // case 5: Loop_Six (); break; //train both directions
              case 5: Loop_Seven (); break; //random fill slow change from red along the spectrum
                case 6: Loop_Sixteen (); break; //new digital rain blue
                  case 7: Loop_Nine (); break; //bouncing equilizer bars
                   case 8: Loop_Ten ();  break; //all on rainbow transition
                    case 9: Loop_Eleven (); break;
                     case 10: Loop_Twelve (); break; //random rainbow fill with clever fadeout
                      case 11: Loop_Thirteen(); break; //red ease in and out
                       case 12: Loop_Fourteen(); break; //rainbow ease in and out
                        case 13: Loop_Fifteen (); break; //strobing bars
                        

                  break;
  

  }


//master timing
if (Master < 6) {specificTime = 20800;} if (Master >= 6) {specificTime = 100000;}

//demo reel Timing
//if (Master < 6) {specificTime = 3200; } if (Master >= 6) {specificTime = 10000;} 

if (MasterTImer >= specificTime) {Master++; if (Master > 13) {Master = 0;} MasterTImer = 0; 

 index  = 0;

 hue  = 0;
 counter  = 0;

 undex = NUM_LEDS;
 loo  = 0;

 gate = 0;
 halfdex = NUM_LEDS/2;
 loodex = NUM_LEDS/2;

stageAA = 99;

 gateAA = 99;
 halfdexAA = NUM_LEDS/2;
 loodexAA = NUM_LEDS/2;

 gateAB = 99;
 halfdexAB = NUM_LEDS/2;
 loodexAB = NUM_LEDS/2;

 gateAC = 99;
 halfdexAC = NUM_LEDS/2;
 loodexAC = NUM_LEDS/2;

 gateAD = 99;
 halfdexAD = NUM_LEDS/2;
 loodexAD = NUM_LEDS/2;

 gateAE = 99;
 halfdexAE = NUM_LEDS/2;
 loodexAE = NUM_LEDS/2;

 gateAF = 99;
 halfdexAF = NUM_LEDS/2;
 loodexAF = NUM_LEDS/2;

 gateAG = 99;
 halfdexAG = NUM_LEDS/2;
 loodexAG = NUM_LEDS/2;

 gateAH = 0;
 halfdexAH = NUM_LEDS/2;
 loodexAH = NUM_LEDS/2;

 gateAI = 99;
 halfdexAI = NUM_LEDS/2;
 loodexAI = NUM_LEDS/2;

 gateAJ = 99;
 halfdexAJ = NUM_LEDS/2;
 loodexAJ = NUM_LEDS/2;

gateAK = 99;
halfdexAK = NUM_LEDS/2;
loodexAK = NUM_LEDS/2;

gateAL = 99;
halfdexAL = NUM_LEDS/2;
loodexAL = NUM_LEDS/2;

gateAM = 99;
halfdexAM = NUM_LEDS/2;
loodexAM = NUM_LEDS/2;

gateAN = 99;
halfdexAN = NUM_LEDS/2;
loodexAN = NUM_LEDS/2;



val = 00;
factor = 2;

hueFactor = 3;

reach = 0;

stage = 0;
flex = 0;






}




  }
