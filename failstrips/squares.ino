/*

int squstartcounter;
byte squglobalgate;
int squgap = 10;
int squarr[750] = {}; //initialise the array with max number of values
int squno;
byte squupspd = 2;
byte squdownspd = 4;


byte A;
byte squAxpnl;
int squAx;
int squAi;
int squAy;
int squAj;
byte squAstate;
byte squAhue;
byte squAsat = 255;
int squAval = 64;
byte squAchk;


byte B = 0;
byte squBxpnl;
int squBx;
int squBi;
int squBy;
int squBj;
byte squBstate;
byte squBhue;
byte squBsat = 255;
int squBval = 64;
byte squBchk;

byte C = 0;
byte squCxpnl;
int squCx;
int squCi;
int squCy;
int squCj;
byte squCstate;
byte squChue;
byte squCsat = 255;
int squCval = 64;
byte squCchk;

byte D = 0;
byte squDxpnl;
int squDx;
int squDi;
int squDy;
int squDj;
byte squDstate;
byte squDhue;
byte squDsat = 255;
int squDval = 64;
byte squDchk;

byte E = 0;
byte squExpnl;
int squEx;
int squEi;
int squEy;
int squEj;
byte squEstate;
byte squEhue;
byte squEsat = 255;
int squEval = 64;
byte squEchk;

byte F = 0;
byte squFxpnl;
int squFx;
int squFi;
int squFy;
int squFj;
byte squFstate;
byte squFhue;
byte squFsat = 255;
int squFval = 64;
byte squFchk;

byte G = 0;
byte squGxpnl;
int squGx;
int squGi;
int squGy;
int squGj;
byte squGstate;
byte squGhue;
byte squGsat = 255;
int squGval = 64;
byte squGchk;

byte H = 0;
byte squHxpnl;
int squHx;
int squHi;
int squHy;
int squHj;
byte squHstate;
byte squHhue;
byte squHsat = 255;
int squHval = 64;
byte squHchk;

byte I = 0;
byte squIxpnl;
int squIx;
int squIi;
int squIy;
int squIj;
byte squIstate;
elapsedMillis squItimer;
byte squIhue;
byte squIsat = 255;
int squIval = 64;
byte squIchk;

byte J = 0;
byte squJxpnl;
int squJx;
int squJi;
int squJy;
int squJj;
byte squJstate;
byte squJhue;
byte squJsat = 255;
int squJval = 64;
byte squJchk;

byte K = 0;
byte squKxpnl;
int squKx;
int squKi;
int squKy;
int squKj;
byte squKstate;
byte squKhue;
byte squKsat = 255;
int squKval = 64;
byte squKchk;

byte L = 0;
byte squLxpnl;
int squLx;
int squLi;
int squLy;
int squLj;
byte squLstate;
byte squLhue;
byte squLsat = 255;
int squLval = 64;
byte squLchk;

byte M = 0;
byte squMxpnl;
int squMx;
int squMi;
int squMy;
int squMj;
byte squMstate;
byte squMhue;
byte squMsat = 255;
int squMval = 64;
byte squMchk;

byte N = 0;
byte squNxpnl;
int squNx;
int squNi;
int squNy;
int squNj;
byte squNstate;
byte squNhue;
byte squNsat = 255;
int squNval = 64;
byte squNchk;

byte O = 0;
byte squOxpnl;
int squOx;
int squOi;
int squOy;
int squOj;
byte squOstate;
byte squOhue;
byte squOsat = 255;
int squOval = 64;
byte squOchk;

byte P = 0;
byte squPxpnl;
int squPx;
int squPi;
int squPy;
int squPj;
byte squPstate;
byte squPhue;
byte squPsat = 255;
int squPval = 64;
byte squPchk;

byte Q = 0;
byte squQxpnl;
int squQx;
int squQi;
int squQy;
int squQj;
byte squQstate;
byte squQhue;
byte squQsat = 255;
int squQval = 64;
byte squQchk;

byte R = 0;
byte squRxpnl;
int squRx;
int squRi;
int squRy;
int squRj;
byte squRstate;
byte squRhue;
byte squRsat = 255;
int squRval = 64;
byte squRchk;

byte S = 0;
byte squSxpnl;
int squSx;
int squSi;
int squSy;
int squSj;
byte squSstate;
byte squShue;
byte squSsat = 255;
int squSval = 64;
byte squSchk;

void squares (){

if (squglobalgate == 0) {
  for (int i = 0; i < 750; i++){squarr[i] = 0;} //clear the array to start

  squglobalgate = 1;
}
if (squglobalgate == 1){ squstartcounter = squstartcounter + 4;
////////////////////////////////////////////////////////////////////////////////////Square A


 if (squstartcounter > squgap*A) {
if (squAstate == 0){

//if (squAchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squAxpnl = random (0,5);
if (squAxpnl == 0) {squAx = random (0,9);} if (squAxpnl == 1) {squAx = random (11,19);} if (squAxpnl == 2) {squAx = random (21,29);}
if (squAxpnl == 3) {squAx = random (31,39);} if (squAxpnl == 4) {squAx = random (41,49);}
squAi = squAx + 1;
squAy = random (0,13);
squAj = squAy+1;

if (squarr[squAx] != 1 && squarr[squAi] != 1 && squarr[squAy] != 1 && squarr[squAj] != 1  ){  squAstate = 1;} } //end while

if (squAstate == 1){
//adds the square to the array
squarr[squAx] = 1;
squarr[squAi] = 1;
squarr[squAy] = 1;
squarr[squAj] = 1; 

squAhue = random (0,255);
//squAsat = random (200,255);
 squAstate = 2;  }

if (squAstate == 2) { //fade in

 leds[XY(squAx, squAy)]  = CHSV( squAhue, squAsat, squAval);
 leds[XY(squAi, squAy)]  = CHSV( squAhue, squAsat, squAval);
 leds[XY(squAx, squAj)]  = CHSV( squAhue, squAsat, squAval);
 leds[XY(squAi, squAj)]  = CHSV( squAhue, squAsat, squAval);

squAval = squAval + squupspd;
if (squAval >= 250){squAval = 255;}

if (squAval == 255){  squAstate = 3;  } }

if (squAstate == 3) { //fade out

squAval = squAval - squdownspd;
 if (squAval <= 36) {squAval = 0;}

 leds[XY(squAx, squAy)]  = CHSV( squAhue, squAsat, squAval);
 leds[XY(squAi, squAy)]  = CHSV( squAhue, squAsat, squAval);
 leds[XY(squAx, squAj)]  = CHSV( squAhue, squAsat, squAval);
 leds[XY(squAi, squAj)]  = CHSV( squAhue, squAsat, squAval);

 
  
if (squAval == 0){ squAval = 64; squAchk = 0; //reset everything and remove the square from the array
squarr[squAx] = 0;
squarr[squAi] = 0;
squarr[squAy] = 0;
squarr[squAj] = 0;
squAstate = 0;} }



 } //end square A



 


////////////////////////////////////////////////////////////////////////////////////Square B

 if (squstartcounter > squgap*B) {
if (squBstate == 0){

//if (squBchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squBxpnl = random (0,5);
if (squBxpnl == 0) {squBx = random (0,9);} if (squBxpnl == 1) {squBx = random (11,19);} if (squBxpnl == 2) {squBx = random (21,29);}
if (squBxpnl == 3) {squBx = random (31,39);} if (squBxpnl == 4) {squBx = random (41,49);}
squBi = squBx + 1;
squBy = random (0,13);
squBj = squBy+1;

if (squarr[squBx] != 1 && squarr[squBi] != 1 && squarr[squBy] != 1 && squarr[squBj] != 1  ){  squBstate = 1;} } //end while

if (squBstate == 1){
//adds the square to the array
squarr[squBx] = 1;
squarr[squBi] = 1;
squarr[squBy] = 1;
squarr[squBj] = 1; 

squBhue = random (0,255);
//squBsat = random (200,255);
 squBstate = 2;  }

if (squBstate == 2) { //fade in

 leds[XY(squBx, squBy)]  = CHSV( squBhue, squBsat, squBval);
 leds[XY(squBi, squBy)]  = CHSV( squBhue, squBsat, squBval);
 leds[XY(squBx, squBj)]  = CHSV( squBhue, squBsat, squBval);
 leds[XY(squBi, squBj)]  = CHSV( squBhue, squBsat, squBval);

squBval = squBval + squupspd;
if (squBval >= 250){squBval = 255;}

if (squBval == 255){  squBstate = 3;  } }

if (squBstate == 3) { //fade out

squBval = squBval - squdownspd;
 if (squBval <= 36) {squBval = 0;}

 leds[XY(squBx, squBy)]  = CHSV( squBhue, squBsat, squBval);
 leds[XY(squBi, squBy)]  = CHSV( squBhue, squBsat, squBval);
 leds[XY(squBx, squBj)]  = CHSV( squBhue, squBsat, squBval);
 leds[XY(squBi, squBj)]  = CHSV( squBhue, squBsat, squBval);

 
  
if (squBval == 0){ squBval = 64; squBchk = 0; //reset everything and remove the square from the array
squarr[squBx] = 0;
squarr[squBi] = 0;
squarr[squBy] = 0;
squarr[squBj] = 0;
squBstate = 0;} }



 } //end square B






 

////////////////////////////////////////////////////////////////////////////////////Square C

 if (squstartcounter > squgap*C) {
if (squCstate == 0){

//if (squCchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squCxpnl = random (0,5);
if (squCxpnl == 0) {squCx = random (0,9);} if (squCxpnl == 1) {squCx = random (11,19);} if (squCxpnl == 2) {squCx = random (21,29);}
if (squCxpnl == 3) {squCx = random (31,39);} if (squCxpnl == 4) {squCx = random (41,49);}
squCi = squCx + 1;
squCy = random (0,13);
squCj = squCy+1;

if (squarr[squCx] != 1 && squarr[squCi] != 1 && squarr[squCy] != 1 && squarr[squCj] != 1  ){  squCstate = 1;} } //end while

if (squCstate == 1){
//adds the square to the array
squarr[squCx] = 1;
squarr[squCi] = 1;
squarr[squCy] = 1;
squarr[squCj] = 1; 

squChue = random (0,255);
//squCsat = random (200,255);
 squCstate = 2;  }

if (squCstate == 2) { //fade in

 leds[XY(squCx, squCy)]  = CHSV( squChue, squCsat, squCval);
 leds[XY(squCi, squCy)]  = CHSV( squChue, squCsat, squCval);
 leds[XY(squCx, squCj)]  = CHSV( squChue, squCsat, squCval);
 leds[XY(squCi, squCj)]  = CHSV( squChue, squCsat, squCval);

squCval = squCval + squupspd;
if (squCval >= 250){squCval = 255;}

if (squCval == 255){  squCstate = 3;  } }

if (squCstate == 3) { //fade out

squCval = squCval - squdownspd;
 if (squCval <= 36) {squCval = 0;}

 leds[XY(squCx, squCy)]  = CHSV( squChue, squCsat, squCval);
 leds[XY(squCi, squCy)]  = CHSV( squChue, squCsat, squCval);
 leds[XY(squCx, squCj)]  = CHSV( squChue, squCsat, squCval);
 leds[XY(squCi, squCj)]  = CHSV( squChue, squCsat, squCval);

 
  
if (squCval == 0){ squCval = 64; squCchk = 0; //reset everything and remove the square from the array
squarr[squCx] = 0;
squarr[squCi] = 0;
squarr[squCy] = 0;
squarr[squCj] = 0;
squCstate = 0;} }



 } //end square C






////////////////////////////////////////////////////////////////////////////////////Square D

 if (squstartcounter > squgap*D) {
if (squDstate == 0){

//if (squDchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squDxpnl = random (0,5);
if (squDxpnl == 0) {squDx = random (0,9);} if (squDxpnl == 1) {squDx = random (11,19);} if (squDxpnl == 2) {squDx = random (21,29);}
if (squDxpnl == 3) {squDx = random (31,39);} if (squDxpnl == 4) {squDx = random (41,49);}
squDi = squDx + 1;
squDy = random (0,13);
squDj = squDy+1;

if (squarr[squDx] != 1 && squarr[squDi] != 1 && squarr[squDy] != 1 && squarr[squDj] != 1  ){ squDstate = 1;} } //end while

if (squDstate == 1){
//adds the square to the array
squarr[squDx] = 1;
squarr[squDi] = 1;
squarr[squDy] = 1;
squarr[squDj] = 1; 

squDhue = random (0,255);
//squDsat = random (200,255);
 squDstate = 2;  }

if (squDstate == 2) { //fade in

 leds[XY(squDx, squDy)]  = CHSV( squDhue, squDsat, squDval);
 leds[XY(squDi, squDy)]  = CHSV( squDhue, squDsat, squDval);
 leds[XY(squDx, squDj)]  = CHSV( squDhue, squDsat, squDval);
 leds[XY(squDi, squDj)]  = CHSV( squDhue, squDsat, squDval);

squDval = squDval + squupspd;
if (squDval >= 250){squDval = 255;}

if (squDval == 255){  squDstate = 3;  } }

if (squDstate == 3) { //fade out

squDval = squDval - squdownspd;
 if (squDval <= 36) {squDval = 0;}

 leds[XY(squDx, squDy)]  = CHSV( squDhue, squDsat, squDval);
 leds[XY(squDi, squDy)]  = CHSV( squDhue, squDsat, squDval);
 leds[XY(squDx, squDj)]  = CHSV( squDhue, squDsat, squDval);
 leds[XY(squDi, squDj)]  = CHSV( squDhue, squDsat, squDval);

 
  
if (squDval == 0){ squDval = 64; squDchk = 0; //reset everything and remove the square from the array
squarr[squDx] = 0;
squarr[squDi] = 0;
squarr[squDy] = 0;
squarr[squDj] = 0;
squDstate = 0;} }



 } //end square D



 

////////////////////////////////////////////////////////////////////////////////////Square E

 if (squstartcounter > squgap*E) {
if (squEstate == 0){

//if (squEchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squExpnl = random (0,5);
if (squExpnl == 0) {squEx = random (0,9);} if (squExpnl == 1) {squEx = random (11,19);} if (squExpnl == 2) {squEx = random (21,29);}
if (squExpnl == 3) {squEx = random (31,39);} if (squExpnl == 4) {squEx = random (41,49);}
squEi = squEx + 1;
squEy = random (0,13);
squEj = squEy+1;

if (squarr[squEx] != 1 && squarr[squEi] != 1 && squarr[squEy] != 1 && squarr[squEj] != 1  ){  squEstate = 1;} } //end while

if (squEstate == 1){
//adds the square to the array
squarr[squEx] = 1;
squarr[squEi] = 1;
squarr[squEy] = 1;
squarr[squEj] = 1; 

squEhue = random (0,255);
//squEsat = random (200,255);
 squEstate = 2;  }

if (squEstate == 2) { //fade in

 leds[XY(squEx, squEy)]  = CHSV( squEhue, squEsat, squEval);
 leds[XY(squEi, squEy)]  = CHSV( squEhue, squEsat, squEval);
 leds[XY(squEx, squEj)]  = CHSV( squEhue, squEsat, squEval);
 leds[XY(squEi, squEj)]  = CHSV( squEhue, squEsat, squEval);

squEval = squEval + squupspd;
if (squEval >= 250){squEval = 255;}

if (squEval == 255){  squEstate = 3;  } }

if (squEstate == 3) { //fade out

squEval = squEval - squdownspd;
 if (squEval <= 36) {squEval = 0;}

 leds[XY(squEx, squEy)]  = CHSV( squEhue, squEsat, squEval);
 leds[XY(squEi, squEy)]  = CHSV( squEhue, squEsat, squEval);
 leds[XY(squEx, squEj)]  = CHSV( squEhue, squEsat, squEval);
 leds[XY(squEi, squEj)]  = CHSV( squEhue, squEsat, squEval);

 
  
if (squEval == 0){ squEval = 64; squEchk = 0; //reset everything and remove the square from the array
squarr[squEx] = 0;
squarr[squEi] = 0;
squarr[squEy] = 0;
squarr[squEj] = 0;
squEstate = 0;} }



 } //end square E



 
////////////////////////////////////////////////////////////////////////////////////Square F

 if (squstartcounter > squgap*F) {
if (squFstate == 0){

//if (squFchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squFxpnl = random (0,5);
if (squFxpnl == 0) {squFx = random (0,9);} if (squFxpnl == 1) {squFx = random (11,19);} if (squFxpnl == 2) {squFx = random (21,29);}
if (squFxpnl == 3) {squFx = random (31,39);} if (squFxpnl == 4) {squFx = random (41,49);}
squFi = squFx + 1;
squFy = random (0,13);
squFj = squFy+1;

if (squarr[squFx] != 1 && squarr[squFi] != 1 && squarr[squFy] != 1 && squarr[squFj] != 1  ){  squFstate = 1;} } //end while

if (squFstate == 1){
//adds the square to the array
squarr[squFx] = 1;
squarr[squFi] = 1;
squarr[squFy] = 1;
squarr[squFj] = 1; 

squFhue = random (0,255);
//squFsat = random (200,255);
 squFstate = 2;  }

if (squFstate == 2) { //fade in

 leds[XY(squFx, squFy)]  = CHSV( squFhue, squFsat, squFval);
 leds[XY(squFi, squFy)]  = CHSV( squFhue, squFsat, squFval);
 leds[XY(squFx, squFj)]  = CHSV( squFhue, squFsat, squFval);
 leds[XY(squFi, squFj)]  = CHSV( squFhue, squFsat, squFval);

squFval = squFval + squupspd;
if (squFval >= 250){squFval = 255;}

if (squFval == 255){  squFstate = 3;  } }

if (squFstate == 3) { //fade out

squFval = squFval - squdownspd;
 if (squFval <= 36) {squFval = 0;}

 leds[XY(squFx, squFy)]  = CHSV( squFhue, squFsat, squFval);
 leds[XY(squFi, squFy)]  = CHSV( squFhue, squFsat, squFval);
 leds[XY(squFx, squFj)]  = CHSV( squFhue, squFsat, squFval);
 leds[XY(squFi, squFj)]  = CHSV( squFhue, squFsat, squFval);

 
  
if (squFval == 0){ squFval = 64; squFchk = 0; //reset everything and remove the square from the array
squarr[squFx] = 0;
squarr[squFi] = 0;
squarr[squFy] = 0;
squarr[squFj] = 0;
squFstate = 0;} }



 } //end square F



////////////////////////////////////////////////////////////////////////////////////Square G

 if (squstartcounter > squgap*G) {
if (squGstate == 0){

//if (squGchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squGxpnl = random (0,5);
if (squGxpnl == 0) {squGx = random (0,9);} if (squGxpnl == 1) {squGx = random (11,19);} if (squGxpnl == 2) {squGx = random (21,29);}
if (squGxpnl == 3) {squGx = random (31,39);} if (squGxpnl == 4) {squGx = random (41,49);}
squGi = squGx + 1;
squGy = random (0,13);
squGj = squGy+1;

if (squarr[squGx] != 1 && squarr[squGi] != 1 && squarr[squGy] != 1 && squarr[squGj] != 1  ){  squGstate = 1;} } //end while

if (squGstate == 1){
//adds the square to the array
squarr[squGx] = 1;
squarr[squGi] = 1;
squarr[squGy] = 1;
squarr[squGj] = 1; 

squGhue = random (0,255);
//squGsat = random (200,255);
 squGstate = 2;  }

if (squGstate == 2) { //fade in

 leds[XY(squGx, squGy)]  = CHSV( squGhue, squGsat, squGval);
 leds[XY(squGi, squGy)]  = CHSV( squGhue, squGsat, squGval);
 leds[XY(squGx, squGj)]  = CHSV( squGhue, squGsat, squGval);
 leds[XY(squGi, squGj)]  = CHSV( squGhue, squGsat, squGval);

squGval = squGval + squupspd;
if (squGval >= 250){squGval = 255;}

if (squGval == 255){  squGstate = 3;  } }

if (squGstate == 3) { //fade out

squGval = squGval - squdownspd;
 if (squGval <= 36) {squGval = 0;}

 leds[XY(squGx, squGy)]  = CHSV( squGhue, squGsat, squGval);
 leds[XY(squGi, squGy)]  = CHSV( squGhue, squGsat, squGval);
 leds[XY(squGx, squGj)]  = CHSV( squGhue, squGsat, squGval);
 leds[XY(squGi, squGj)]  = CHSV( squGhue, squGsat, squGval);

 
  
if (squGval == 0){ squGval = 64; squGchk = 0; //reset everything and remove the square from the array
squarr[squGx] = 0;
squarr[squGi] = 0;
squarr[squGy] = 0;
squarr[squGj] = 0;
squGstate = 0;} }



 } //end square G


////////////////////////////////////////////////////////////////////////////////////Square H

 if (squstartcounter > squgap*H) {
if (squHstate == 0){

//if (squHchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squHxpnl = random (0,5);
if (squHxpnl == 0) {squHx = random (0,9);} if (squHxpnl == 1) {squHx = random (11,19);} if (squHxpnl == 2) {squHx = random (21,29);}
if (squHxpnl == 3) {squHx = random (31,39);} if (squHxpnl == 4) {squHx = random (41,49);}
squHi = squHx + 1;
squHy = random (0,13);
squHj = squHy+1;

if (squarr[squHx] != 1 && squarr[squHi] != 1 && squarr[squHy] != 1 && squarr[squHj] != 1  ){  squHstate = 1;} } //end while

if (squHstate == 1){
//adds the square to the array
squarr[squHx] = 1;
squarr[squHi] = 1;
squarr[squHy] = 1;
squarr[squHj] = 1; 

squHhue = random (0,255);
//squHsat = random (200,255);
 squHstate = 2;  }

if (squHstate == 2) { //fade in

 leds[XY(squHx, squHy)]  = CHSV( squHhue, squHsat, squHval);
 leds[XY(squHi, squHy)]  = CHSV( squHhue, squHsat, squHval);
 leds[XY(squHx, squHj)]  = CHSV( squHhue, squHsat, squHval);
 leds[XY(squHi, squHj)]  = CHSV( squHhue, squHsat, squHval);

squHval = squHval + squupspd;
if (squHval >= 250){squHval = 255;}

if (squHval == 255){  squHstate = 3;  } }

if (squHstate == 3) { //fade out

squHval = squHval - squdownspd;
 if (squHval <= 36) {squHval = 0;}

 leds[XY(squHx, squHy)]  = CHSV( squHhue, squHsat, squHval);
 leds[XY(squHi, squHy)]  = CHSV( squHhue, squHsat, squHval);
 leds[XY(squHx, squHj)]  = CHSV( squHhue, squHsat, squHval);
 leds[XY(squHi, squHj)]  = CHSV( squHhue, squHsat, squHval);

 
  
if (squHval == 0){ squHval = 64; squHchk = 0; //reset everything and remove the square from the array
squarr[squHx] = 0;
squarr[squHi] = 0;
squarr[squHy] = 0;
squarr[squHj] = 0;
squHstate = 0;} }



 } //end square H
////////////////////////////////////////////////////////////////////////////////////Square Ia

 if (squstartcounter > squgap*I) {
if (squIstate == 0){

//if (squIchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squIxpnl = random (0,5);
if (squIxpnl == 0) {squIx = random (0,9);} if (squIxpnl == 1) {squIx = random (11,19);} if (squIxpnl == 2) {squIx = random (21,29);}
if (squIxpnl == 3) {squIx = random (31,39);} if (squIxpnl == 4) {squIx = random (41,49);}
squIi = squIx + 1;
squIy = random (0,13);
squIj = squIy+1;

if (squarr[squIx] != 1 && squarr[squIi] != 1 && squarr[squIy] != 1 && squarr[squIj] != 1  ){  squIstate = 1;} } //end while

if (squIstate == 1){
//adds the square to the array
squarr[squIx] = 1;
squarr[squIi] = 1;
squarr[squIy] = 1;
squarr[squIj] = 1; 

squIhue = random (0,255);
//squIsat = random (200,255);
 squIstate = 2;  }

if (squIstate == 2) { //fade in

 leds[XY(squIx, squIy)]  = CHSV( squIhue, squIsat, squIval);
 leds[XY(squIi, squIy)]  = CHSV( squIhue, squIsat, squIval);
 leds[XY(squIx, squIj)]  = CHSV( squIhue, squIsat, squIval);
 leds[XY(squIi, squIj)]  = CHSV( squIhue, squIsat, squIval);

squIval = squIval + squupspd;
if (squIval >= 250){squIval = 255;}

if (squIval == 255){  squIstate = 3;  } }

if (squIstate == 3) { //fade out

squIval = squIval - squdownspd;
 if (squIval <= 36) {squIval = 0;}

 leds[XY(squIx, squIy)]  = CHSV( squIhue, squIsat, squIval);
 leds[XY(squIi, squIy)]  = CHSV( squIhue, squIsat, squIval);
 leds[XY(squIx, squIj)]  = CHSV( squIhue, squIsat, squIval);
 leds[XY(squIi, squIj)]  = CHSV( squIhue, squIsat, squIval);

 
  
if (squIval == 0){ squIval = 64; squIchk = 0; //reset everything and remove the square from the array
squarr[squIx] = 0;
squarr[squIi] = 0;
squarr[squIy] = 0;
squarr[squIj] = 0;
squIstate = 0;} }



 } //end square Ia


////////////////////////////////////////////////////////////////////////////////////Square J

 if (squstartcounter > squgap*J) {
if (squJstate == 0){

//if (squJchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squJxpnl = random (0,5);
if (squJxpnl == 0) {squJx = random (0,9);} if (squJxpnl == 1) {squJx = random (11,19);} if (squJxpnl == 2) {squJx = random (21,29);}
if (squJxpnl == 3) {squJx = random (31,39);} if (squJxpnl == 4) {squJx = random (41,49);}
squJi = squJx + 1;
squJy = random (0,13);
squJj = squJy+1;

if (squarr[squJx] != 1 && squarr[squJi] != 1 && squarr[squJy] != 1 && squarr[squJj] != 1  ){  squJstate = 1;} } //end while

if (squJstate == 1){
//adds the square to the array
squarr[squJx] = 1;
squarr[squJi] = 1;
squarr[squJy] = 1;
squarr[squJj] = 1; 

squJhue = random (0,255);
//squJsat = random (200,255);
 squJstate = 2;  }

if (squJstate == 2) { //fade in

 leds[XY(squJx, squJy)]  = CHSV( squJhue, squJsat, squJval);
 leds[XY(squJi, squJy)]  = CHSV( squJhue, squJsat, squJval);
 leds[XY(squJx, squJj)]  = CHSV( squJhue, squJsat, squJval);
 leds[XY(squJi, squJj)]  = CHSV( squJhue, squJsat, squJval);

squJval = squJval + squupspd;
if (squJval >= 250){squJval = 255;}

if (squJval == 255){  squJstate = 3;  } }

if (squJstate == 3) { //fade out

squJval = squJval - squdownspd;
 if (squJval <= 36) {squJval = 0;}

 leds[XY(squJx, squJy)]  = CHSV( squJhue, squJsat, squJval);
 leds[XY(squJi, squJy)]  = CHSV( squJhue, squJsat, squJval);
 leds[XY(squJx, squJj)]  = CHSV( squJhue, squJsat, squJval);
 leds[XY(squJi, squJj)]  = CHSV( squJhue, squJsat, squJval);

 
  
if (squJval == 0){ squJval = 64; squJchk = 0; //reset everything and remove the square from the array
squarr[squJx] = 0;
squarr[squJi] = 0;
squarr[squJy] = 0;
squarr[squJj] = 0;
squJstate = 0;} }



 } //end square J




////////////////////////////////////////////////////////////////////////////////////Square K

 if (squstartcounter > squgap*K) {
if (squKstate == 0){

//if (squKchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squKxpnl = random (0,5);
if (squKxpnl == 0) {squKx = random (0,9);} if (squKxpnl == 1) {squKx = random (11,19);} if (squKxpnl == 2) {squKx = random (21,29);}
if (squKxpnl == 3) {squKx = random (31,39);} if (squKxpnl == 4) {squKx = random (41,49);}
squKi = squKx + 1;
squKy = random (0,13);
squKj = squKy+1;

if (squarr[squKx] != 1 && squarr[squKi] != 1 && squarr[squKy] != 1 && squarr[squKj] != 1  ){  squKstate = 1;} } //end while

if (squKstate == 1){
//adds the square to the array
squarr[squKx] = 1;
squarr[squKi] = 1;
squarr[squKy] = 1;
squarr[squKj] = 1; 

squKhue = random (0,255);
//squKsat = random (200,255);
 squKstate = 2;  }

if (squKstate == 2) { //fade in

 leds[XY(squKx, squKy)]  = CHSV( squKhue, squKsat, squKval);
 leds[XY(squKi, squKy)]  = CHSV( squKhue, squKsat, squKval);
 leds[XY(squKx, squKj)]  = CHSV( squKhue, squKsat, squKval);
 leds[XY(squKi, squKj)]  = CHSV( squKhue, squKsat, squKval);

squKval = squKval + squupspd;
if (squKval >= 250){squKval = 255;}

if (squKval == 255){  squKstate = 3;  } }

if (squKstate == 3) { //fade out

squKval = squKval - squdownspd;
 if (squKval <= 36) {squKval = 0;}

 leds[XY(squKx, squKy)]  = CHSV( squKhue, squKsat, squKval);
 leds[XY(squKi, squKy)]  = CHSV( squKhue, squKsat, squKval);
 leds[XY(squKx, squKj)]  = CHSV( squKhue, squKsat, squKval);
 leds[XY(squKi, squKj)]  = CHSV( squKhue, squKsat, squKval);

 
  
if (squKval == 0){ squKval = 64; squKchk = 0; //reset everything and remove the square from the array
squarr[squKx] = 0;
squarr[squKi] = 0;
squarr[squKy] = 0;
squarr[squKj] = 0;
squKstate = 0;} }



 } //end square K


////////////////////////////////////////////////////////////////////////////////////Square L

 if (squstartcounter > squgap*L) {
if (squLstate == 0){

//if (squLchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squLxpnl = random (0,5);
if (squLxpnl == 0) {squLx = random (0,9);} if (squLxpnl == 1) {squLx = random (11,19);} if (squLxpnl == 2) {squLx = random (21,29);}
if (squLxpnl == 3) {squLx = random (31,39);} if (squLxpnl == 4) {squLx = random (41,49);}
squLi = squLx + 1;
squLy = random (0,13);
squLj = squLy+1;

if (squarr[squLx] != 1 && squarr[squLi] != 1 && squarr[squLy] != 1 && squarr[squLj] != 1  ){  squLstate = 1;} } //end while

if (squLstate == 1){
//adds the square to the array
squarr[squLx] = 1;
squarr[squLi] = 1;
squarr[squLy] = 1;
squarr[squLj] = 1; 

squLhue = random (0,255);
//squLsat = random (200,255);
 squLstate = 2;  }

if (squLstate == 2) { //fade in

 leds[XY(squLx, squLy)]  = CHSV( squLhue, squLsat, squLval);
 leds[XY(squLi, squLy)]  = CHSV( squLhue, squLsat, squLval);
 leds[XY(squLx, squLj)]  = CHSV( squLhue, squLsat, squLval);
 leds[XY(squLi, squLj)]  = CHSV( squLhue, squLsat, squLval);

squLval = squLval + squupspd;
if (squLval >= 250){squLval = 255;}

if (squLval == 255){  squLstate = 3;  } }

if (squLstate == 3) { //fade out

squLval = squLval - squdownspd;
 if (squLval <= 36) {squLval = 0;}

 leds[XY(squLx, squLy)]  = CHSV( squLhue, squLsat, squLval);
 leds[XY(squLi, squLy)]  = CHSV( squLhue, squLsat, squLval);
 leds[XY(squLx, squLj)]  = CHSV( squLhue, squLsat, squLval);
 leds[XY(squLi, squLj)]  = CHSV( squLhue, squLsat, squLval);

 
  
if (squLval == 0){ squLval = 64; squLchk = 0; //reset everything and remove the square from the array
squarr[squLx] = 0;
squarr[squLi] = 0;
squarr[squLy] = 0;
squarr[squLj] = 0;
squLstate = 0;} }



 } //end square L


////////////////////////////////////////////////////////////////////////////////////Square M

 if (squstartcounter > squgap*M) {
if (squMstate == 0){

//if (squMchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squMxpnl = random (0,5);
if (squMxpnl == 0) {squMx = random (0,9);} if (squMxpnl == 1) {squMx = random (11,19);} if (squMxpnl == 2) {squMx = random (21,29);}
if (squMxpnl == 3) {squMx = random (31,39);} if (squMxpnl == 4) {squMx = random (41,49);}
squMi = squMx + 1;
squMy = random (0,13);
squMj = squMy+1;

if (squarr[squMx] != 1 && squarr[squMi] != 1 && squarr[squMy] != 1 && squarr[squMj] != 1  ){  squMstate = 1;} } //end while

if (squMstate == 1){
//adds the square to the array
squarr[squMx] = 1;
squarr[squMi] = 1;
squarr[squMy] = 1;
squarr[squMj] = 1; 

squMhue = random (0,255);
//squMsat = random (200,255);
 squMstate = 2;  }

if (squMstate == 2) { //fade in

 leds[XY(squMx, squMy)]  = CHSV( squMhue, squMsat, squMval);
 leds[XY(squMi, squMy)]  = CHSV( squMhue, squMsat, squMval);
 leds[XY(squMx, squMj)]  = CHSV( squMhue, squMsat, squMval);
 leds[XY(squMi, squMj)]  = CHSV( squMhue, squMsat, squMval);

squMval = squMval + squupspd;
if (squMval >= 250){squMval = 255;}

if (squMval == 255){  squMstate = 3;  } }

if (squMstate == 3) { //fade out

squMval = squMval - squdownspd;
 if (squMval <= 36) {squMval = 0;}

 leds[XY(squMx, squMy)]  = CHSV( squMhue, squMsat, squMval);
 leds[XY(squMi, squMy)]  = CHSV( squMhue, squMsat, squMval);
 leds[XY(squMx, squMj)]  = CHSV( squMhue, squMsat, squMval);
 leds[XY(squMi, squMj)]  = CHSV( squMhue, squMsat, squMval);

 
  
if (squMval == 0){ squMval = 64; squMchk = 0; //reset everything and remove the square from the array
squarr[squMx] = 0;
squarr[squMi] = 0;
squarr[squMy] = 0;
squarr[squMj] = 0;
squMstate = 0;} }



 } //end square M

////////////////////////////////////////////////////////////////////////////////////Square N

 if (squstartcounter > squgap*N) {
if (squNstate == 0){

//if (squNchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squNxpnl = random (0,5);
if (squNxpnl == 0) {squNx = random (0,9);} if (squNxpnl == 1) {squNx = random (11,19);} if (squNxpnl == 2) {squNx = random (21,29);}
if (squNxpnl == 3) {squNx = random (31,39);} if (squNxpnl == 4) {squNx = random (41,49);}
squNi = squNx + 1;
squNy = random (0,13);
squNj = squNy+1;

if (squarr[squNx] != 1 && squarr[squNi] != 1 && squarr[squNy] != 1 && squarr[squNj] != 1  ){  squNstate = 1;} } //end while

if (squNstate == 1){
//adds the square to the array
squarr[squNx] = 1;
squarr[squNi] = 1;
squarr[squNy] = 1;
squarr[squNj] = 1; 

squNhue = random (0,255);
//squNsat = random (200,255);
 squNstate = 2;  }

if (squNstate == 2) { //fade in

 leds[XY(squNx, squNy)]  = CHSV( squNhue, squNsat, squNval);
 leds[XY(squNi, squNy)]  = CHSV( squNhue, squNsat, squNval);
 leds[XY(squNx, squNj)]  = CHSV( squNhue, squNsat, squNval);
 leds[XY(squNi, squNj)]  = CHSV( squNhue, squNsat, squNval);

squNval = squNval + squupspd;
if (squNval >= 250){squNval = 255;}

if (squNval == 255){  squNstate = 3;  } }

if (squNstate == 3) { //fade out

squNval = squNval - squdownspd;
 if (squNval <= 36) {squNval = 0;}

 leds[XY(squNx, squNy)]  = CHSV( squNhue, squNsat, squNval);
 leds[XY(squNi, squNy)]  = CHSV( squNhue, squNsat, squNval);
 leds[XY(squNx, squNj)]  = CHSV( squNhue, squNsat, squNval);
 leds[XY(squNi, squNj)]  = CHSV( squNhue, squNsat, squNval);

 
  
if (squNval == 0){ squNval = 64; squNchk = 0; //reset everything and remove the square from the array
squarr[squNx] = 0;
squarr[squNi] = 0;
squarr[squNy] = 0;
squarr[squNj] = 0;
squNstate = 0;} }



 } //end square N


////////////////////////////////////////////////////////////////////////////////////Square O

 if (squstartcounter > squgap*O) {
if (squOstate == 0){

//if (squOchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squOxpnl = random (0,5);
if (squOxpnl == 0) {squOx = random (0,9);} if (squOxpnl == 1) {squOx = random (11,19);} if (squOxpnl == 2) {squOx = random (21,29);}
if (squOxpnl == 3) {squOx = random (31,39);} if (squOxpnl == 4) {squOx = random (41,49);}
squOi = squOx + 1;
squOy = random (0,13);
squOj = squOy+1;

if (squarr[squOx] != 1 && squarr[squOi] != 1 && squarr[squOy] != 1 && squarr[squOj] != 1  ){  squOstate = 1;} } //end while

if (squOstate == 1){
//adds the square to the array
squarr[squOx] = 1;
squarr[squOi] = 1;
squarr[squOy] = 1;
squarr[squOj] = 1; 

squOhue = random (0,255);
//squOsat = random (200,255);
 squOstate = 2;  }

if (squOstate == 2) { //fade in

 leds[XY(squOx, squOy)]  = CHSV( squOhue, squOsat, squOval);
 leds[XY(squOi, squOy)]  = CHSV( squOhue, squOsat, squOval);
 leds[XY(squOx, squOj)]  = CHSV( squOhue, squOsat, squOval);
 leds[XY(squOi, squOj)]  = CHSV( squOhue, squOsat, squOval);

squOval = squOval + squupspd;
if (squOval >= 250){squOval = 255;}

if (squOval == 255){  squOstate = 3;  } }

if (squOstate == 3) { //fade out

squOval = squOval - squdownspd;
 if (squOval <= 36) {squOval = 0;}

 leds[XY(squOx, squOy)]  = CHSV( squOhue, squOsat, squOval);
 leds[XY(squOi, squOy)]  = CHSV( squOhue, squOsat, squOval);
 leds[XY(squOx, squOj)]  = CHSV( squOhue, squOsat, squOval);
 leds[XY(squOi, squOj)]  = CHSV( squOhue, squOsat, squOval);

 
  
if (squOval == 0){ squOval = 64; squOchk = 0; //reset everything and remove the square from the array
squarr[squOx] = 0;
squarr[squOi] = 0;
squarr[squOy] = 0;
squarr[squOj] = 0;
squOstate = 0;} }



 } //end square O


////////////////////////////////////////////////////////////////////////////////////Square P

 if (squstartcounter > squgap*P) {
if (squPstate == 0){

//if (squPchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squPxpnl = random (0,5);
if (squPxpnl == 0) {squPx = random (0,9);} if (squPxpnl == 1) {squPx = random (11,19);} if (squPxpnl == 2) {squPx = random (21,29);}
if (squPxpnl == 3) {squPx = random (31,39);} if (squPxpnl == 4) {squPx = random (41,49);}
squPi = squPx + 1;
squPy = random (0,13);
squPj = squPy+1;

if (squarr[squPx] != 1 && squarr[squPi] != 1 && squarr[squPy] != 1 && squarr[squPj] != 1  ){  squPstate = 1;} } //end while

if (squPstate == 1){
//adds the square to the array
squarr[squPx] = 1;
squarr[squPi] = 1;
squarr[squPy] = 1;
squarr[squPj] = 1; 

squPhue = random (0,255);
//squPsat = random (200,255);
 squPstate = 2;  }

if (squPstate == 2) { //fade in

 leds[XY(squPx, squPy)]  = CHSV( squPhue, squPsat, squPval);
 leds[XY(squPi, squPy)]  = CHSV( squPhue, squPsat, squPval);
 leds[XY(squPx, squPj)]  = CHSV( squPhue, squPsat, squPval);
 leds[XY(squPi, squPj)]  = CHSV( squPhue, squPsat, squPval);

squPval = squPval + squupspd;
if (squPval >= 250){squPval = 255;}

if (squPval == 255){  squPstate = 3;  } }

if (squPstate == 3) { //fade out

squPval = squPval - squdownspd;
 if (squPval <= 36) {squPval = 0;}

 leds[XY(squPx, squPy)]  = CHSV( squPhue, squPsat, squPval);
 leds[XY(squPi, squPy)]  = CHSV( squPhue, squPsat, squPval);
 leds[XY(squPx, squPj)]  = CHSV( squPhue, squPsat, squPval);
 leds[XY(squPi, squPj)]  = CHSV( squPhue, squPsat, squPval);

 
  
if (squPval == 0){ squPval = 64; squPchk = 0; //reset everything and remove the square from the array
squarr[squPx] = 0;
squarr[squPi] = 0;
squarr[squPy] = 0;
squarr[squPj] = 0;
squPstate = 0;} }



 } //end square P

 ////////////////////////////////////////////////////////////////////////////////////Square Q

 if (squstartcounter > squgap*Q) {
if (squQstate == 0){

//if (squQchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squQxpnl = random (0,5);
if (squQxpnl == 0) {squQx = random (0,9);} if (squQxpnl == 1) {squQx = random (11,19);} if (squQxpnl == 2) {squQx = random (21,29);}
if (squQxpnl == 3) {squQx = random (31,39);} if (squQxpnl == 4) {squQx = random (41,49);}
squQi = squQx + 1;
squQy = random (0,13);
squQj = squQy+1;

if (squarr[squQx] != 1 && squarr[squQi] != 1 && squarr[squQy] != 1 && squarr[squQj] != 1  ){  squQstate = 1;} } //end while

if (squQstate == 1){
//adds the square to the array
squarr[squQx] = 1;
squarr[squQi] = 1;
squarr[squQy] = 1;
squarr[squQj] = 1; 

squQhue = random (0,255);
//squQsat = random (200,255);
 squQstate = 2;  }

if (squQstate == 2) { //fade in

 leds[XY(squQx, squQy)]  = CHSV( squQhue, squQsat, squQval);
 leds[XY(squQi, squQy)]  = CHSV( squQhue, squQsat, squQval);
 leds[XY(squQx, squQj)]  = CHSV( squQhue, squQsat, squQval);
 leds[XY(squQi, squQj)]  = CHSV( squQhue, squQsat, squQval);

squQval = squQval + squupspd;
if (squQval >= 250){squQval = 255;}

if (squQval == 255){  squQstate = 3;  } }

if (squQstate == 3) { //fade out

squQval = squQval - squdownspd;
 if (squQval <= 36) {squQval = 0;}

 leds[XY(squQx, squQy)]  = CHSV( squQhue, squQsat, squQval);
 leds[XY(squQi, squQy)]  = CHSV( squQhue, squQsat, squQval);
 leds[XY(squQx, squQj)]  = CHSV( squQhue, squQsat, squQval);
 leds[XY(squQi, squQj)]  = CHSV( squQhue, squQsat, squQval);

 
  
if (squQval == 0){ squQval = 64; squQchk = 0; //reset everything and remove the square from the array
squarr[squQx] = 0;
squarr[squQi] = 0;
squarr[squQy] = 0;
squarr[squQj] = 0;
squQstate = 0;} }



 } //end square Q

////////////////////////////////////////////////////////////////////////////////////Square R

 if (squstartcounter > squgap*R) {
if (squRstate == 0){

//if (squRchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squRxpnl = random (0,5);
if (squRxpnl == 0) {squRx = random (0,9);} if (squRxpnl == 1) {squRx = random (11,19);} if (squRxpnl == 2) {squRx = random (21,29);}
if (squRxpnl == 3) {squRx = random (31,39);} if (squRxpnl == 4) {squRx = random (41,49);}
squRi = squRx + 1;
squRy = random (0,13);
squRj = squRy+1;

if (squarr[squRx] != 1 && squarr[squRi] != 1 && squarr[squRy] != 1 && squarr[squRj] != 1  ){  squRstate = 1;} } //end while

if (squRstate == 1){
//adds the square to the array
squarr[squRx] = 1;
squarr[squRi] = 1;
squarr[squRy] = 1;
squarr[squRj] = 1; 

squRhue = random (0,255);
//squRsat = random (200,255);
 squRstate = 2;  }

if (squRstate == 2) { //fade in

 leds[XY(squRx, squRy)]  = CHSV( squRhue, squRsat, squRval);
 leds[XY(squRi, squRy)]  = CHSV( squRhue, squRsat, squRval);
 leds[XY(squRx, squRj)]  = CHSV( squRhue, squRsat, squRval);
 leds[XY(squRi, squRj)]  = CHSV( squRhue, squRsat, squRval);

squRval = squRval + squupspd;
if (squRval >= 250){squRval = 255;}

if (squRval == 255){  squRstate = 3;  } }

if (squRstate == 3) { //fade out

squRval = squRval - squdownspd;
 if (squRval <= 36) {squRval = 0;}

 leds[XY(squRx, squRy)]  = CHSV( squRhue, squRsat, squRval);
 leds[XY(squRi, squRy)]  = CHSV( squRhue, squRsat, squRval);
 leds[XY(squRx, squRj)]  = CHSV( squRhue, squRsat, squRval);
 leds[XY(squRi, squRj)]  = CHSV( squRhue, squRsat, squRval);

 
  
if (squRval == 0){ squRval = 64; squRchk = 0; //reset everything and remove the square from the array
squarr[squRx] = 0;
squarr[squRi] = 0;
squarr[squRy] = 0;
squarr[squRj] = 0;
squRstate = 0;} }



 } //end square R

 ////////////////////////////////////////////////////////////////////////////////////Square S

 if (squstartcounter > squgap*S) {
if (squSstate == 0){

//if (squSchk == 0){  ///while loop for generating the square and checking to make sure it's not overlapping another square
squSxpnl = random (0,5);
if (squSxpnl == 0) {squSx = random (0,9);} if (squSxpnl == 1) {squSx = random (11,19);} if (squSxpnl == 2) {squSx = random (21,29);}
if (squSxpnl == 3) {squSx = random (31,39);} if (squSxpnl == 4) {squSx = random (41,49);}
squSi = squSx + 1;
squSy = random (0,13);
squSj = squSy+1;

if (squarr[squSx] != 1 && squarr[squSi] != 1 && squarr[squSy] != 1 && squarr[squSj] != 1  ){  squSstate = 1;} } //end while

if (squSstate == 1){
//adds the square to the array
squarr[squSx] = 1;
squarr[squSi] = 1;
squarr[squSy] = 1;
squarr[squSj] = 1; 

squShue = random (0,255);
//squSsat = random (200,255);
 squSstate = 2;  }

if (squSstate == 2) { //fade in

 leds[XY(squSx, squSy)]  = CHSV( squShue, squSsat, squSval);
 leds[XY(squSi, squSy)]  = CHSV( squShue, squSsat, squSval);
 leds[XY(squSx, squSj)]  = CHSV( squShue, squSsat, squSval);
 leds[XY(squSi, squSj)]  = CHSV( squShue, squSsat, squSval);

squSval = squSval + squupspd;
if (squSval >= 250){squSval = 255;}

if (squSval == 255){  squSstate = 3;  } }

if (squSstate == 3) { //fade out

squSval = squSval - squdownspd;
 if (squSval <= 36) {squSval = 0;}

 leds[XY(squSx, squSy)]  = CHSV( squShue, squSsat, squSval);
 leds[XY(squSi, squSy)]  = CHSV( squShue, squSsat, squSval);
 leds[XY(squSx, squSj)]  = CHSV( squShue, squSsat, squSval);
 leds[XY(squSi, squSj)]  = CHSV( squShue, squSsat, squSval);

 
  
if (squSval == 0){ squSval = 64; squSchk = 0; //reset everything and remove the square from the array
squarr[squSx] = 0;
squarr[squSi] = 0;
squarr[squSy] = 0;
squarr[squSj] = 0;
squSstate = 0;} }



 } //end square S


 

  LEDS.show(); 

} // end if squglobalgate == 1
  } //end loop */
