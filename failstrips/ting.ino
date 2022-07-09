

int tingspd = 50;

byte tingcond0;
byte tingcond1;
byte tingcond2;
byte tingcond3;
byte tingcond4;

elapsedMillis tingtime0;
elapsedMillis tingtime1;
elapsedMillis tingtime2;
elapsedMillis tingtime3;
elapsedMillis tingtime4;

byte tinghue0;
byte tingsat0 = 255;
byte tingval0 = 100;

byte tinghue1;
byte tingsat1 = 255;
byte tingval1 = 100;

byte tinghue2;
byte tingsat2 = 255;
byte tingval2 = 100;

byte tinghue3;
byte tingsat3 = 255;
byte tingval3 = 100;

byte tinghue4;
byte tingsat4 = 255;
byte tingval4 = 100;

byte tingpanel;
byte tingmode;
elapsedMillis maintingtime;
int maintingspd = 500;

byte tingstyle = 9;
byte tingstylestate = 0;
elapsedMillis rotatetingtime;
int rotatetinginterval = 20000;

void ting (){
//colours
//set colours
//red
if (tingstyle == 0) {
 tinghue0;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 0;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 0;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 0;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 0;
 tingsat4 = 255;
 tingval4 = 100;
}
//orange
if (tingstyle == 1) {
   tinghue0 = 32;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 32;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 32;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 32;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 32;
 tingsat4 = 255;
 tingval4 = 100;
}

//yellow
if (tingstyle == 2) {
   tinghue0 = 64;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 64;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 64;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 64;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 64;
 tingsat4 = 255;
 tingval4 = 100;
}

//green
if (tingstyle == 3) {
   tinghue0 = 96;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 96;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 96;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 96;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 96;
 tingsat4 = 255;
 tingval4 = 100;
}

//aqua
if (tingstyle == 4) {
   tinghue0 = 128;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 128;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 128;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 128;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 128;
 tingsat4 = 255;
 tingval4 = 100;
}

//blue
if (tingstyle == 5) {
   tinghue0 = 160;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 160;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 160;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 160;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 160;
 tingsat4 = 255;
 tingval4 = 100;
}

//purple
if (tingstyle == 6) {
   tinghue0 = 192;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 192;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 192;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 192;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 192;
 tingsat4 = 255;
 tingval4 = 100;
}

//pink
if (tingstyle == 7) {
   tinghue0 = 224;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 224;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 224;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 224;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 224;
 tingsat4 = 255;
 tingval4 = 100;
}

//set rainbow
if (tingstyle == 8) {
 tinghue0 = 0;
 tingsat0 = 255;
 tingval0 = 100;

 tinghue1 = 64;
 tingsat1 = 255;
 tingval1 = 100;

 tinghue2 = 96;
 tingsat2 = 255;
 tingval2 = 100;

 tinghue3 = 160;
 tingsat3 = 255;
 tingval3 = 100;

 tinghue4 = 192;
 tingsat4 = 255;
 tingval4 = 100;
}

//smooth rainbow
if (tingstyle == 9) {

tingsat0 = 255;
tingsat1 = 255;
tingsat2 = 255;
tingsat3 = 255;
tingsat4 = 255;

tinghue0++; 
tinghue1++;
tinghue2++;
tinghue3++;
tinghue4++;

}

//fast rainbow
if (tingstyle == 10) {

tingsat0 = 255;
tingsat1 = 255;
tingsat2 = 255;
tingsat3 = 255;
tingsat4 = 255;

tinghue0 = tinghue0 + 8; 
tinghue1 = tinghue1 + 8; 
tinghue2 = tinghue2 + 8; 
tinghue3 = tinghue3 + 8; 
tinghue4 = tinghue4 + 8; 

}


//white
if (tingstyle == 11) {

tingsat0 = 0;
tingsat1 = 0;
tingsat2 = 0;
tingsat3 = 0;
tingsat4 = 0;



}


//rotating colours
if (tingstylestate == 1){ 
  if (rotatetingtime > rotatetinginterval) { if (tingstyle < 11) {tingstyle ++;} if (tingstyle >= 11) {tingstyle = 0;} rotatetingtime = 0;}
}


//motion
if (tingmode == 0) { 
  if (maintingtime > maintingspd){ 
tingpanel  =  random (0, 24); 

  if (tingpanel == 0) { tingcond0 = 1;}
  if (tingpanel == 1) { tingcond1 = 1;}
  if (tingpanel == 2) { tingcond2 = 1;}
  if (tingpanel == 3) { tingcond3 = 1;}
  if (tingpanel == 4) { tingcond4 = 1;}
  if (tingpanel == 5) {tingcond0 = 1; tingcond1 = 1;}
  if (tingpanel == 6) { tingcond0 = 1; tingcond2 = 1;}
  if (tingpanel == 7) { tingcond0 = 1; tingcond3 = 1;}
  if (tingpanel == 8) { tingcond0 = 1; tingcond4 = 1;}
  if (tingpanel == 9) { tingcond3 = 1; tingcond4 = 1;}
  if (tingpanel == 10) { tingcond3 = 1; tingcond2 = 1;}
  if (tingpanel == 11) { tingcond3 = 1; tingcond1 = 1;}
  if (tingpanel == 12) { tingcond0 = 1;}
  if (tingpanel == 13) { tingcond1 = 1;}
  if (tingpanel == 14) { tingcond2 = 1;}
  if (tingpanel == 15) { tingcond3 = 1;}
  if (tingpanel == 16) { tingcond4 = 1;}
  if (tingpanel == 17) { tingcond1 = 1; tingcond3 = 1;}
  if (tingpanel == 18) { tingcond0 = 1; tingcond2 = 1; tingcond4 = 1;}
  if (tingpanel == 19) { tingcond0 = 1;}
  if (tingpanel == 20) { tingcond1 = 1;}
  if (tingpanel == 21) { tingcond2 = 1;}
  if (tingpanel == 22) { tingcond3 = 1;}
  if (tingpanel == 23) { tingcond4 = 1;}
                              maintingtime = 0;}
 
  }




//panel 0
if (tingcond0 == 1) {

for (int i = 0; i< 4; i++){leds[p0_pbox0d[i]] = CHSV (tinghue0, tingsat0, tingval0);}
}

if (tingcond0 == 2) {

 for (int i = 0; i< 4; i++){leds[p0_pbox0d[i]] = CHSV (tinghue0, tingsat0, 0);}
 for (int i = 0; i< 12; i++){leds[p0_pbox1d[i]] = CHSV (tinghue1, tingsat1, tingval1);} 
}

if (tingcond0 == 3) {
 for (int i = 0; i< 12; i++){leds[p0_pbox1d[i]] = CHSV (tinghue1, tingsat1, 0);} 
 for (int i = 0; i< 20; i++){leds[p0_pbox2d[i]] = CHSV (tinghue2, tingsat2, tingval2);} 
  }  

if (tingcond0 == 4) {

 for (int i = 0; i< 20; i++){leds[p0_pbox2d[i]] = CHSV (tinghue2, tingsat2, 0);} 
 for (int i = 0; i< 28; i++){leds[p0_pbox3d[i]] = CHSV (tinghue3, tingsat3, tingval3);} 
}

if (tingcond0 == 5) {
for (int i = 0; i< 28; i++){leds[p0_pbox3d[i]] = CHSV (tinghue3, tingsat3, 0);}
for (int i = 0; i< 36; i++){leds[p0_pbox4d[i]] = CHSV (tinghue4, tingsat4, tingval4);}
}

if (tingcond0 == 6) {
for (int i = 0; i< 36; i++){leds[p0_pbox4d[i]] = CHSV (tinghue4, tingsat4, 0);}
}

//panel 1

if (tingcond1 == 1) {

  for (int i = 0; i< 4; i++){leds[p1_pbox0d[i]] = CHSV (tinghue0, tingsat0, tingval0);}
}

if (tingcond1 == 2) {

 for (int i = 0; i< 4; i++){leds[p1_pbox0d[i]] = CHSV (tinghue0, tingsat0, 0);}
 for (int i = 0; i< 12; i++){leds[p1_pbox1d[i]] = CHSV (tinghue1, tingsat1, tingval1);} 
}

if (tingcond1 == 3) {
 for (int i = 0; i< 12; i++){leds[p1_pbox1d[i]] = CHSV (tinghue1, tingsat1, 0);} 
 for (int i = 0; i< 20; i++){leds[p1_pbox2d[i]] = CHSV (tinghue2, tingsat2, tingval2);} 
  }  

if (tingcond1 == 4) {

 for (int i = 0; i< 20; i++){leds[p1_pbox2d[i]] = CHSV (tinghue2, tingsat2, 0);} 
 for (int i = 0; i< 28; i++){leds[p1_pbox3d[i]] = CHSV (tinghue3, tingsat3, tingval3);} 
}

if (tingcond1 == 5) {
for (int i = 0; i< 28; i++){leds[p1_pbox3d[i]] = CHSV (tinghue3, tingsat3, 0);}
for (int i = 0; i< 36; i++){leds[p1_pbox4d[i]] = CHSV (tinghue4, tingsat4, tingval4);}
}

if (tingcond1 == 6) {
for (int i = 0; i< 36; i++){leds[p1_pbox4d[i]] = CHSV (tinghue4, tingsat4, 0);}
}

//panel 2


if (tingcond2 == 1) {

  for (int i = 0; i< 4; i++){leds[p2_pbox0d[i]] = CHSV (tinghue0, tingsat0, tingval0);}
}

if (tingcond2 == 2) {

 for (int i = 0; i< 4; i++){leds[p2_pbox0d[i]] = CHSV (tinghue0, tingsat0, 0);}
 for (int i = 0; i< 12; i++){leds[p2_pbox1d[i]] = CHSV (tinghue1, tingsat1, tingval1);} 
}

if (tingcond2 == 3) {
 for (int i = 0; i< 12; i++){leds[p2_pbox1d[i]] = CHSV (tinghue1, tingsat1, 0);} 
 for (int i = 0; i< 20; i++){leds[p2_pbox2d[i]] = CHSV (tinghue2, tingsat2, tingval2);} 
  }  

if (tingcond2 == 4) {

 for (int i = 0; i< 20; i++){leds[p2_pbox2d[i]] = CHSV (tinghue2, tingsat2, 0);} 
 for (int i = 0; i< 28; i++){leds[p2_pbox3d[i]] = CHSV (tinghue3, tingsat3, tingval3);} 
}

if (tingcond2 == 5) {
for (int i = 0; i< 28; i++){leds[p2_pbox3d[i]] = CHSV (tinghue3, tingsat3, 0);}
for (int i = 0; i< 36; i++){leds[p2_pbox4d[i]] = CHSV (tinghue4, tingsat4, tingval4);}
}

if (tingcond2 == 6) {
for (int i = 0; i< 36; i++){leds[p2_pbox4d[i]] = CHSV (tinghue4, tingsat4, 0);}
} 

//panel 3

if (tingcond3 == 1) {

  for (int i = 0; i< 4; i++){leds[p3_pbox0d[i]] = CHSV (tinghue0, tingsat0, tingval0);}

}

if (tingcond3 == 2) {

 for (int i = 0; i< 4; i++){leds[p3_pbox0d[i]] = CHSV (tinghue0, tingsat0, 0);}
 for (int i = 0; i< 12; i++){leds[p3_pbox1d[i]] = CHSV (tinghue1, tingsat1, tingval1);} 
}

if (tingcond3 == 3) {
 for (int i = 0; i< 12; i++){leds[p3_pbox1d[i]] = CHSV (tinghue1, tingsat1, 0);} 
 for (int i = 0; i< 20; i++){leds[p3_pbox2d[i]] = CHSV (tinghue2, tingsat2, tingval2);} 
  }  

if (tingcond3 == 4) {

 for (int i = 0; i< 20; i++){leds[p3_pbox2d[i]] = CHSV (tinghue2, tingsat2, 0);} 
 for (int i = 0; i< 28; i++){leds[p3_pbox3d[i]] = CHSV (tinghue3, tingsat3, tingval3);} 
}

if (tingcond3 == 5) {
for (int i = 0; i< 28; i++){leds[p3_pbox3d[i]] = CHSV (tinghue3, tingsat3, 0);}
for (int i = 0; i< 36; i++){leds[p3_pbox4d[i]] = CHSV (tinghue4, tingsat4, tingval4);}
}

if (tingcond3 == 6) {
for (int i = 0; i< 36; i++){leds[p3_pbox4d[i]] = CHSV (tinghue4, tingsat4, 0);}
} 

//panel 4

if (tingcond4 == 1) {

  for (int i = 0; i< 4; i++){leds[p4_pbox0d[i]] = CHSV (tinghue0, tingsat0, tingval0);}

}

if (tingcond4 == 2) {

 for (int i = 0; i< 4; i++){leds[p4_pbox0d[i]] = CHSV (tinghue0, tingsat0, 0);}
 for (int i = 0; i< 12; i++){leds[p4_pbox1d[i]] = CHSV (tinghue1, tingsat1, tingval1);} 
}

if (tingcond4 == 3) {
 for (int i = 0; i< 12; i++){leds[p4_pbox1d[i]] = CHSV (tinghue1, tingsat1, 0);} 
 for (int i = 0; i< 20; i++){leds[p4_pbox2d[i]] = CHSV (tinghue2, tingsat2, tingval2);} 
  }  

if (tingcond4 == 4) {

 for (int i = 0; i< 20; i++){leds[p4_pbox2d[i]] = CHSV (tinghue2, tingsat2, 0);} 
 for (int i = 0; i< 28; i++){leds[p4_pbox3d[i]] = CHSV (tinghue3, tingsat3, tingval3);} 
}

if (tingcond4 == 5) {
for (int i = 0; i< 28; i++){leds[p4_pbox3d[i]] = CHSV (tinghue3, tingsat3, 0);}
for (int i = 0; i< 36; i++){leds[p4_pbox4d[i]] = CHSV (tinghue4, tingsat4, tingval4);}
}

if (tingcond4 == 6) {
for (int i = 0; i< 36; i++){leds[p4_pbox4d[i]] = CHSV (tinghue4, tingsat4, 0);}
} 
  
  LEDS.show();
  
if (tingtime0 > tingspd) {if (tingcond0 >= 1 && tingcond0 <= 6) {tingcond0 ++;} if (tingcond0 > 6) { tingcond0 = 0;} tingtime0 = 0;}
if (tingtime1 > tingspd) {if (tingcond1 >= 1 && tingcond1 <= 6) {tingcond1 ++;} if (tingcond1 > 6) { tingcond1 = 0;} tingtime1 = 0;}
if (tingtime2 > tingspd) {if (tingcond2 >= 1 && tingcond2 <= 6) {tingcond2 ++;} if (tingcond2 > 6) { tingcond2 = 0;} tingtime2 = 0;}
if (tingtime3 > tingspd) {if (tingcond3 >= 1 && tingcond3 <= 6) {tingcond3 ++;} if (tingcond3 > 6) { tingcond3 = 0;} tingtime3 = 0;}
if (tingtime4 > tingspd) {if (tingcond4 >= 1 && tingcond4 <= 6) {tingcond4 ++;} if (tingcond4 > 6) { tingcond4 = 0;} tingtime4 = 0;}

  
} 
