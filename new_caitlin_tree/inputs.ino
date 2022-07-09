void inputs () {
  
  if (inputTimer > 100) {
  
  potZero = analogRead(potPinZero); 
  potOne = analogRead(potPinOne); 
  potTwo = analogRead(potPinTwo); 
  potThree = analogRead(potPinThree); 
  potFour = analogRead(potPinFour); 
  potFive = analogRead(potPinFive); // read the value from the sensor

masterHue = 1023 - potZero/4;  //larger as it's turned further
sat = potOne/4; //smaller as it's turned further
universalBrightness = 1023 - potTwo/4; //larger as it's turned further
masterTime = potThree;  if (masterTime <= 10) {masterTime = 10;} //smaller as it's turned further, cannot be less than ten
modePositionZero = 1023 - potFour;
modePositionOne = 1023 - potFive;
  
 inputTimer = 0; }
  


  if (modePositionOne <= 150 && modePositionZero <= 150                          ) {Mode = 0; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 0; MdSend0 = 0; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 150 && modePositionZero <= 200) {Mode = 1; if (Mode != oldMode) {clearanceGate = 1;}  oldMode = 1;MdSend0 = 1; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 200 && modePositionZero <= 300) {Mode = 2; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 2; MdSend0 = 2; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 300 && modePositionZero <= 400) {Mode = 3; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 3; MdSend0 = 3; MdSend1 = 0;}
  if (modePositionOne <= 150 && modePositionZero > 400 && modePositionZero <= 500) {Mode = 4; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 4; MdSend0 = 4; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 500 && modePositionZero <= 600) {Mode = 5; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 5; MdSend0 = 5; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 600 && modePositionZero <= 700) {Mode = 6; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 6; MdSend0 = 6; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 700 && modePositionZero <= 800) {Mode = 7; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 7; MdSend0 = 7; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 800 && modePositionZero <= 900) {Mode = 8; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 8; MdSend0 = 8; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 900 && modePositionZero <= 1000){Mode = 9; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 9; MdSend0 = 9; MdSend1 = 0;} 
  if (modePositionOne <= 150 && modePositionZero > 1000                           ){Mode = 10; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 10; MdSend0 = 10; MdSend1 = 0;} 

  if (modePositionOne > 150 && modePositionOne <= 200 && modePositionZero <= 150) {Mode = 11; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 11; MdSend0 = 0; MdSend1 = 1;} 
  if (modePositionOne > 150 && modePositionOne <= 200 && modePositionZero > 150 && modePositionZero <= 200) {Mode = 12; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 12; MdSend0 = 1; MdSend1 = 1;} 
  if (modePositionOne > 150 && modePositionOne <= 200 && modePositionZero > 200 && modePositionZero <= 300) {Mode = 13; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 13; MdSend0 = 2; MdSend1 = 1;} 
  if (modePositionOne > 150 && modePositionOne <= 200 && modePositionZero > 300 && modePositionZero <= 400) {Mode = 14; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 14; MdSend0 = 3; MdSend1 = 1;} 
  if (modePositionOne > 150 && modePositionOne <= 200 && modePositionZero > 400 && modePositionZero <= 500) {Mode = 15; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 15; MdSend0 = 4; MdSend1 = 1;} 
  if (modePositionOne > 150 && modePositionOne <= 200 && modePositionZero > 500 && modePositionZero <= 600) {Mode = 16; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 16; MdSend0 = 5; MdSend1 = 1;} 
  if (modePositionOne > 150 && modePositionOne <= 200 && modePositionZero > 600 && modePositionZero <= 700) {Mode = 17; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 17; MdSend0 = 6; MdSend1 = 1;} 
  if (modePositionOne > 150 && modePositionOne <= 200 && modePositionZero > 700 && modePositionZero <= 800) {Mode = 18; if (Mode != oldMode) {clearanceGate = 1;} oldMode = 18; MdSend0 = 7; MdSend1 = 1;} 


  //for resetting values between modes
 if (clearanceGate == 1) {

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  
 
pulseVal = 255; 
pulseVal1 = 0;
faerieGate = 0;
faerieGateAA = 0;
faerieGateBB = 0;
Direction  = 0;
DirectionAA  = 0;
DirectionBB  = 0;
DirectionCC = 0;
Directon1 = 1;
hue1  = 0;
index = 6;
indexAA = 100;
indexBB = 180;
indexCC = 210;
indexDD = NUM_LEDS;
pulseValx  = 0;
pulseValxAA = 0;
pulseValxBB  = 0;
pulseValxCC  = 0;
fadeFactor = 50;  //for altering the gap between  fad ins for fadeTrain -loops B
fadeOutFactor = 50;
tailLength = 6;
tailLengthAA = 6;
tailLengthBB = 6;
tailLengthCC = 6;
sat0 = 255;
hue2 = 0;
huedex = 0;
 rainindex = - 15;
 rainindextail = 5;
 rainindexAA = - 25;
 rainindextailAA = 3;
 rainindexBB = - 35;
 rainindextailBB = 7;
 rainindexCC = - 45;
 rainindextailCC = 2;
 rainindexDD = - 55;
 rainindextailDD = 5;
 rainindexEE = - 65;
 rainindextailEE = 3;
 rainindexFF = - 75;
 rainindextailFF = 9;
 rainindexGG = - 85;
 rainindextailGG = 4;
 rainindexHH = - 95;
 rainindextailHH = 7;
 rainindexII = - 105;
 rainindextailII = 2;
 rainindexJJ = - 115;
 rainindextailJJ = 5;
 rainindexKK = - 125;
 rainindextailKK = 3;
 rainindexLL = - 135;
 rainindextailLL = 9;
 rainindexMM = - 145;
 rainindextailMM = 4;
 rainindexNN = - 155;
 rainindextailNN = 6;
 rainindexOO = - 165;
 rainindextailOO = 3;
 rainindexPP = - 175;
 rainindextailPP = 5;
 rainindexQQ = - 185;
 rainindextailQQ = 3;
 rainindexRR = - 195;
 rainindextailRR = 9;
 rainindexSS = - 205;
 rainindextailSS = 4;
 rainindexTT = - 215;
 rainindextailTT = 6;
 rainindexUU = - 225;
 rainindextailUU = 3;
 rainindexVV = - 235;
 rainindextailVV = 7;
 rainindexWW = - 245;
 rainindextailWW = 4;
 rainindexXX = - 245;
 rainindextailXX = 2;
 rainindexYY = - 255;
 rainindextailYY = 6;
 rainindexZZ = - 265;
 rainindextailZZ = 4;
 rainindexZZZ = - 275;
 rainindextailZZZ = 9;


 clearanceGate = 0; }

  } 
