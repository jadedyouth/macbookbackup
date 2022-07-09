//New Caitlin Tree

#include <Wire.h>
#include <elapsedMillis.h>
#include <FastLED.h>
#define NUM_LEDS 250
#define DATA_PIN 17
CRGB leds[NUM_LEDS];



elapsedMillis SendTimer;


const int potPinZero = 0;    // select the input pin for the potentiometer
int potZero = 0;       // variable to store the value coming from the sensor

const int potPinOne = 1; 
int potOne = 0; 

const int potPinTwo = 2; 
int potTwo = 0; 

const int potPinThree = 3; 
int potThree = 0; 

const int potPinFour = 4; 
int potFour = 0; 

const int potPinFive = 5; 
int potFive = 0; 

elapsedMillis inputTimer;
elapsedMillis timerZero;
elapsedMillis timerOne;



byte hue = 95;
byte sat = 255;
byte val = 255;
byte universalBrightness;
byte masterHue;
int masterTime;
int modePositionZero;
int modePositionOne;
int Mode = 2;
int oldMode = 2;

byte pulseVal = 255;
byte pulseVal1 = 0;
byte Direction;
byte DirectionAA;
byte DirectionBB;
byte DirectionCC;
byte Directon1 = 1;
byte hue1;

byte section;
byte MdSend0;
byte MdSend1;

int index = 6;
int indexAA = 100;
int indexBB = 180;
int indexCC = 210;
int indexDD = NUM_LEDS;
int pulseValx;
int pulseValxAA;
int pulseValxBB;
int pulseValxCC;
int fadeFactor = 50;  //for altering the gap between  fad ins for fadeTrain -loops B
byte fadeOutFactor = 50;
byte tailLength = 6;
byte tailLengthAA = 6;
byte tailLengthBB = 6;
byte tailLengthCC = 6;
byte faerieGate;
byte faerieGateAA;
byte faerieGateBB;
byte sat0 = 255;
int huedex;
int hue2;
byte clearanceGate;
int rainindex = - 15;
byte rainindextail = 5;
int rainindexAA = - 25;
byte rainindextailAA = 3;
int rainindexBB = - 35;
byte rainindextailBB = 7;
int rainindexCC = - 45;
byte rainindextailCC = 2;
int rainindexDD = - 55;
byte rainindextailDD = 5;
int rainindexEE = - 65;
byte rainindextailEE = 3;
int rainindexFF = - 75;
byte rainindextailFF = 9;
int rainindexGG = - 85;
byte rainindextailGG = 4;
int rainindexHH = - 95;
byte rainindextailHH = 7;
int rainindexII = - 105;
byte rainindextailII = 2;
int rainindexJJ = - 115;
byte rainindextailJJ = 5;
int rainindexKK = - 125;
byte rainindextailKK = 3;
int rainindexLL = - 135;
byte rainindextailLL = 9;
int rainindexMM = - 145;
byte rainindextailMM = 4;
int rainindexNN = - 155;
byte rainindextailNN = 6;
int rainindexOO = - 165;
byte rainindextailOO = 3;
int rainindexPP = - 175;
byte rainindextailPP = 5;
int rainindexQQ = - 185;
byte rainindextailQQ = 3;
int rainindexRR = - 195;
byte rainindextailRR = 9;
int rainindexSS = - 205;
byte rainindextailSS = 4;
int rainindexTT = - 215;
byte rainindextailTT = 6;
int rainindexUU = - 225;
byte rainindextailUU = 3;
int rainindexVV = - 235;
byte rainindextailVV = 7;
int rainindexWW = - 245;
byte rainindextailWW = 4;
int rainindexXX = - 245;
byte rainindextailXX = 2;
int rainindexYY = - 255;
byte rainindextailYY = 6;
int rainindexZZ = - 265;
byte rainindextailZZ = 4;
int rainindexZZZ = - 275;
byte rainindextailZZZ = 9;

void setup() {
  // put your setup code here, to run once:
 FastLED.addLeds<WS2811,DATA_PIN,RGB>(leds, NUM_LEDS);
 for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
 FastLED.show();
Serial.begin (9600);
Wire.begin(); 
randomSeed(analogRead(15));

}

//void fadeall() { for(int i = 0; i < NUM_LEDS; i++) { leds[i].nscale8(250); } }

void loop() {


FastLED.setBrightness(universalBrightness);
/* */
switch (Mode) {

  case 0: SolidOn (); break; //solid on -loops A
  case 1: Blinker (); break; //blinks - loops A
  case 2: Fader (); break; //Fades in and out - loops A
  case 3: GroupFlash (); break; //lights in groups of three turn on and off - loops A
  case 4: FiftyFlash (); break; //lights in each manufactured group (50) randomly flash on and off - loops A
  case 5: interspersedFade (); break; //every second light is interspersed in one of two groups. they fade in and out separately with an off pause. it creates a wave feeling on blue - loops B
  case 6: fadeTrainBasic (); break; //four trains appear randomly and fade in and out along a random lenth - loops B
  case 7: fadeTrainMove ();  break; // a single train runs through the array, fading as it goes - loops C
  case 8: fadeTrainCrossover (); break; //Two trains with fading tails cross over - loops C
  case 9: faierie (); break; // a fairy dances at the bottom of the garden - loops C
  case 10: faieries (); break; //  fairies dance at the bottom of the garden - loops C
  case 11: darkenThrough (); break; // full on with darkening pixels passing along it - loops D
  case 12: darkenThroughTwo (); break; //full on with 2 sets of darkening pixels passing along it - loops D
  case 13: darkenThroughFour (); break;  //full on with 4 sets of darkening pixels passing along it - loops D
  case 14: fireflies (); break; //random lights on and then fade out - loops D
  case 15: saturationFade (); break; // fades into a higher saturation and back. the rainbow function ticks over at high sat- loops D
  case 16: swoosh (); break; //swooshes between two similar colours. the hue dial moves the top and bottom range. rainbow edges the top and bottom range along 4 each swoosh. - loops D
  case 17: digitalRain (); break; // the matrix loops E
  case 18: digitalTrain (); break; // like digital rain but theres a long gap of off leds so it looks more like a train - loops E

  }  



inputs ();
Export_to_display ();

}
