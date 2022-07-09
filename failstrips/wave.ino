
byte wavespd = 24; //main determinate
byte wavestyle = 2;
byte wavetails = 0; // 0 tails on, 1 off

byte wavehueall = 128; //hue
byte wavehuerange = 15; //gap between hue

byte wavephaseA = 1;
byte wavephaseB = 0;
byte wavephaseC = 0;
byte wavephaseD = 0;
byte wavephaseE = 0;
byte wavephaseF = 0;
byte wavephaseG = 0;
byte wavephaseH = 0;
byte wavephaseI = 0;
byte wavephaseJ = 0;
byte wavephaseK = 0;
byte wavephase99;




elapsedMillis wavetime0;
elapsedMillis wavetime1;
elapsedMillis wavetime2;
elapsedMillis wavetime3;
elapsedMillis wavetime4;
elapsedMillis wavetime5;


elapsedMillis wavetime0c;
elapsedMillis wavetime1c;
elapsedMillis wavetime2c;
elapsedMillis wavetime3c;
elapsedMillis wavetime4c;
elapsedMillis wavetime5c;

elapsedMillis wavetime0e;
elapsedMillis wavetime1e;
elapsedMillis wavetime2e;
elapsedMillis wavetime3e;
elapsedMillis wavetime4e;
elapsedMillis wavetime5e;

elapsedMillis wavetime0g;
elapsedMillis wavetime1g;
elapsedMillis wavetime2g;
elapsedMillis wavetime3g;
elapsedMillis wavetime4g;
elapsedMillis wavetime5g;

elapsedMillis wavetime0i;
elapsedMillis wavetime1i;
elapsedMillis wavetime2i;
elapsedMillis wavetime3i;
elapsedMillis wavetime4i;
elapsedMillis wavetime5i;


int wavewait = 1000;
byte wavehue0;
byte wavehue0x;
byte wavesat0 = 255;


byte wavecond0;
int waveidex0;
int waveidex0x;
int waveval0;

byte wavecond1;
int waveidex1;
int waveidex1x;
int waveval1;

byte wavecond2;
int waveidex2;
int waveidex2x;
int waveval2;

byte wavecond3;
int waveidex3;
int waveidex3x;
int waveval3;

byte wavecond4;
int waveidex4;
int waveidex4x;
int waveval4;

byte wavecond5;
int waveidex5;
int waveidex5x;
int waveval5;

////////
byte wavecond0c;
int waveidex0c;
int waveidex0xc;
int waveval0c;

byte wavecond1c;
int waveidex1c;
int waveidex1xc;
int waveval1c;

byte wavecond2c;
int waveidex2c;
int waveidex2xc;
int waveval2c;

byte wavecond3c;
int waveidex3c;
int waveidex3xc;
int waveval3c;

byte wavecond4c;
int waveidex4c;
int waveidex4xc;
int waveval4c;

byte wavecond5c;
int waveidex5c;
int waveidex5xc;
int waveval5c;


////////
byte wavecond0e;
int waveidex0e;
int waveidex0xe;
int waveval0e;

byte wavecond1e;
int waveidex1e;
int waveidex1xe;
int waveval1e;

byte wavecond2e;
int waveidex2e;
int waveidex2xe;
int waveval2e;

byte wavecond3e;
int waveidex3e;
int waveidex3xe;
int waveval3e;

byte wavecond4e;
int waveidex4e;
int waveidex4xe;
int waveval4e;

byte wavecond5e;
int waveidex5e;
int waveidex5xe;
int waveval5e;


////////
byte wavecond0g;
int waveidex0g;
int waveidex0xg;
int waveval0g;

byte wavecond1g;
int waveidex1g;
int waveidex1xg;
int waveval1g;

byte wavecond2g;
int waveidex2g;
int waveidex2xg;
int waveval2g;

byte wavecond3g;
int waveidex3g;
int waveidex3xg;
int waveval3g;

byte wavecond4g;
int waveidex4g;
int waveidex4xg;
int waveval4g;

byte wavecond5g;
int waveidex5g;
int waveidex5xg;
int waveval5g;

////////
byte wavecond0i;
int waveidex0i;
int waveidex0xi;
int waveval0i;

byte wavecond1i;
int waveidex1i;
int waveidex1xi;
int waveval1i;

byte wavecond2i;
int waveidex2i;
int waveidex2xi;
int waveval2i;

byte wavecond3i;
int waveidex3i;
int waveidex3xi;
int waveval3i;

byte wavecond4i;
int waveidex4i;
int waveidex4xi;
int waveval4i;

byte wavecond5i;
int waveidex5i;
int waveidex5xi;
int waveval5i;


void wave (){

if (wavestyle == 0) {

if (wavephaseA == 1){
//panel 0 top left
waveidex0 = random (0,13);
waveidex0x = random (0,12);
wavehue0 = 0;
wavehue0x = 15; 
  
leds[p0_pbox0e[waveidex0]] = CHSV (wavehue0, wavesat0, waveval0); 
leds[p0_pbox0ex[waveidex0x]] = CHSV (wavehue0x, wavesat0, waveval0);

if (wavecond0 == 0) {
 if (waveval0 < 254) { waveval0 = waveval0 + wavespd;} 
 if (waveval0 >= 254){ wavecond0 = 1; } }
  
if (wavecond0 == 1) {
  if (waveval0 > 3.6) { waveval0 = waveval0 - wavespd; } 
  if (waveval0 <= 3.6 ) { wavetime0 = 0; wavecond0 = 2;} }
  
if (wavecond0 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0 > wavewait) {wavecond0 = 0; } }


//panel 0 bottom left 
waveidex4 = random (0,13);
waveidex4x = random (0,12);
 
  
leds[p0_pbox4e[waveidex4]] = CHSV (wavehue0, wavesat0, waveval4); 
leds[p0_pbox4ex[waveidex4x]] = CHSV (wavehue0x, wavesat0, waveval4);

if (wavecond4 == 0) {
 if (waveval4 < 244) { waveval4 = waveval4 + wavespd;} 
 if (waveval4 >= 244){ wavecond4 = 1; wavephaseB = 1; } }
  
if (wavecond4 == 1) {
  if (waveval4 > 3.6) { waveval4 = waveval4 - wavespd; } 
  if (waveval4 <= 3.6 ) {  wavetime4 = 0; wavecond4 = 2;} }
  
  

if (wavecond4 == 2) { for (int i = 0; i< 13; i++){  leds[p0_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p0_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4 > wavewait) {wavephaseA = 0; wavecond4 = 0; } }

}



///second phase
//panel 0 top right
if (wavephaseB == 1){

waveidex1 = random (0,13);
waveidex1x = random (0,12);

  
leds[p0_pbox1e[waveidex1]] = CHSV (wavehue0, wavesat0, waveval1); 
leds[p0_pbox1ex[waveidex1x]] = CHSV (wavehue0x, wavesat0, waveval1);

if (wavecond1 == 0) {
 if (waveval1 < 254) { waveval1 = waveval1 + wavespd;} 
 if (waveval1 >= 254){ wavecond1 = 1;  } }
  
if (wavecond1 == 1) {
  if (waveval1 > 3.6) { waveval1 = waveval1 - wavespd; } 
  if (waveval1 <= 3.6 ) { wavetime1 = 0; wavecond1 = 2;} }
  
if (wavecond1 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1 > wavewait) {wavecond1 = 0; } }


//panel 0 mid left

waveidex2 = random (0,13);
waveidex2x = random (0,12);

  
leds[p0_pbox2e[waveidex2]] = CHSV (wavehue0, wavesat0, waveval2); 
leds[p0_pbox2ex[waveidex2x]] = CHSV (wavehue0x, wavesat0, waveval2);

 if (wavecond2 == 0) {
 if (waveval2 < 254) { waveval2 = waveval2 + wavespd;} 
 if (waveval2 >= 254){ wavecond2 = 1;  } }
  
if (wavecond2 == 1) {
  if (waveval2 > 3.6) { waveval2 = waveval2 - wavespd; } 
  if (waveval2 <= 3.6 ) { wavetime2 = 0; wavecond2 = 2;} }
  
if (wavecond2 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2 > wavewait) {wavecond2 = 0; } }





 //panel 0 bottom right
waveidex5 = random (0,13);
waveidex5x = random (0,12);
 
  
leds[p0_pbox5e[waveidex5]] = CHSV (wavehue0, wavesat0, waveval5); 
leds[p0_pbox5ex[waveidex5x]] = CHSV (wavehue0x, wavesat0, waveval5);

if (wavecond5 == 0) {
 if (waveval5 < 244) { waveval5 = waveval5 + wavespd;} 
 if (waveval5 >= 244){ wavecond5 = 1; wavephaseC = 1;} }
  
if (wavecond5 == 1) {
  if (waveval5 > 3.6) { waveval5 = waveval5 - wavespd; } 
  if (waveval5 <= 3.6 ) {  wavetime5 = 0; wavecond5 = 2;} }
  
  

if (wavecond5 == 2) { for (int i = 0; i< 13; i++){  leds[p0_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p0_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5 > wavewait) {wavecond5 = 0; wavephaseB = 0; } }

}

//third phase
if (wavephaseC == 1){
//panel 1 top left
waveidex0c = random (0,13);
waveidex0xc = random (0,12);

  
leds[p1_pbox0e[waveidex0c]] = CHSV (wavehue0, wavesat0, waveval0c); 
leds[p1_pbox0ex[waveidex0xc]] = CHSV (wavehue0x, wavesat0, waveval0c);

if (wavecond0c == 0) {
 if (waveval0c < 254) { waveval0c = waveval0c + wavespd;} 
 if (waveval0c >= 254){ wavecond0c = 1; } }
  
if (wavecond0c == 1) {
  if (waveval0c > 3.6) { waveval0c = waveval0c - wavespd; } 
  if (waveval0c <= 3.6 ) { wavetime0c = 0; wavecond0c = 2;} }
  
if (wavecond0c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0c > wavewait) {wavecond0c = 0; } }



//panel 0 mid right
waveidex3 = random (0,13);
waveidex3x = random (0,12);

  
leds[p0_pbox3e[waveidex3]] = CHSV (wavehue0, wavesat0, waveval3); 
leds[p0_pbox3ex[waveidex3x]] = CHSV (wavehue0x, wavesat0, waveval3);

 if (wavecond3 == 0) {
 if (waveval3 < 254) { waveval3 = waveval3 + wavespd;} 
 if (waveval3 >= 254){ wavecond3 = 1;  } }
  
if (wavecond3 == 1) {
  if (waveval3 > 3.6) { waveval3 = waveval3 - wavespd; } 
  if (waveval3 <= 3.6 ) { wavetime3 = 0; wavecond3 = 2;} }
  
if (wavecond3 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3 > wavewait) {wavecond3 = 0; } }





//panel 1 bottom left 
waveidex4c = random (0,13);
waveidex4xc = random (0,12);
 
  
leds[p1_pbox4e[waveidex4c]] = CHSV (wavehue0, wavesat0, waveval4c); 
leds[p1_pbox4ex[waveidex4xc]] = CHSV (wavehue0x, wavesat0, waveval4c);

if (wavecond4c == 0) {
 if (waveval4c < 244) { waveval4c = waveval4c + wavespd;} 
 if (waveval4c >= 244){ wavecond4c = 1; wavephaseD = 1; } }
  
if (wavecond4c == 1) {
  if (waveval4c > 3.6) { waveval4c = waveval4c - wavespd; } 
  if (waveval4c <= 3.6 ) {  wavetime4c = 0; wavecond4c = 2;} }
  
  

if (wavecond4c == 2) { for (int i = 0; i< 13; i++){  leds[p1_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p1_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4c > wavewait) {wavephaseC = 0; wavecond4c = 0;  } }

}


//fourth phase
//panel 1 top right
if (wavephaseD == 1){

waveidex1c = random (0,13);
waveidex1xc = random (0,12);

  
leds[p1_pbox1e[waveidex1c]] = CHSV (wavehue0, wavesat0, waveval1c); 
leds[p1_pbox1ex[waveidex1xc]] = CHSV (wavehue0x, wavesat0, waveval1c);

if (wavecond1c == 0) {
 if (waveval1c < 254) { waveval1c = waveval1c + wavespd;} 
 if (waveval1c >= 254){ wavecond1c = 1;  } }
  
if (wavecond1c == 1) {
  if (waveval1c > 3.6) { waveval1c = waveval1c - wavespd; } 
  if (waveval1c <= 3.6 ) { wavetime1c = 0; wavecond1c = 2;} }
  
if (wavecond1c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1c > wavewait) {wavecond1c = 0; } }


//panel 1 mid left

waveidex2c = random (0,13);
waveidex2xc = random (0,12);

  
leds[p1_pbox2e[waveidex2c]] = CHSV (wavehue0, wavesat0, waveval2c); 
leds[p1_pbox2ex[waveidex2xc]] = CHSV (wavehue0x, wavesat0, waveval2c);

 if (wavecond2c == 0) {
 if (waveval2c < 254) { waveval2c = waveval2c + wavespd;} 
 if (waveval2c >= 254){ wavecond2c = 1;  } }
  
if (wavecond2c == 1) {
  if (waveval2c > 3.6) { waveval2c = waveval2c - wavespd; } 
  if (waveval2c <= 3.6 ) { wavetime2c = 0; wavecond2c = 2;} }
  
if (wavecond2c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2c > wavewait) {wavecond2c = 0; } }





 //panel 1 bottom right
waveidex5c = random (0,13);
waveidex5xc = random (0,12);
 
  
leds[p1_pbox5e[waveidex5c]] = CHSV (wavehue0, wavesat0, waveval5c); 
leds[p1_pbox5ex[waveidex5xc]] = CHSV (wavehue0x, wavesat0, waveval5c);

if (wavecond5c == 0) {
 if (waveval5c < 244) { waveval5c = waveval5c + wavespd;} 
 if (waveval5c >= 244){ wavecond5c = 1; wavephaseE = 1;} }
  
if (wavecond5c == 1) {
  if (waveval5c > 3.6) { waveval5c = waveval5c - wavespd; } 
  if (waveval5c <= 3.6 ) {  wavetime5c = 0; wavecond5c = 2;} }
  
  

if (wavecond5c == 2) { for (int i = 0; i< 13; i++){  leds[p1_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p1_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5c > wavewait) {wavecond5c = 0; wavephaseD = 0;  } }

}


//fifth phase
if (wavephaseE == 1){
//panel 2 top left
waveidex0e = random (0,13);
waveidex0xe = random (0,12);

  
leds[p2_pbox0e[waveidex0e]] = CHSV (wavehue0, wavesat0, waveval0e); 
leds[p2_pbox0ex[waveidex0xe]] = CHSV (wavehue0x, wavesat0, waveval0e);

if (wavecond0e == 0) {
 if (waveval0e < 254) { waveval0e = waveval0e + wavespd;} 
 if (waveval0e >= 254){ wavecond0e = 1; } }
  
if (wavecond0e == 1) {
  if (waveval0e > 3.6) { waveval0e = waveval0e - wavespd; } 
  if (waveval0e <= 3.6 ) { wavetime0e = 0; wavecond0e = 2;} }
  
if (wavecond0e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0e > wavewait) {wavecond0e = 0; } }



//panel 1 mid right
waveidex3c = random (0,13);
waveidex3xc = random (0,12);

  
leds[p1_pbox3e[waveidex3c]] = CHSV (wavehue0, wavesat0, waveval3c); 
leds[p1_pbox3ex[waveidex3xc]] = CHSV (wavehue0x, wavesat0, waveval3c);

 if (wavecond3c == 0) {
 if (waveval3c < 254) { waveval3c = waveval3c + wavespd;} 
 if (waveval3c >= 254){ wavecond3c = 1;  } }
  
if (wavecond3c == 1) {
  if (waveval3c > 3.6) { waveval3c = waveval3c - wavespd; } 
  if (waveval3c <= 3.6 ) { wavetime3c = 0; wavecond3c = 2;} }
  
if (wavecond3c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3c > wavewait) {wavecond3c = 0; } }





//panel 2 bottom left 
waveidex4e = random (0,13);
waveidex4xe = random (0,12);
 
  
leds[p2_pbox4e[waveidex4e]] = CHSV (wavehue0, wavesat0, waveval4e); 
leds[p2_pbox4ex[waveidex4xe]] = CHSV (wavehue0x, wavesat0, waveval4e);

if (wavecond4e == 0) {
 if (waveval4e < 244) { waveval4e = waveval4e + wavespd;} 
 if (waveval4e >= 244){ wavecond4e = 1;  wavephaseF = 1;} }
  
if (wavecond4e == 1) {
  if (waveval4e > 3.6) { waveval4e = waveval4e - wavespd; } 
  if (waveval4e <= 3.6 ) {  wavetime4e = 0; wavecond4e = 2;} }
  
  

if (wavecond4e == 2) { for (int i = 0; i< 13; i++){  leds[p2_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p2_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4e > wavewait) {wavephaseE = 0; wavecond4e = 0;  } }

}


//sixth phase (F)
//panel 2 top right
if (wavephaseF == 1){

waveidex1e = random (0,13);
waveidex1xe = random (0,12);

  
leds[p2_pbox1e[waveidex1e]] = CHSV (wavehue0, wavesat0, waveval1e); 
leds[p2_pbox1ex[waveidex1xe]] = CHSV (wavehue0x, wavesat0, waveval1e);

if (wavecond1e == 0) {
 if (waveval1e < 254) { waveval1e = waveval1e + wavespd;} 
 if (waveval1e >= 254){ wavecond1e = 1;  } }
  
if (wavecond1e == 1) {
  if (waveval1e > 3.6) { waveval1e = waveval1e - wavespd; } 
  if (waveval1e <= 3.6 ) { wavetime1e = 0; wavecond1e = 2;} }
  
if (wavecond1e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1e > wavewait) {wavecond1e = 0; } }


//panel 2 mid left

waveidex2e = random (0,13);
waveidex2xe = random (0,12);

  
leds[p2_pbox2e[waveidex2e]] = CHSV (wavehue0, wavesat0, waveval2e); 
leds[p2_pbox2ex[waveidex2xe]] = CHSV (wavehue0x, wavesat0, waveval2e);

 if (wavecond2e == 0) {
 if (waveval2e < 254) { waveval2e = waveval2e + wavespd;} 
 if (waveval2e >= 254){ wavecond2e = 1;  } }
  
if (wavecond2e == 1) {
  if (waveval2e > 3.6) { waveval2e = waveval2e - wavespd; } 
  if (waveval2e <= 3.6 ) { wavetime2e = 0; wavecond2e = 2;} }
  
if (wavecond2e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2e > wavewait) {wavecond2e = 0; } }





 //panel 2 bottom right
waveidex5e = random (0,13);
waveidex5xe = random (0,12);
 
  
leds[p2_pbox5e[waveidex5e]] = CHSV (wavehue0, wavesat0, waveval5e); 
leds[p2_pbox5ex[waveidex5xe]] = CHSV (wavehue0x, wavesat0, waveval5e);

if (wavecond5e == 0) {
 if (waveval5e < 244) { waveval5e = waveval5e + wavespd;} 
 if (waveval5e >= 244){ wavecond5e = 1; wavephaseG = 1;} }
  
if (wavecond5e == 1) {
  if (waveval5e > 3.6) { waveval5e = waveval5e - wavespd; } 
  if (waveval5e <= 3.6 ) {  wavetime5e = 0; wavecond5e = 2;} }
  
  

if (wavecond5e == 2) { for (int i = 0; i< 13; i++){  leds[p2_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p2_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5e > wavewait) {wavecond5e = 0; wavephaseF = 0;  } }

}



//seventh phase
if (wavephaseG == 1){
//panel 3 top left

waveidex0g = random (0,13);
waveidex0xg = random (0,12);

  
leds[p3_pbox0e[waveidex0g]] = CHSV (wavehue0, wavesat0, waveval0g); 
leds[p3_pbox0ex[waveidex0xg]] = CHSV (wavehue0x, wavesat0, waveval0g);

if (wavecond0g == 0) {
 if (waveval0g < 254) { waveval0g = waveval0g + wavespd;} 
 if (waveval0g >= 254){ wavecond0g = 1; } }
  
if (wavecond0g == 1) {
  if (waveval0g > 3.6) { waveval0g = waveval0g - wavespd; } 
  if (waveval0g <= 3.6 ) { wavetime0g = 0; wavecond0g = 2;} }
  
if (wavecond0g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0g > wavewait) {wavecond0g = 0; } }



//panel 2 mid right
waveidex3e = random (0,13);
waveidex3xe = random (0,12);

  
leds[p2_pbox3e[waveidex3e]] = CHSV (wavehue0, wavesat0, waveval3e); 
leds[p2_pbox3ex[waveidex3xe]] = CHSV (wavehue0x, wavesat0, waveval3e);

 if (wavecond3e == 0) {
 if (waveval3e < 254) { waveval3e = waveval3e + wavespd;} 
 if (waveval3e >= 254){ wavecond3e = 1;  } }
  
if (wavecond3e == 1) {
  if (waveval3e > 3.6) { waveval3e = waveval3e - wavespd; } 
  if (waveval3e <= 3.6 ) { wavetime3e = 0; wavecond3e = 2;} }
  
if (wavecond3e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3e > wavewait) {wavecond3e = 0; } }





//panel 3 bottom left 
waveidex4g = random (0,13);
waveidex4xg = random (0,12);
 
  
leds[p3_pbox4e[waveidex4g]] = CHSV (wavehue0, wavesat0, waveval4g); 
leds[p3_pbox4ex[waveidex4xg]] = CHSV (wavehue0x, wavesat0, waveval4g);

if (wavecond4g == 0) {
 if (waveval4g < 244) { waveval4g = waveval4g + wavespd;} 
 if (waveval4g >= 244){ wavecond4g = 1;  wavephaseH = 1;} }
  
if (wavecond4g == 1) {
  if (waveval4g > 3.6) { waveval4g = waveval4g - wavespd; } 
  if (waveval4g <= 3.6 ) {  wavetime4g = 0; wavecond4g = 2;} }
  
  

if (wavecond4g == 2) { for (int i = 0; i< 13; i++){  leds[p3_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p3_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4g > wavewait) {wavephaseG = 0; wavecond4g = 0;   } }

}



//eighth phase (H)
//panel 3 top right
if (wavephaseH == 1){

waveidex1g = random (0,13);
waveidex1xg = random (0,12);

  
leds[p3_pbox1e[waveidex1g]] = CHSV (wavehue0, wavesat0, waveval1g); 
leds[p3_pbox1ex[waveidex1xg]] = CHSV (wavehue0x, wavesat0, waveval1g);

if (wavecond1g == 0) {
 if (waveval1g < 254) { waveval1g = waveval1g + wavespd;} 
 if (waveval1g >= 254){ wavecond1g = 1;  } }
  
if (wavecond1g == 1) {
  if (waveval1g > 3.6) { waveval1g = waveval1g - wavespd; } 
  if (waveval1g <= 3.6 ) { wavetime1g = 0; wavecond1g = 2;} }
  
if (wavecond1g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1g > wavewait) {wavecond1g = 0; } }


//panel 3 mid left

waveidex2g = random (0,13);
waveidex2xg = random (0,12);

  
leds[p3_pbox2e[waveidex2g]] = CHSV (wavehue0, wavesat0, waveval2g); 
leds[p3_pbox2ex[waveidex2xg]] = CHSV (wavehue0x, wavesat0, waveval2g);

 if (wavecond2g == 0) {
 if (waveval2g < 254) { waveval2g = waveval2g + wavespd;} 
 if (waveval2g >= 254){ wavecond2g = 1;  } }
  
if (wavecond2g == 1) {
  if (waveval2g > 3.6) { waveval2g = waveval2g - wavespd; } 
  if (waveval2g <= 3.6 ) { wavetime2g = 0; wavecond2g = 2;} }
  
if (wavecond2g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2g > wavewait) {wavecond2g = 0; } }





 //panel 3 bottom right
waveidex5g = random (0,13);
waveidex5xg = random (0,12);
 
  
leds[p3_pbox5e[waveidex5g]] = CHSV (wavehue0, wavesat0, waveval5g); 
leds[p3_pbox5ex[waveidex5xg]] = CHSV (wavehue0x, wavesat0, waveval5g);

if (wavecond5g == 0) {
 if (waveval5g < 244) { waveval5g = waveval5g + wavespd;} 
 if (waveval5g >= 244){ wavecond5g = 1; wavephaseI = 1;} }
  
if (wavecond5g == 1) {
  if (waveval5g > 3.6) { waveval5g = waveval5g - wavespd; } 
  if (waveval5g <= 3.6 ) {  wavetime5g = 0; wavecond5g = 2;} }
  
  

if (wavecond5g == 2) { for (int i = 0; i< 13; i++){  leds[p3_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p3_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5g > wavewait) {wavecond5g = 0; wavephaseH = 0;   } }

}



//nineth phase (I)
if (wavephaseI == 1){
//panel 4 top left

waveidex0i = random (0,13);
waveidex0xi = random (0,12);

  
leds[p4_pbox0e[waveidex0i]] = CHSV (wavehue0, wavesat0, waveval0i); 
leds[p4_pbox0ex[waveidex0xi]] = CHSV (wavehue0x, wavesat0, waveval0i);

if (wavecond0i == 0) {
 if (waveval0i < 254) { waveval0i = waveval0i + wavespd;} 
 if (waveval0i >= 254){ wavecond0i = 1; } }
  
if (wavecond0i == 1) {
  if (waveval0i > 3.6) { waveval0i = waveval0i - wavespd; } 
  if (waveval0i <= 3.6 ) { wavetime0i = 0; wavecond0i = 2;} }
  
if (wavecond0i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0i > wavewait) {wavecond0i = 0; } }



//panel 3 mid right
waveidex3g = random (0,13);
waveidex3xg = random (0,12);

  
leds[p3_pbox3e[waveidex3g]] = CHSV (wavehue0, wavesat0, waveval3g); 
leds[p3_pbox3ex[waveidex3xg]] = CHSV (wavehue0x, wavesat0, waveval3g);

 if (wavecond3g == 0) {
 if (waveval3g < 254) { waveval3g = waveval3g + wavespd;} 
 if (waveval3g >= 254){ wavecond3g = 1;  } }
  
if (wavecond3g == 1) {
  if (waveval3g > 3.6) { waveval3g = waveval3g - wavespd; } 
  if (waveval3g <= 3.6 ) { wavetime3g = 0; wavecond3g = 2;} }
  
if (wavecond3g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3g > wavewait) {wavecond3g = 0; } }





//panel 4 bottom left 
waveidex4i = random (0,13);
waveidex4xi = random (0,12);
 
  
leds[p4_pbox4e[waveidex4i]] = CHSV (wavehue0, wavesat0, waveval4i); 
leds[p4_pbox4ex[waveidex4xi]] = CHSV (wavehue0x, wavesat0, waveval4i);

if (wavecond4i == 0) {
 if (waveval4i < 244) { waveval4i = waveval4i + wavespd;} 
 if (waveval4i >= 244){ wavecond4i = 1; wavephaseJ = 1;  } }
  
if (wavecond4i == 1) {
  if (waveval4i > 3.6) { waveval4i = waveval4i - wavespd; } 
  if (waveval4i <= 3.6 ) {  wavetime4i = 0; wavecond4i = 2;} }
  
  

if (wavecond4i == 2) { for (int i = 0; i< 13; i++){  leds[p4_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p4_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4i > wavewait) {wavephaseI = 0; wavecond4i = 0;  } }

}


//tenth phase (J)
//panel 3 top right
if (wavephaseJ == 1){

waveidex1i = random (0,13);
waveidex1xi = random (0,12);

  
leds[p4_pbox1e[waveidex1i]] = CHSV (wavehue0, wavesat0, waveval1i); 
leds[p4_pbox1ex[waveidex1xi]] = CHSV (wavehue0x, wavesat0, waveval1i);

if (wavecond1i == 0) {
 if (waveval1i < 254) { waveval1i = waveval1i + wavespd;} 
 if (waveval1i >= 254){ wavecond1i = 1;  } }
  
if (wavecond1i == 1) {
  if (waveval1i > 3.6) { waveval1i = waveval1i - wavespd; } 
  if (waveval1i <= 3.6 ) { wavetime1i = 0; wavecond1i = 2;} }
  
if (wavecond1i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1i > wavewait) {wavecond1i = 0; } }


//panel 3 mid left

waveidex2i = random (0,13);
waveidex2xi = random (0,12);

  
leds[p4_pbox2e[waveidex2i]] = CHSV (wavehue0, wavesat0, waveval2i); 
leds[p4_pbox2ex[waveidex2xi]] = CHSV (wavehue0x, wavesat0, waveval2i);

 if (wavecond2i == 0) {
 if (waveval2i < 254) { waveval2i = waveval2i + wavespd;} 
 if (waveval2i >= 254){ wavecond2i = 1;  } }
  
if (wavecond2i == 1) {
  if (waveval2i > 3.6) { waveval2i = waveval2i - wavespd; } 
  if (waveval2i <= 3.6 ) { wavetime2i = 0; wavecond2i = 2;} }
  
if (wavecond2i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2i > wavewait) {wavecond2i = 0; } }





 //panel 3 bottom right
waveidex5i = random (0,13);
waveidex5xi = random (0,12);
 
  
leds[p4_pbox5e[waveidex5i]] = CHSV (wavehue0, wavesat0, waveval5i); 
leds[p4_pbox5ex[waveidex5xi]] = CHSV (wavehue0x, wavesat0, waveval5i);

if (wavecond5i == 0) {
 if (waveval5i < 244) { waveval5i = waveval5i + wavespd;} 
 if (waveval5i >= 244){ wavecond5i = 1; wavephaseK = 1; } }
  
if (wavecond5i == 1) {
  if (waveval5i > 3.6) { waveval5i = waveval5i - wavespd; } 
  if (waveval5i <= 3.6 ) {  wavetime5i = 0; wavecond5i = 2;} }
  
  

if (wavecond5i == 2) { for (int i = 0; i< 13; i++){  leds[p4_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p4_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5i > wavewait) {wavecond5i = 0; wavephaseJ = 0;  wavetime5i = 0;   } }

}



//elleventh phase (K)
if (wavephaseK == 1){

//panel 3 mid right
waveidex3i = random (0,13);
waveidex3xi = random (0,12);

  
leds[p4_pbox3e[waveidex3i]] = CHSV (wavehue0, wavesat0, waveval3i); 
leds[p4_pbox3ex[waveidex3xi]] = CHSV (wavehue0x, wavesat0, waveval3i);

 if (wavecond3i == 0) {
 if (waveval3i < 254) { waveval3i = waveval3i + wavespd;} 
 if (waveval3i >= 254){ wavecond3i = 1;  } }
  
if (wavecond3i == 1) {
  if (waveval3i > 3.6) { waveval3i = waveval3i - wavespd; } 
  if (waveval3i <= 3.6 ) { wavetime3i = 0; wavecond3i = 2;} }
  
if (wavecond3i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3i > wavewait) {wavephaseK = 0; wavecond3i = 0; wavephase99 = 1; wavetime3i = 0;} }



}

if (wavephase99 == 1){ if (wavetime3i >250) {wavephase99 = 0; wavephaseA = 1;}} 


} //end style 0
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (wavestyle == 1) {

if (wavephaseA == 1){
//panel 0 top left
waveidex0 = random (0,13);
waveidex0x = random (0,12);
wavehue0 = 0;
wavehue0x = 15; 
  
leds[p0_pbox0e[waveidex0]] = CHSV (wavehue0, wavesat0, waveval0); 
leds[p0_pbox0ex[waveidex0x]] = CHSV (wavehue0x, wavesat0, waveval0);

if (wavecond0 == 0) {
 if (waveval0 < 254) { waveval0 = waveval0 + wavespd;} 
 if (waveval0 >= 254){ wavecond0 = 1; } }
  
if (wavecond0 == 1) {
  if (waveval0 > 3.6) { waveval0 = waveval0 - wavespd; } 
  if (waveval0 <= 3.6 ) { wavetime0 = 0; wavecond0 = 2;} }
  
if (wavecond0 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0 > wavewait) {wavecond0 = 0; ;} }


//panel 0 bottom left 
waveidex4 = random (0,13);
waveidex4x = random (0,12);
 
  
leds[p0_pbox4e[waveidex4]] = CHSV (wavehue0, wavesat0, waveval4); 
leds[p0_pbox4ex[waveidex4x]] = CHSV (wavehue0x, wavesat0, waveval4);

if (wavecond4 == 0) {
 if (waveval4 < 244) { waveval4 = waveval4 + wavespd;} 
 if (waveval4 >= 244){ wavecond4 = 1;  } }
  
if (wavecond4 == 1) {
  if (waveval4 > 3.6) { waveval4 = waveval4 - wavespd; } 
  if (waveval4 <= 3.6 ) {  wavetime4 = 0; wavecond4 = 2;} }
  
  

if (wavecond4 == 2) { for (int i = 0; i< 13; i++){  leds[p0_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p0_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4 > wavewait) {wavephaseA = 0; wavecond4 = 0; wavephase99 = 1; wavetime3i = 0; } }

}



///second phase
//panel 0 top right
if (wavephaseB == 1){

waveidex1 = random (0,13);
waveidex1x = random (0,12);

  
leds[p0_pbox1e[waveidex1]] = CHSV (wavehue0, wavesat0, waveval1); 
leds[p0_pbox1ex[waveidex1x]] = CHSV (wavehue0x, wavesat0, waveval1);

if (wavecond1 == 0) {
 if (waveval1 < 254) { waveval1 = waveval1 + wavespd;} 
 if (waveval1 >= 254){ wavecond1 = 1;  } }
  
if (wavecond1 == 1) {
  if (waveval1 > 3.6) { waveval1 = waveval1 - wavespd; } 
  if (waveval1 <= 3.6 ) { wavetime1 = 0; wavecond1 = 2;} }
  
if (wavecond1 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1 > wavewait) {wavecond1 = 0; } }


//panel 0 mid left

waveidex2 = random (0,13);
waveidex2x = random (0,12);

  
leds[p0_pbox2e[waveidex2]] = CHSV (wavehue0, wavesat0, waveval2); 
leds[p0_pbox2ex[waveidex2x]] = CHSV (wavehue0x, wavesat0, waveval2);

 if (wavecond2 == 0) {
 if (waveval2 < 254) { waveval2 = waveval2 + wavespd;} 
 if (waveval2 >= 254){ wavecond2 = 1;  } }
  
if (wavecond2 == 1) {
  if (waveval2 > 3.6) { waveval2 = waveval2 - wavespd; } 
  if (waveval2 <= 3.6 ) { wavetime2 = 0; wavecond2 = 2;} }
  
if (wavecond2 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2 > wavewait) {wavecond2 = 0; } }





 //panel 0 bottom right
waveidex5 = random (0,13);
waveidex5x = random (0,12);
 
  
leds[p0_pbox5e[waveidex5]] = CHSV (wavehue0, wavesat0, waveval5); 
leds[p0_pbox5ex[waveidex5x]] = CHSV (wavehue0x, wavesat0, waveval5);

if (wavecond5 == 0) {
 if (waveval5 < 244) { waveval5 = waveval5 + wavespd;} 
 if (waveval5 >= 244){ wavecond5 = 1; wavephaseA = 1;} }
  
if (wavecond5 == 1) {
  if (waveval5 > 3.6) { waveval5 = waveval5 - wavespd; } 
  if (waveval5 <= 3.6 ) {  wavetime5 = 0; wavecond5 = 2;} }
  
  

if (wavecond5 == 2) { for (int i = 0; i< 13; i++){  leds[p0_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p0_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5 > wavewait) {wavecond5 = 0; wavephaseB = 0; } }

}

//third phase
if (wavephaseC == 1){
//panel 1 top left
waveidex0c = random (0,13);
waveidex0xc = random (0,12);

  
leds[p1_pbox0e[waveidex0c]] = CHSV (wavehue0, wavesat0, waveval0c); 
leds[p1_pbox0ex[waveidex0xc]] = CHSV (wavehue0x, wavesat0, waveval0c);

if (wavecond0c == 0) {
 if (waveval0c < 254) { waveval0c = waveval0c + wavespd;} 
 if (waveval0c >= 254){ wavecond0c = 1; } }
  
if (wavecond0c == 1) {
  if (waveval0c > 3.6) { waveval0c = waveval0c - wavespd; } 
  if (waveval0c <= 3.6 ) { wavetime0c = 0; wavecond0c = 2;} }
  
if (wavecond0c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0c > wavewait) {wavecond0c = 0; } }



//panel 0 mid right
waveidex3 = random (0,13);
waveidex3x = random (0,12);

  
leds[p0_pbox3e[waveidex3]] = CHSV (wavehue0, wavesat0, waveval3); 
leds[p0_pbox3ex[waveidex3x]] = CHSV (wavehue0x, wavesat0, waveval3);

 if (wavecond3 == 0) {
 if (waveval3 < 254) { waveval3 = waveval3 + wavespd;} 
 if (waveval3 >= 254){ wavecond3 = 1;  } }
  
if (wavecond3 == 1) {
  if (waveval3 > 3.6) { waveval3 = waveval3 - wavespd; } 
  if (waveval3 <= 3.6 ) { wavetime3 = 0; wavecond3 = 2;} }
  
if (wavecond3 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3 > wavewait) {wavecond3 = 0; } }





//panel 1 bottom left 
waveidex4c = random (0,13);
waveidex4xc = random (0,12);
 
  
leds[p1_pbox4e[waveidex4c]] = CHSV (wavehue0, wavesat0, waveval4c); 
leds[p1_pbox4ex[waveidex4xc]] = CHSV (wavehue0x, wavesat0, waveval4c);

if (wavecond4c == 0) {
 if (waveval4c < 244) { waveval4c = waveval4c + wavespd;} 
 if (waveval4c >= 244){ wavecond4c = 1; wavephaseB = 1; } }
  
if (wavecond4c == 1) {
  if (waveval4c > 3.6) { waveval4c = waveval4c - wavespd; } 
  if (waveval4c <= 3.6 ) {  wavetime4c = 0; wavecond4c = 2;} }
  
  

if (wavecond4c == 2) { for (int i = 0; i< 13; i++){  leds[p1_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p1_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4c > wavewait) {wavephaseC = 0; wavecond4c = 0;  } }

}


//fourth phase
//panel 1 top right
if (wavephaseD == 1){

waveidex1c = random (0,13);
waveidex1xc = random (0,12);

  
leds[p1_pbox1e[waveidex1c]] = CHSV (wavehue0, wavesat0, waveval1c); 
leds[p1_pbox1ex[waveidex1xc]] = CHSV (wavehue0x, wavesat0, waveval1c);

if (wavecond1c == 0) {
 if (waveval1c < 254) { waveval1c = waveval1c + wavespd;} 
 if (waveval1c >= 254){ wavecond1c = 1;  } }
  
if (wavecond1c == 1) {
  if (waveval1c > 3.6) { waveval1c = waveval1c - wavespd; } 
  if (waveval1c <= 3.6 ) { wavetime1c = 0; wavecond1c = 2;} }
  
if (wavecond1c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1c > wavewait) {wavecond1c = 0; } }


//panel 1 mid left

waveidex2c = random (0,13);
waveidex2xc = random (0,12);

  
leds[p1_pbox2e[waveidex2c]] = CHSV (wavehue0, wavesat0, waveval2c); 
leds[p1_pbox2ex[waveidex2xc]] = CHSV (wavehue0x, wavesat0, waveval2c);

 if (wavecond2c == 0) {
 if (waveval2c < 254) { waveval2c = waveval2c + wavespd;} 
 if (waveval2c >= 254){ wavecond2c = 1;  } }
  
if (wavecond2c == 1) {
  if (waveval2c > 3.6) { waveval2c = waveval2c - wavespd; } 
  if (waveval2c <= 3.6 ) { wavetime2c = 0; wavecond2c = 2;} }
  
if (wavecond2c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2c > wavewait) {wavecond2c = 0; } }





 //panel 1 bottom right
waveidex5c = random (0,13);
waveidex5xc = random (0,12);
 
  
leds[p1_pbox5e[waveidex5c]] = CHSV (wavehue0, wavesat0, waveval5c); 
leds[p1_pbox5ex[waveidex5xc]] = CHSV (wavehue0x, wavesat0, waveval5c);

if (wavecond5c == 0) {
 if (waveval5c < 244) { waveval5c = waveval5c + wavespd;} 
 if (waveval5c >= 244){ wavecond5c = 1; wavephaseC = 1;} }
  
if (wavecond5c == 1) {
  if (waveval5c > 3.6) { waveval5c = waveval5c - wavespd; } 
  if (waveval5c <= 3.6 ) {  wavetime5c = 0; wavecond5c = 2;} }
  
  

if (wavecond5c == 2) { for (int i = 0; i< 13; i++){  leds[p1_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p1_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5c > wavewait) {wavecond5c = 0; wavephaseD = 0;  } }

}


//fifth phase
if (wavephaseE == 1){
//panel 2 top left
waveidex0e = random (0,13);
waveidex0xe = random (0,12);

  
leds[p2_pbox0e[waveidex0e]] = CHSV (wavehue0, wavesat0, waveval0e); 
leds[p2_pbox0ex[waveidex0xe]] = CHSV (wavehue0x, wavesat0, waveval0e);

if (wavecond0e == 0) {
 if (waveval0e < 254) { waveval0e = waveval0e + wavespd;} 
 if (waveval0e >= 254){ wavecond0e = 1; } }
  
if (wavecond0e == 1) {
  if (waveval0e > 3.6) { waveval0e = waveval0e - wavespd; } 
  if (waveval0e <= 3.6 ) { wavetime0e = 0; wavecond0e = 2;} }
  
if (wavecond0e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0e > wavewait) {wavecond0e = 0; } }



//panel 1 mid right
waveidex3c = random (0,13);
waveidex3xc = random (0,12);

  
leds[p1_pbox3e[waveidex3c]] = CHSV (wavehue0, wavesat0, waveval3c); 
leds[p1_pbox3ex[waveidex3xc]] = CHSV (wavehue0x, wavesat0, waveval3c);

 if (wavecond3c == 0) {
 if (waveval3c < 254) { waveval3c = waveval3c + wavespd;} 
 if (waveval3c >= 254){ wavecond3c = 1;  } }
  
if (wavecond3c == 1) {
  if (waveval3c > 3.6) { waveval3c = waveval3c - wavespd; } 
  if (waveval3c <= 3.6 ) { wavetime3c = 0; wavecond3c = 2;} }
  
if (wavecond3c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3c > wavewait) {wavecond3c = 0; } }





//panel 2 bottom left 
waveidex4e = random (0,13);
waveidex4xe = random (0,12);
 
  
leds[p2_pbox4e[waveidex4e]] = CHSV (wavehue0, wavesat0, waveval4e); 
leds[p2_pbox4ex[waveidex4xe]] = CHSV (wavehue0x, wavesat0, waveval4e);

if (wavecond4e == 0) {
 if (waveval4e < 244) { waveval4e = waveval4e + wavespd;} 
 if (waveval4e >= 244){ wavecond4e = 1;  wavephaseD = 1;} }
  
if (wavecond4e == 1) {
  if (waveval4e > 3.6) { waveval4e = waveval4e - wavespd; } 
  if (waveval4e <= 3.6 ) {  wavetime4e = 0; wavecond4e = 2;} }
  
  

if (wavecond4e == 2) { for (int i = 0; i< 13; i++){  leds[p2_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p2_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4e > wavewait) {wavephaseE = 0; wavecond4e = 0;  } }

}


//sixth phase (F)
//panel 2 top right
if (wavephaseF == 1){

waveidex1e = random (0,13);
waveidex1xe = random (0,12);

  
leds[p2_pbox1e[waveidex1e]] = CHSV (wavehue0, wavesat0, waveval1e); 
leds[p2_pbox1ex[waveidex1xe]] = CHSV (wavehue0x, wavesat0, waveval1e);

if (wavecond1e == 0) {
 if (waveval1e < 254) { waveval1e = waveval1e + wavespd;} 
 if (waveval1e >= 254){ wavecond1e = 1;  } }
  
if (wavecond1e == 1) {
  if (waveval1e > 3.6) { waveval1e = waveval1e - wavespd; } 
  if (waveval1e <= 3.6 ) { wavetime1e = 0; wavecond1e = 2;} }
  
if (wavecond1e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1e > wavewait) {wavecond1e = 0; } }


//panel 2 mid left

waveidex2e = random (0,13);
waveidex2xe = random (0,12);

  
leds[p2_pbox2e[waveidex2e]] = CHSV (wavehue0, wavesat0, waveval2e); 
leds[p2_pbox2ex[waveidex2xe]] = CHSV (wavehue0x, wavesat0, waveval2e);

 if (wavecond2e == 0) {
 if (waveval2e < 254) { waveval2e = waveval2e + wavespd;} 
 if (waveval2e >= 254){ wavecond2e = 1;  } }
  
if (wavecond2e == 1) {
  if (waveval2e > 3.6) { waveval2e = waveval2e - wavespd; } 
  if (waveval2e <= 3.6 ) { wavetime2e = 0; wavecond2e = 2;} }
  
if (wavecond2e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2e > wavewait) {wavecond2e = 0; } }





 //panel 2 bottom right
waveidex5e = random (0,13);
waveidex5xe = random (0,12);
 
  
leds[p2_pbox5e[waveidex5e]] = CHSV (wavehue0, wavesat0, waveval5e); 
leds[p2_pbox5ex[waveidex5xe]] = CHSV (wavehue0x, wavesat0, waveval5e);

if (wavecond5e == 0) {
 if (waveval5e < 244) { waveval5e = waveval5e + wavespd;} 
 if (waveval5e >= 244){ wavecond5e = 1; wavephaseE = 1;} }
  
if (wavecond5e == 1) {
  if (waveval5e > 3.6) { waveval5e = waveval5e - wavespd; } 
  if (waveval5e <= 3.6 ) {  wavetime5e = 0; wavecond5e = 2;} }
  
  

if (wavecond5e == 2) { for (int i = 0; i< 13; i++){  leds[p2_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p2_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5e > wavewait) {wavecond5e = 0; wavephaseF = 0;  } }

}



//seventh phase
if (wavephaseG == 1){
//panel 3 top left

waveidex0g = random (0,13);
waveidex0xg = random (0,12);

  
leds[p3_pbox0e[waveidex0g]] = CHSV (wavehue0, wavesat0, waveval0g); 
leds[p3_pbox0ex[waveidex0xg]] = CHSV (wavehue0x, wavesat0, waveval0g);

if (wavecond0g == 0) {
 if (waveval0g < 254) { waveval0g = waveval0g + wavespd;} 
 if (waveval0g >= 254){ wavecond0g = 1; } }
  
if (wavecond0g == 1) {
  if (waveval0g > 3.6) { waveval0g = waveval0g - wavespd; } 
  if (waveval0g <= 3.6 ) { wavetime0g = 0; wavecond0g = 2;} }
  
if (wavecond0g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0g > wavewait) {wavecond0g = 0; } }



//panel 2 mid right
waveidex3e = random (0,13);
waveidex3xe = random (0,12);

  
leds[p2_pbox3e[waveidex3e]] = CHSV (wavehue0, wavesat0, waveval3e); 
leds[p2_pbox3ex[waveidex3xe]] = CHSV (wavehue0x, wavesat0, waveval3e);

 if (wavecond3e == 0) {
 if (waveval3e < 254) { waveval3e = waveval3e + wavespd;} 
 if (waveval3e >= 254){ wavecond3e = 1;  } }
  
if (wavecond3e == 1) {
  if (waveval3e > 3.6) { waveval3e = waveval3e - wavespd; } 
  if (waveval3e <= 3.6 ) { wavetime3e = 0; wavecond3e = 2;} }
  
if (wavecond3e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3e > wavewait) {wavecond3e = 0; } }





//panel 3 bottom left 
waveidex4g = random (0,13);
waveidex4xg = random (0,12);
 
  
leds[p3_pbox4e[waveidex4g]] = CHSV (wavehue0, wavesat0, waveval4g); 
leds[p3_pbox4ex[waveidex4xg]] = CHSV (wavehue0x, wavesat0, waveval4g);

if (wavecond4g == 0) {
 if (waveval4g < 244) { waveval4g = waveval4g + wavespd;} 
 if (waveval4g >= 244){ wavecond4g = 1;  wavephaseF = 1;} }
  
if (wavecond4g == 1) {
  if (waveval4g > 3.6) { waveval4g = waveval4g - wavespd; } 
  if (waveval4g <= 3.6 ) {  wavetime4g = 0; wavecond4g = 2;} }
  
  

if (wavecond4g == 2) { for (int i = 0; i< 13; i++){  leds[p3_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p3_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4g > wavewait) {wavephaseG = 0; wavecond4g = 0;   } }

}



//eighth phase (H)
//panel 3 top right
if (wavephaseH == 1){

waveidex1g = random (0,13);
waveidex1xg = random (0,12);

  
leds[p3_pbox1e[waveidex1g]] = CHSV (wavehue0, wavesat0, waveval1g); 
leds[p3_pbox1ex[waveidex1xg]] = CHSV (wavehue0x, wavesat0, waveval1g);

if (wavecond1g == 0) {
 if (waveval1g < 254) { waveval1g = waveval1g + wavespd;} 
 if (waveval1g >= 254){ wavecond1g = 1;  } }
  
if (wavecond1g == 1) {
  if (waveval1g > 3.6) { waveval1g = waveval1g - wavespd; } 
  if (waveval1g <= 3.6 ) { wavetime1g = 0; wavecond1g = 2;} }
  
if (wavecond1g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1g > wavewait) {wavecond1g = 0; } }


//panel 3 mid left

waveidex2g = random (0,13);
waveidex2xg = random (0,12);

  
leds[p3_pbox2e[waveidex2g]] = CHSV (wavehue0, wavesat0, waveval2g); 
leds[p3_pbox2ex[waveidex2xg]] = CHSV (wavehue0x, wavesat0, waveval2g);

 if (wavecond2g == 0) {
 if (waveval2g < 254) { waveval2g = waveval2g + wavespd;} 
 if (waveval2g >= 254){ wavecond2g = 1;  } }
  
if (wavecond2g == 1) {
  if (waveval2g > 3.6) { waveval2g = waveval2g - wavespd; } 
  if (waveval2g <= 3.6 ) { wavetime2g = 0; wavecond2g = 2;} }
  
if (wavecond2g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2g > wavewait) {wavecond2g = 0; } }





 //panel 3 bottom right
waveidex5g = random (0,13);
waveidex5xg = random (0,12);
 
  
leds[p3_pbox5e[waveidex5g]] = CHSV (wavehue0, wavesat0, waveval5g); 
leds[p3_pbox5ex[waveidex5xg]] = CHSV (wavehue0x, wavesat0, waveval5g);

if (wavecond5g == 0) {
 if (waveval5g < 244) { waveval5g = waveval5g + wavespd;} 
 if (waveval5g >= 244){ wavecond5g = 1; wavephaseG = 1;} }
  
if (wavecond5g == 1) {
  if (waveval5g > 3.6) { waveval5g = waveval5g - wavespd; } 
  if (waveval5g <= 3.6 ) {  wavetime5g = 0; wavecond5g = 2;} }
  
  

if (wavecond5g == 2) { for (int i = 0; i< 13; i++){  leds[p3_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p3_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5g > wavewait) {wavecond5g = 0; wavephaseH = 0;   } }

}



//nineth phase (I)
if (wavephaseI == 1){
//panel 4 top left

waveidex0i = random (0,13);
waveidex0xi = random (0,12);

  
leds[p4_pbox0e[waveidex0i]] = CHSV (wavehue0, wavesat0, waveval0i); 
leds[p4_pbox0ex[waveidex0xi]] = CHSV (wavehue0x, wavesat0, waveval0i);

if (wavecond0i == 0) {
 if (waveval0i < 254) { waveval0i = waveval0i + wavespd;} 
 if (waveval0i >= 254){ wavecond0i = 1; } }
  
if (wavecond0i == 1) {
  if (waveval0i > 3.6) { waveval0i = waveval0i - wavespd; } 
  if (waveval0i <= 3.6 ) { wavetime0i = 0; wavecond0i = 2;} }
  
if (wavecond0i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0i > wavewait) {wavecond0i = 0; } }



//panel 3 mid right
waveidex3g = random (0,13);
waveidex3xg = random (0,12);

  
leds[p3_pbox3e[waveidex3g]] = CHSV (wavehue0, wavesat0, waveval3g); 
leds[p3_pbox3ex[waveidex3xg]] = CHSV (wavehue0x, wavesat0, waveval3g);

 if (wavecond3g == 0) {
 if (waveval3g < 254) { waveval3g = waveval3g + wavespd;} 
 if (waveval3g >= 254){ wavecond3g = 1;  } }
  
if (wavecond3g == 1) {
  if (waveval3g > 3.6) { waveval3g = waveval3g - wavespd; } 
  if (waveval3g <= 3.6 ) { wavetime3g = 0; wavecond3g = 2;} }
  
if (wavecond3g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3g > wavewait) {wavecond3g = 0; } }





//panel 4 bottom left 
waveidex4i = random (0,13);
waveidex4xi = random (0,12);
 
  
leds[p4_pbox4e[waveidex4i]] = CHSV (wavehue0, wavesat0, waveval4i); 
leds[p4_pbox4ex[waveidex4xi]] = CHSV (wavehue0x, wavesat0, waveval4i);

if (wavecond4i == 0) {
 if (waveval4i < 244) { waveval4i = waveval4i + wavespd;} 
 if (waveval4i >= 244){ wavecond4i = 1; wavephaseH = 1;  } }
  
if (wavecond4i == 1) {
  if (waveval4i > 3.6) { waveval4i = waveval4i - wavespd; } 
  if (waveval4i <= 3.6 ) {  wavetime4i = 0; wavecond4i = 2;} }
  
  

if (wavecond4i == 2) { for (int i = 0; i< 13; i++){  leds[p4_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p4_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4i > wavewait) {wavephaseI = 0; wavecond4i = 0;  } }

}


//tenth phase (J)
//panel 3 top right
if (wavephaseJ == 1){

waveidex1i = random (0,13);
waveidex1xi = random (0,12);

  
leds[p4_pbox1e[waveidex1i]] = CHSV (wavehue0, wavesat0, waveval1i); 
leds[p4_pbox1ex[waveidex1xi]] = CHSV (wavehue0x, wavesat0, waveval1i);

if (wavecond1i == 0) {
 if (waveval1i < 254) { waveval1i = waveval1i + wavespd;} 
 if (waveval1i >= 254){ wavecond1i = 1;  } }
  
if (wavecond1i == 1) {
  if (waveval1i > 3.6) { waveval1i = waveval1i - wavespd; } 
  if (waveval1i <= 3.6 ) { wavetime1i = 0; wavecond1i = 2;} }
  
if (wavecond1i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1i > wavewait) {wavecond1i = 0; } }


//panel 3 mid left

waveidex2i = random (0,13);
waveidex2xi = random (0,12);

  
leds[p4_pbox2e[waveidex2i]] = CHSV (wavehue0, wavesat0, waveval2i); 
leds[p4_pbox2ex[waveidex2xi]] = CHSV (wavehue0x, wavesat0, waveval2i);

 if (wavecond2i == 0) {
 if (waveval2i < 254) { waveval2i = waveval2i + wavespd;} 
 if (waveval2i >= 254){ wavecond2i = 1;  } }
  
if (wavecond2i == 1) {
  if (waveval2i > 3.6) { waveval2i = waveval2i - wavespd; } 
  if (waveval2i <= 3.6 ) { wavetime2i = 0; wavecond2i = 2;} }
  
if (wavecond2i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2i > wavewait) {wavecond2i = 0; } }





 //panel 3 bottom right
waveidex5i = random (0,13);
waveidex5xi = random (0,12);
 
  
leds[p4_pbox5e[waveidex5i]] = CHSV (wavehue0, wavesat0, waveval5i); 
leds[p4_pbox5ex[waveidex5xi]] = CHSV (wavehue0x, wavesat0, waveval5i);

if (wavecond5i == 0) {
 if (waveval5i < 244) { waveval5i = waveval5i + wavespd;} 
 if (waveval5i >= 244){ wavecond5i = 1; wavephaseI = 1; } }
  
if (wavecond5i == 1) {
  if (waveval5i > 3.6) { waveval5i = waveval5i - wavespd; } 
  if (waveval5i <= 3.6 ) {  wavetime5i = 0; wavecond5i = 2;} }
  
  

if (wavecond5i == 2) { for (int i = 0; i< 13; i++){  leds[p4_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p4_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5i > wavewait) {wavecond5i = 0; wavephaseJ = 0;   } }

}



//elleventh phase (K)
if (wavephaseK == 1){

//panel 3 mid right
waveidex3i = random (0,13);
waveidex3xi = random (0,12);

  
leds[p4_pbox3e[waveidex3i]] = CHSV (wavehue0, wavesat0, waveval3i); 
leds[p4_pbox3ex[waveidex3xi]] = CHSV (wavehue0x, wavesat0, waveval3i);

 if (wavecond3i == 0) {
 if (waveval3i < 254) { waveval3i = waveval3i + wavespd;} 
 if (waveval3i >= 254){ wavecond3i = 1; wavephaseJ = 1; } }
  
if (wavecond3i == 1) {
  if (waveval3i > 3.6) { waveval3i = waveval3i - wavespd; } 
  if (waveval3i <= 3.6 ) { wavetime3i = 0; wavecond3i = 2;} }
  
if (wavecond3i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3i > wavewait) {wavephaseK = 0; wavecond3i = 0; } }



}

if (wavephase99 == 1){ if (wavetime3i >250) {wavephase99 = 0; wavephaseK = 1;}} 


}//end style 1
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (wavestyle == 2) {
  
if (wavephaseA == 1){
//panel 0 top left
waveidex0 = random (0,13);
waveidex0x = random (0,12);
wavehue0 = 0;
wavehue0x = 15; 
  
leds[p0_pbox0e[waveidex0]] = CHSV (wavehue0, wavesat0, waveval0); 
leds[p0_pbox0ex[waveidex0x]] = CHSV (wavehue0x, wavesat0, waveval0);

if (wavecond0 == 0) {
 if (waveval0 < 254) { waveval0 = waveval0 + wavespd;} 
 if (waveval0 >= 254){ wavecond0 = 1; } }
  
if (wavecond0 == 1) {
  if (waveval0 > 3.6) { waveval0 = waveval0 - wavespd; } 
  if (waveval0 <= 3.6 ) { wavetime0 = 0; wavecond0 = 2;} }
  
if (wavecond0 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0 > wavewait) {wavecond0 = 0; } }


//panel 0 mid left

waveidex2 = random (0,13);
waveidex2x = random (0,12);

  
leds[p0_pbox2e[waveidex2]] = CHSV (wavehue0, wavesat0, waveval2); 
leds[p0_pbox2ex[waveidex2x]] = CHSV (wavehue0x, wavesat0, waveval2);

 if (wavecond2 == 0) {
 if (waveval2 < 254) { waveval2 = waveval2 + wavespd;} 
 if (waveval2 >= 254){ wavecond2 = 1;  } }
  
if (wavecond2 == 1) {
  if (waveval2 > 3.6) { waveval2 = waveval2 - wavespd; } 
  if (waveval2 <= 3.6 ) { wavetime2 = 0; wavecond2 = 2;} }
  
if (wavecond2 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2 > wavewait) {wavecond2 = 0; } }



//panel 0 bottom left 
waveidex4 = random (0,13);
waveidex4x = random (0,12);
 
  
leds[p0_pbox4e[waveidex4]] = CHSV (wavehue0, wavesat0, waveval4); 
leds[p0_pbox4ex[waveidex4x]] = CHSV (wavehue0x, wavesat0, waveval4);

if (wavecond4 == 0) {
 if (waveval4 < 244) { waveval4 = waveval4 + wavespd;} 
 if (waveval4 >= 244){ wavecond4 = 1; wavephaseB = 1; } }
  
if (wavecond4 == 1) {
  if (waveval4 > 3.6) { waveval4 = waveval4 - wavespd; } 
  if (waveval4 <= 3.6 ) {  wavetime4 = 0; wavecond4 = 2;} }
  
  

if (wavecond4 == 2) { for (int i = 0; i< 13; i++){  leds[p0_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p0_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4 > wavewait) {wavephaseA = 0; wavecond4 = 0; } }

}



///second phase
//panel 0 top right
if (wavephaseB == 1){

waveidex1 = random (0,13);
waveidex1x = random (0,12);

  
leds[p0_pbox1e[waveidex1]] = CHSV (wavehue0, wavesat0, waveval1); 
leds[p0_pbox1ex[waveidex1x]] = CHSV (wavehue0x, wavesat0, waveval1);

if (wavecond1 == 0) {
 if (waveval1 < 254) { waveval1 = waveval1 + wavespd;} 
 if (waveval1 >= 254){ wavecond1 = 1;  } }
  
if (wavecond1 == 1) {
  if (waveval1 > 3.6) { waveval1 = waveval1 - wavespd; } 
  if (waveval1 <= 3.6 ) { wavetime1 = 0; wavecond1 = 2;} }
  
if (wavecond1 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1 > wavewait) {wavecond1 = 0; } }


//panel 0 mid right
waveidex3 = random (0,13);
waveidex3x = random (0,12);

  
leds[p0_pbox3e[waveidex3]] = CHSV (wavehue0, wavesat0, waveval3); 
leds[p0_pbox3ex[waveidex3x]] = CHSV (wavehue0x, wavesat0, waveval3);

 if (wavecond3 == 0) {
 if (waveval3 < 254) { waveval3 = waveval3 + wavespd;} 
 if (waveval3 >= 254){ wavecond3 = 1;  } }
  
if (wavecond3 == 1) {
  if (waveval3 > 3.6) { waveval3 = waveval3 - wavespd; } 
  if (waveval3 <= 3.6 ) { wavetime3 = 0; wavecond3 = 2;} }
  
if (wavecond3 == 2) {for (int i = 0; i< 13; i++){  leds[p0_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p0_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3 > wavewait) {wavecond3 = 0; } }






 //panel 0 bottom right
waveidex5 = random (0,13);
waveidex5x = random (0,12);
 
  
leds[p0_pbox5e[waveidex5]] = CHSV (wavehue0, wavesat0, waveval5); 
leds[p0_pbox5ex[waveidex5x]] = CHSV (wavehue0x, wavesat0, waveval5);

if (wavecond5 == 0) {
 if (waveval5 < 244) { waveval5 = waveval5 + wavespd;} 
 if (waveval5 >= 244){ wavecond5 = 1; wavephaseC = 1;} }
  
if (wavecond5 == 1) {
  if (waveval5 > 3.6) { waveval5 = waveval5 - wavespd; } 
  if (waveval5 <= 3.6 ) {  wavetime5 = 0; wavecond5 = 2;} }
  
  

if (wavecond5 == 2) { for (int i = 0; i< 13; i++){  leds[p0_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p0_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5 > wavewait) {wavecond5 = 0; wavephaseB = 0; } }

}

//third phase
if (wavephaseC == 1){
//panel 1 top left
waveidex0c = random (0,13);
waveidex0xc = random (0,12);

  
leds[p1_pbox0e[waveidex0c]] = CHSV (wavehue0, wavesat0, waveval0c); 
leds[p1_pbox0ex[waveidex0xc]] = CHSV (wavehue0x, wavesat0, waveval0c);

if (wavecond0c == 0) {
 if (waveval0c < 254) { waveval0c = waveval0c + wavespd;} 
 if (waveval0c >= 254){ wavecond0c = 1; } }
  
if (wavecond0c == 1) {
  if (waveval0c > 3.6) { waveval0c = waveval0c - wavespd; } 
  if (waveval0c <= 3.6 ) { wavetime0c = 0; wavecond0c = 2;} }
  
if (wavecond0c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0c > wavewait) {wavecond0c = 0; } }



//panel 1 mid left

waveidex2c = random (0,13);
waveidex2xc = random (0,12);

  
leds[p1_pbox2e[waveidex2c]] = CHSV (wavehue0, wavesat0, waveval2c); 
leds[p1_pbox2ex[waveidex2xc]] = CHSV (wavehue0x, wavesat0, waveval2c);

 if (wavecond2c == 0) {
 if (waveval2c < 254) { waveval2c = waveval2c + wavespd;} 
 if (waveval2c >= 254){ wavecond2c = 1;  } }
  
if (wavecond2c == 1) {
  if (waveval2c > 3.6) { waveval2c = waveval2c - wavespd; } 
  if (waveval2c <= 3.6 ) { wavetime2c = 0; wavecond2c = 2;} }
  
if (wavecond2c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2c > wavewait) {wavecond2c = 0; } }





//panel 1 bottom left 
waveidex4c = random (0,13);
waveidex4xc = random (0,12);
 
  
leds[p1_pbox4e[waveidex4c]] = CHSV (wavehue0, wavesat0, waveval4c); 
leds[p1_pbox4ex[waveidex4xc]] = CHSV (wavehue0x, wavesat0, waveval4c);

if (wavecond4c == 0) {
 if (waveval4c < 244) { waveval4c = waveval4c + wavespd;} 
 if (waveval4c >= 244){ wavecond4c = 1; wavephaseD = 1; } }
  
if (wavecond4c == 1) {
  if (waveval4c > 3.6) { waveval4c = waveval4c - wavespd; } 
  if (waveval4c <= 3.6 ) {  wavetime4c = 0; wavecond4c = 2;} }
  
  

if (wavecond4c == 2) { for (int i = 0; i< 13; i++){  leds[p1_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p1_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4c > wavewait) {wavephaseC = 0; wavecond4c = 0;  } }

}


//fourth phase
//panel 1 top right
if (wavephaseD == 1){

waveidex1c = random (0,13);
waveidex1xc = random (0,12);

  
leds[p1_pbox1e[waveidex1c]] = CHSV (wavehue0, wavesat0, waveval1c); 
leds[p1_pbox1ex[waveidex1xc]] = CHSV (wavehue0x, wavesat0, waveval1c);

if (wavecond1c == 0) {
 if (waveval1c < 254) { waveval1c = waveval1c + wavespd;} 
 if (waveval1c >= 254){ wavecond1c = 1;  } }
  
if (wavecond1c == 1) {
  if (waveval1c > 3.6) { waveval1c = waveval1c - wavespd; } 
  if (waveval1c <= 3.6 ) { wavetime1c = 0; wavecond1c = 2;} }
  
if (wavecond1c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1c > wavewait) {wavecond1c = 0; } }


//panel 1 mid right
waveidex3c = random (0,13);
waveidex3xc = random (0,12);

  
leds[p1_pbox3e[waveidex3c]] = CHSV (wavehue0, wavesat0, waveval3c); 
leds[p1_pbox3ex[waveidex3xc]] = CHSV (wavehue0x, wavesat0, waveval3c);

 if (wavecond3c == 0) {
 if (waveval3c < 254) { waveval3c = waveval3c + wavespd;} 
 if (waveval3c >= 254){ wavecond3c = 1;  } }
  
if (wavecond3c == 1) {
  if (waveval3c > 3.6) { waveval3c = waveval3c - wavespd; } 
  if (waveval3c <= 3.6 ) { wavetime3c = 0; wavecond3c = 2;} }
  
if (wavecond3c == 2) {for (int i = 0; i< 13; i++){  leds[p1_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p1_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3c > wavewait) {wavecond3c = 0; } }




 //panel 1 bottom right
waveidex5c = random (0,13);
waveidex5xc = random (0,12);
 
  
leds[p1_pbox5e[waveidex5c]] = CHSV (wavehue0, wavesat0, waveval5c); 
leds[p1_pbox5ex[waveidex5xc]] = CHSV (wavehue0x, wavesat0, waveval5c);

if (wavecond5c == 0) {
 if (waveval5c < 244) { waveval5c = waveval5c + wavespd;} 
 if (waveval5c >= 244){ wavecond5c = 1; wavephaseE = 1;} }
  
if (wavecond5c == 1) {
  if (waveval5c > 3.6) { waveval5c = waveval5c - wavespd; } 
  if (waveval5c <= 3.6 ) {  wavetime5c = 0; wavecond5c = 2;} }
  
  

if (wavecond5c == 2) { for (int i = 0; i< 13; i++){  leds[p1_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p1_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5c > wavewait) {wavecond5c = 0; wavephaseD = 0;  } }

}


//fifth phase
if (wavephaseE == 1){
//panel 2 top left
waveidex0e = random (0,13);
waveidex0xe = random (0,12);

  
leds[p2_pbox0e[waveidex0e]] = CHSV (wavehue0, wavesat0, waveval0e); 
leds[p2_pbox0ex[waveidex0xe]] = CHSV (wavehue0x, wavesat0, waveval0e);

if (wavecond0e == 0) {
 if (waveval0e < 254) { waveval0e = waveval0e + wavespd;} 
 if (waveval0e >= 254){ wavecond0e = 1; } }
  
if (wavecond0e == 1) {
  if (waveval0e > 3.6) { waveval0e = waveval0e - wavespd; } 
  if (waveval0e <= 3.6 ) { wavetime0e = 0; wavecond0e = 2;} }
  
if (wavecond0e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0e > wavewait) {wavecond0e = 0; } }


//panel 2 mid left

waveidex2e = random (0,13);
waveidex2xe = random (0,12);

  
leds[p2_pbox2e[waveidex2e]] = CHSV (wavehue0, wavesat0, waveval2e); 
leds[p2_pbox2ex[waveidex2xe]] = CHSV (wavehue0x, wavesat0, waveval2e);

 if (wavecond2e == 0) {
 if (waveval2e < 254) { waveval2e = waveval2e + wavespd;} 
 if (waveval2e >= 254){ wavecond2e = 1;  } }
  
if (wavecond2e == 1) {
  if (waveval2e > 3.6) { waveval2e = waveval2e - wavespd; } 
  if (waveval2e <= 3.6 ) { wavetime2e = 0; wavecond2e = 2;} }
  
if (wavecond2e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2e > wavewait) {wavecond2e = 0; } }






//panel 2 bottom left 
waveidex4e = random (0,13);
waveidex4xe = random (0,12);
 
  
leds[p2_pbox4e[waveidex4e]] = CHSV (wavehue0, wavesat0, waveval4e); 
leds[p2_pbox4ex[waveidex4xe]] = CHSV (wavehue0x, wavesat0, waveval4e);

if (wavecond4e == 0) {
 if (waveval4e < 244) { waveval4e = waveval4e + wavespd;} 
 if (waveval4e >= 244){ wavecond4e = 1;  wavephaseF = 1;} }
  
if (wavecond4e == 1) {
  if (waveval4e > 3.6) { waveval4e = waveval4e - wavespd; } 
  if (waveval4e <= 3.6 ) {  wavetime4e = 0; wavecond4e = 2;} }
  
  

if (wavecond4e == 2) { for (int i = 0; i< 13; i++){  leds[p2_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p2_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4e > wavewait) {wavephaseE = 0; wavecond4e = 0;  } }

}


//sixth phase (F)
//panel 2 top right
if (wavephaseF == 1){

waveidex1e = random (0,13);
waveidex1xe = random (0,12);

  
leds[p2_pbox1e[waveidex1e]] = CHSV (wavehue0, wavesat0, waveval1e); 
leds[p2_pbox1ex[waveidex1xe]] = CHSV (wavehue0x, wavesat0, waveval1e);

if (wavecond1e == 0) {
 if (waveval1e < 254) { waveval1e = waveval1e + wavespd;} 
 if (waveval1e >= 254){ wavecond1e = 1;  } }
  
if (wavecond1e == 1) {
  if (waveval1e > 3.6) { waveval1e = waveval1e - wavespd; } 
  if (waveval1e <= 3.6 ) { wavetime1e = 0; wavecond1e = 2;} }
  
if (wavecond1e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1e > wavewait) {wavecond1e = 0; } }



//panel 2 mid right
waveidex3e = random (0,13);
waveidex3xe = random (0,12);

  
leds[p2_pbox3e[waveidex3e]] = CHSV (wavehue0, wavesat0, waveval3e); 
leds[p2_pbox3ex[waveidex3xe]] = CHSV (wavehue0x, wavesat0, waveval3e);

 if (wavecond3e == 0) {
 if (waveval3e < 254) { waveval3e = waveval3e + wavespd;} 
 if (waveval3e >= 254){ wavecond3e = 1;  } }
  
if (wavecond3e == 1) {
  if (waveval3e > 3.6) { waveval3e = waveval3e - wavespd; } 
  if (waveval3e <= 3.6 ) { wavetime3e = 0; wavecond3e = 2;} }
  
if (wavecond3e == 2) {for (int i = 0; i< 13; i++){  leds[p2_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p2_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3e > wavewait) {wavecond3e = 0; } }





 //panel 2 bottom right
waveidex5e = random (0,13);
waveidex5xe = random (0,12);
 
  
leds[p2_pbox5e[waveidex5e]] = CHSV (wavehue0, wavesat0, waveval5e); 
leds[p2_pbox5ex[waveidex5xe]] = CHSV (wavehue0x, wavesat0, waveval5e);

if (wavecond5e == 0) {
 if (waveval5e < 244) { waveval5e = waveval5e + wavespd;} 
 if (waveval5e >= 244){ wavecond5e = 1; wavephaseG = 1;} }
  
if (wavecond5e == 1) {
  if (waveval5e > 3.6) { waveval5e = waveval5e - wavespd; } 
  if (waveval5e <= 3.6 ) {  wavetime5e = 0; wavecond5e = 2;} }
  
  

if (wavecond5e == 2) { for (int i = 0; i< 13; i++){  leds[p2_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p2_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5e > wavewait) {wavecond5e = 0; wavephaseF = 0;  } }

}



//seventh phase
if (wavephaseG == 1){
//panel 3 top left

waveidex0g = random (0,13);
waveidex0xg = random (0,12);

  
leds[p3_pbox0e[waveidex0g]] = CHSV (wavehue0, wavesat0, waveval0g); 
leds[p3_pbox0ex[waveidex0xg]] = CHSV (wavehue0x, wavesat0, waveval0g);

if (wavecond0g == 0) {
 if (waveval0g < 254) { waveval0g = waveval0g + wavespd;} 
 if (waveval0g >= 254){ wavecond0g = 1; } }
  
if (wavecond0g == 1) {
  if (waveval0g > 3.6) { waveval0g = waveval0g - wavespd; } 
  if (waveval0g <= 3.6 ) { wavetime0g = 0; wavecond0g = 2;} }
  
if (wavecond0g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0g > wavewait) {wavecond0g = 0; } }



//panel 3 mid left

waveidex2g = random (0,13);
waveidex2xg = random (0,12);

  
leds[p3_pbox2e[waveidex2g]] = CHSV (wavehue0, wavesat0, waveval2g); 
leds[p3_pbox2ex[waveidex2xg]] = CHSV (wavehue0x, wavesat0, waveval2g);

 if (wavecond2g == 0) {
 if (waveval2g < 254) { waveval2g = waveval2g + wavespd;} 
 if (waveval2g >= 254){ wavecond2g = 1;  } }
  
if (wavecond2g == 1) {
  if (waveval2g > 3.6) { waveval2g = waveval2g - wavespd; } 
  if (waveval2g <= 3.6 ) { wavetime2g = 0; wavecond2g = 2;} }
  
if (wavecond2g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2g > wavewait) {wavecond2g = 0; } }





//panel 3 bottom left 
waveidex4g = random (0,13);
waveidex4xg = random (0,12);
 
  
leds[p3_pbox4e[waveidex4g]] = CHSV (wavehue0, wavesat0, waveval4g); 
leds[p3_pbox4ex[waveidex4xg]] = CHSV (wavehue0x, wavesat0, waveval4g);

if (wavecond4g == 0) {
 if (waveval4g < 244) { waveval4g = waveval4g + wavespd;} 
 if (waveval4g >= 244){ wavecond4g = 1;  wavephaseH = 1;} }
  
if (wavecond4g == 1) {
  if (waveval4g > 3.6) { waveval4g = waveval4g - wavespd; } 
  if (waveval4g <= 3.6 ) {  wavetime4g = 0; wavecond4g = 2;} }
  
  

if (wavecond4g == 2) { for (int i = 0; i< 13; i++){  leds[p3_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p3_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4g > wavewait) {wavephaseG = 0; wavecond4g = 0;   } }

}



//eighth phase (H)
//panel 3 top right
if (wavephaseH == 1){

waveidex1g = random (0,13);
waveidex1xg = random (0,12);

  
leds[p3_pbox1e[waveidex1g]] = CHSV (wavehue0, wavesat0, waveval1g); 
leds[p3_pbox1ex[waveidex1xg]] = CHSV (wavehue0x, wavesat0, waveval1g);

if (wavecond1g == 0) {
 if (waveval1g < 254) { waveval1g = waveval1g + wavespd;} 
 if (waveval1g >= 254){ wavecond1g = 1;  } }
  
if (wavecond1g == 1) {
  if (waveval1g > 3.6) { waveval1g = waveval1g - wavespd; } 
  if (waveval1g <= 3.6 ) { wavetime1g = 0; wavecond1g = 2;} }
  
if (wavecond1g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1g > wavewait) {wavecond1g = 0; } }


//panel 3 mid right
waveidex3g = random (0,13);
waveidex3xg = random (0,12);

  
leds[p3_pbox3e[waveidex3g]] = CHSV (wavehue0, wavesat0, waveval3g); 
leds[p3_pbox3ex[waveidex3xg]] = CHSV (wavehue0x, wavesat0, waveval3g);

 if (wavecond3g == 0) {
 if (waveval3g < 254) { waveval3g = waveval3g + wavespd;} 
 if (waveval3g >= 254){ wavecond3g = 1;  } }
  
if (wavecond3g == 1) {
  if (waveval3g > 3.6) { waveval3g = waveval3g - wavespd; } 
  if (waveval3g <= 3.6 ) { wavetime3g = 0; wavecond3g = 2;} }
  
if (wavecond3g == 2) {for (int i = 0; i< 13; i++){  leds[p3_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p3_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3g > wavewait) {wavecond3g = 0; } }





 //panel 3 bottom right
waveidex5g = random (0,13);
waveidex5xg = random (0,12);
 
  
leds[p3_pbox5e[waveidex5g]] = CHSV (wavehue0, wavesat0, waveval5g); 
leds[p3_pbox5ex[waveidex5xg]] = CHSV (wavehue0x, wavesat0, waveval5g);

if (wavecond5g == 0) {
 if (waveval5g < 244) { waveval5g = waveval5g + wavespd;} 
 if (waveval5g >= 244){ wavecond5g = 1; wavephaseI = 1;} }
  
if (wavecond5g == 1) {
  if (waveval5g > 3.6) { waveval5g = waveval5g - wavespd; } 
  if (waveval5g <= 3.6 ) {  wavetime5g = 0; wavecond5g = 2;} }
  
  

if (wavecond5g == 2) { for (int i = 0; i< 13; i++){  leds[p3_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p3_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5g > wavewait) {wavecond5g = 0; wavephaseH = 0;   } }

}



//nineth phase (I)
if (wavephaseI == 1){
//panel 4 top left

waveidex0i = random (0,13);
waveidex0xi = random (0,12);

  
leds[p4_pbox0e[waveidex0i]] = CHSV (wavehue0, wavesat0, waveval0i); 
leds[p4_pbox0ex[waveidex0xi]] = CHSV (wavehue0x, wavesat0, waveval0i);

if (wavecond0i == 0) {
 if (waveval0i < 254) { waveval0i = waveval0i + wavespd;} 
 if (waveval0i >= 254){ wavecond0i = 1; } }
  
if (wavecond0i == 1) {
  if (waveval0i > 3.6) { waveval0i = waveval0i - wavespd; } 
  if (waveval0i <= 3.6 ) { wavetime0i = 0; wavecond0i = 2;} }
  
if (wavecond0i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox0e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox0ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime0i > wavewait) {wavecond0i = 0; } }



//panel 4 mid left

waveidex2i = random (0,13);
waveidex2xi = random (0,12);

  
leds[p4_pbox2e[waveidex2i]] = CHSV (wavehue0, wavesat0, waveval2i); 
leds[p4_pbox2ex[waveidex2xi]] = CHSV (wavehue0x, wavesat0, waveval2i);

 if (wavecond2i == 0) {
 if (waveval2i < 254) { waveval2i = waveval2i + wavespd;} 
 if (waveval2i >= 254){ wavecond2i = 1;  } }
  
if (wavecond2i == 1) {
  if (waveval2i > 3.6) { waveval2i = waveval2i - wavespd; } 
  if (waveval2i <= 3.6 ) { wavetime2i = 0; wavecond2i = 2;} }
  
if (wavecond2i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox2e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox2ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime2i > wavewait) {wavecond2i = 0; } }





//panel 4 bottom left 
waveidex4i = random (0,13);
waveidex4xi = random (0,12);
 
  
leds[p4_pbox4e[waveidex4i]] = CHSV (wavehue0, wavesat0, waveval4i); 
leds[p4_pbox4ex[waveidex4xi]] = CHSV (wavehue0x, wavesat0, waveval4i);

if (wavecond4i == 0) {
 if (waveval4i < 244) { waveval4i = waveval4i + wavespd;} 
 if (waveval4i >= 244){ wavecond4i = 1; wavephaseJ = 1;  } }
  
if (wavecond4i == 1) {
  if (waveval4i > 3.6) { waveval4i = waveval4i - wavespd; } 
  if (waveval4i <= 3.6 ) {  wavetime4i = 0; wavecond4i = 2;} }
  
  

if (wavecond4i == 2) { for (int i = 0; i< 13; i++){  leds[p4_pbox4e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p4_pbox4ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime4i > wavewait) {wavephaseI = 0; wavecond4i = 0;  } }

}


//tenth phase (J)
//panel 4 top right
if (wavephaseJ == 1){

waveidex1i = random (0,13);
waveidex1xi = random (0,12);

  
leds[p4_pbox1e[waveidex1i]] = CHSV (wavehue0, wavesat0, waveval1i); 
leds[p4_pbox1ex[waveidex1xi]] = CHSV (wavehue0x, wavesat0, waveval1i);

if (wavecond1i == 0) {
 if (waveval1i < 254) { waveval1i = waveval1i + wavespd;} 
 if (waveval1i >= 254){ wavecond1i = 1;  } }
  
if (wavecond1i == 1) {
  if (waveval1i > 3.6) { waveval1i = waveval1i - wavespd; } 
  if (waveval1i <= 3.6 ) { wavetime1i = 0; wavecond1i = 2;} }
  
if (wavecond1i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox1e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox1ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime1i > wavewait) {wavecond1i = 0; } }

//panel 4 mid right
waveidex3i = random (0,13);
waveidex3xi = random (0,12);

  
leds[p4_pbox3e[waveidex3i]] = CHSV (wavehue0, wavesat0, waveval3i); 
leds[p4_pbox3ex[waveidex3xi]] = CHSV (wavehue0x, wavesat0, waveval3i);

 if (wavecond3i == 0) {
 if (waveval3i < 254) { waveval3i = waveval3i + wavespd;} 
 if (waveval3i >= 254){ wavecond3i = 1;  } }
  
if (wavecond3i == 1) {
  if (waveval3i > 3.6) { waveval3i = waveval3i - wavespd; } 
  if (waveval3i <= 3.6 ) { wavetime3i = 0; wavecond3i = 2;} }
  
if (wavecond3i == 2) {for (int i = 0; i< 13; i++){  leds[p4_pbox3e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                     for (int i = 0; i< 12; i++){  leds[p4_pbox3ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime3i > wavewait) {wavephaseK = 0; wavecond3i = 0;  wavetime3i = 0;} }





 //panel 4 bottom right
waveidex5i = random (0,13);
waveidex5xi = random (0,12);
 
  
leds[p4_pbox5e[waveidex5i]] = CHSV (wavehue0, wavesat0, waveval5i); 
leds[p4_pbox5ex[waveidex5xi]] = CHSV (wavehue0x, wavesat0, waveval5i);

if (wavecond5i == 0) {
 if (waveval5i < 244) { waveval5i = waveval5i + wavespd;} 
 if (waveval5i >= 244){ wavecond5i = 1; } }
  
if (wavecond5i == 1) {
  if (waveval5i > 3.6) { waveval5i = waveval5i - wavespd; } 
  if (waveval5i <= 3.6 ) {  wavetime5i = 0; wavecond5i = 2;} }
  
  

if (wavecond5i == 2) { for (int i = 0; i< 13; i++){  leds[p4_pbox5e[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 12; i++){  leds[p4_pbox5ex[i]] = CHSV (wavehue0, wavesat0, 0);} if (wavetime5i > wavewait) {wavecond5i = 0; wavephaseJ = 0; wavephase99 = 1; wavetime5i = 0;   } }

}





if (wavephase99 == 1){ if (wavetime3i >250) {wavephase99 = 0; wavephaseA = 1;}} 


} //end style 2

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (wavestyle == 3) {
if (encoderHigh == 1) { wavehueall = encoderOut;}
encoderColours = 1;
colourRange = wavehuerange;
wavehue0 = random (wavehueall, wavehueall + wavehuerange);
wavehue0x = wavehue0 + wavehuerange; 
  
if (wavephaseA == 1){
//front line





waveidex0 = random (0,8);
waveidex0x = random (0,7);
 
  
leds[p0_vline0a[waveidex0]] = CHSV (wavehue0, wavesat0, waveval0); 
leds[p0_vline0b[waveidex0x]] = CHSV (wavehue0x, wavesat0, waveval0);
leds[p1_vline0a[waveidex0]] = CHSV (wavehue0, wavesat0, waveval0); 
leds[p1_vline0b[waveidex0x]] = CHSV (wavehue0x, wavesat0, waveval0);
leds[p2_vline0a[waveidex0]] = CHSV (wavehue0, wavesat0, waveval0); 
leds[p2_vline0b[waveidex0x]] = CHSV (wavehue0x, wavesat0, waveval0);
leds[p3_vline0a[waveidex0]] = CHSV (wavehue0, wavesat0, waveval0); 
leds[p3_vline0b[waveidex0x]] = CHSV (wavehue0x, wavesat0, waveval0);
leds[p4_vline0a[waveidex0]] = CHSV (wavehue0, wavesat0, waveval0); 
leds[p4_vline0b[waveidex0x]] = CHSV (wavehue0x, wavesat0, waveval0);

if (wavecond0 == 0) {
 if (waveval0 < 244) { waveval0 = waveval0 + wavespd;} 
 if (waveval0 >= 244){ wavecond0 = 1; wavephaseB = 1; } }
  
if (wavecond0 == 1) {
  if (waveval0 > 3.6) { waveval0 = waveval0 - wavespd; } 
  if (waveval0 <= 3.6 ) {  wavetime0 = 0; wavecond0 = 2;} }
  
  

if (wavecond0 == 2) { if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline0a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline0b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p1_vline0a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline0b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p2_vline0a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline0b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p3_vline0a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline0b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p4_vline0a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline0b[i]] = CHSV (wavehue0, wavesat0, 0);} }if (wavetime0 > wavewait) {wavephaseA = 0; wavecond0 = 0; } }

}



///second phase

if (wavephaseB == 1){




waveidex1 = random (0,8);
waveidex1x = random (0,7);
 
  
leds[p0_vline1a[waveidex1]] = CHSV (wavehue0, wavesat0, waveval1); 
leds[p0_vline1b[waveidex1x]] = CHSV (wavehue0x, wavesat0, waveval1);
leds[p1_vline1a[waveidex1]] = CHSV (wavehue0, wavesat0, waveval1); 
leds[p1_vline1b[waveidex1x]] = CHSV (wavehue0x, wavesat0, waveval1);
leds[p2_vline1a[waveidex1]] = CHSV (wavehue0, wavesat0, waveval1); 
leds[p2_vline1b[waveidex1x]] = CHSV (wavehue0x, wavesat0, waveval1);
leds[p3_vline1a[waveidex1]] = CHSV (wavehue0, wavesat0, waveval1); 
leds[p3_vline1b[waveidex1x]] = CHSV (wavehue0x, wavesat0, waveval1);
leds[p4_vline1a[waveidex1]] = CHSV (wavehue0, wavesat0, waveval1); 
leds[p4_vline1b[waveidex1x]] = CHSV (wavehue0x, wavesat0, waveval1);

if (wavecond1 == 0) {
 if (waveval1 < 244) { waveval1 = waveval1 + wavespd;} 
 if (waveval1 >= 244){ wavecond1 = 1; wavephaseC = 1;} }
  
if (wavecond1 == 1) {
  if (waveval1 > 3.6) { waveval1 = waveval1 - wavespd; } 
  if (waveval1 <= 3.6 ) {  wavetime1 = 0; wavecond1 = 2;} }
  
  

if (wavecond1 == 2) { if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline1a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline1b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p1_vline1a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline1b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p2_vline1a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline1b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p3_vline1a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline1b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p4_vline1a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline1b[i]] = CHSV (wavehue0, wavesat0, 0);}} if (wavetime1 > wavewait) {wavecond1 = 0; wavephaseB = 0; } }

}

//third phase
if (wavephaseC == 1){



waveidex4c = random (0,8);
waveidex4xc = random (0,7);
 
  
leds[p0_vline2a[waveidex4c]] = CHSV (wavehue0, wavesat0, waveval4c); 
leds[p0_vline2b[waveidex4xc]] = CHSV (wavehue0x, wavesat0, waveval4c);
leds[p1_vline2a[waveidex4c]] = CHSV (wavehue0, wavesat0, waveval4c); 
leds[p1_vline2b[waveidex4xc]] = CHSV (wavehue0x, wavesat0, waveval4c);
leds[p2_vline2a[waveidex4c]] = CHSV (wavehue0, wavesat0, waveval4c); 
leds[p2_vline2b[waveidex4xc]] = CHSV (wavehue0x, wavesat0, waveval4c);
leds[p3_vline2a[waveidex4c]] = CHSV (wavehue0, wavesat0, waveval4c); 
leds[p3_vline2b[waveidex4xc]] = CHSV (wavehue0x, wavesat0, waveval4c);
leds[p4_vline2a[waveidex4c]] = CHSV (wavehue0, wavesat0, waveval4c); 
leds[p4_vline2b[waveidex4xc]] = CHSV (wavehue0x, wavesat0, waveval4c);

if (wavecond4c == 0) {
 if (waveval4c < 244) { waveval4c = waveval4c + wavespd;} 
 if (waveval4c >= 244){ wavecond4c = 1; wavephaseD = 1; } }
  
if (wavecond4c == 1) {
  if (waveval4c > 3.6) { waveval4c = waveval4c - wavespd; } 
  if (waveval4c <= 3.6 ) {  wavetime4c = 0; wavecond4c = 2;} }
  
  

if (wavecond4c == 2) { if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline2a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline2b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p1_vline2a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline2b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p2_vline2a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline2b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p3_vline2a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline2b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p4_vline2a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline2b[i]] = CHSV (wavehue0, wavesat0, 0);}}if (wavetime4c > wavewait) {wavephaseC = 0; wavecond4c = 0;  } }

}


//fourth phase

if (wavephaseD == 1){



waveidex5c = random (0,8);
waveidex5xc = random (0,7);
 
  
leds[p0_vline3a[waveidex5c]] = CHSV (wavehue0, wavesat0, waveval5c); 
leds[p0_vline3b[waveidex5xc]] = CHSV (wavehue0x, wavesat0, waveval5c);
leds[p1_vline3a[waveidex5c]] = CHSV (wavehue0, wavesat0, waveval5c); 
leds[p1_vline3b[waveidex5xc]] = CHSV (wavehue0x, wavesat0, waveval5c);
leds[p2_vline3a[waveidex5c]] = CHSV (wavehue0, wavesat0, waveval5c); 
leds[p2_vline3b[waveidex5xc]] = CHSV (wavehue0x, wavesat0, waveval5c);
leds[p3_vline3a[waveidex5c]] = CHSV (wavehue0, wavesat0, waveval5c); 
leds[p3_vline3b[waveidex5xc]] = CHSV (wavehue0x, wavesat0, waveval5c);
leds[p4_vline3a[waveidex5c]] = CHSV (wavehue0, wavesat0, waveval5c); 
leds[p4_vline3b[waveidex5xc]] = CHSV (wavehue0x, wavesat0, waveval5c);



if (wavecond5c == 0) {
 if (waveval5c < 244) { waveval5c = waveval5c + wavespd;} 
 if (waveval5c >= 244){ wavecond5c = 1; wavephaseE = 1;} }
  
if (wavecond5c == 1) {
  if (waveval5c > 3.6) { waveval5c = waveval5c - wavespd; } 
  if (waveval5c <= 3.6 ) {  wavetime5c = 0; wavecond5c = 2;} }
  
  

if (wavecond5c == 2) { if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline3a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline3b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p1_vline3a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline3b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p2_vline3a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline3b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p3_vline3a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline3b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p4_vline3a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline3b[i]] = CHSV (wavehue0, wavesat0, 0);}}if (wavetime5c > wavewait) {wavecond5c = 0; wavephaseD = 0;  } }

}


//fifth phase
if (wavephaseE == 1){



waveidex4e = random (0,8);
waveidex4xe = random (0,7);
 
  
leds[p0_vline4a[waveidex4e]] = CHSV (wavehue0, wavesat0, waveval4e); 
leds[p0_vline4b[waveidex4xe]] = CHSV (wavehue0x, wavesat0, waveval4e);
leds[p1_vline4a[waveidex4e]] = CHSV (wavehue0, wavesat0, waveval4e); 
leds[p1_vline4b[waveidex4xe]] = CHSV (wavehue0x, wavesat0, waveval4e);
leds[p2_vline4a[waveidex4e]] = CHSV (wavehue0, wavesat0, waveval4e); 
leds[p2_vline4b[waveidex4xe]] = CHSV (wavehue0x, wavesat0, waveval4e);
leds[p3_vline4a[waveidex4e]] = CHSV (wavehue0, wavesat0, waveval4e); 
leds[p3_vline4b[waveidex4xe]] = CHSV (wavehue0x, wavesat0, waveval4e);
leds[p4_vline4a[waveidex4e]] = CHSV (wavehue0, wavesat0, waveval4e); 
leds[p4_vline4b[waveidex4xe]] = CHSV (wavehue0x, wavesat0, waveval4e);

if (wavecond4e == 0) {
 if (waveval4e < 244) { waveval4e = waveval4e + wavespd;} 
 if (waveval4e >= 244){ wavecond4e = 1;  wavephaseF = 1;} }
  
if (wavecond4e == 1) {
  if (waveval4e > 3.6) { waveval4e = waveval4e - wavespd; } 
  if (waveval4e <= 3.6 ) {  wavetime4e = 0; wavecond4e = 2;} }
  
  

if (wavecond4e == 2) {if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline4a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline4b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p1_vline4a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline4b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p2_vline4a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline4b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p3_vline4a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline4b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p4_vline4a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline4b[i]] = CHSV (wavehue0, wavesat0, 0);}} if (wavetime4e > wavewait) {wavephaseE = 0; wavecond4e = 0;  } }

}


//sixth phase (F)

if (wavephaseF == 1){





waveidex5e = random (0,8);
waveidex5xe = random (0,7);
 
  
leds[p0_vline5a[waveidex5e]] = CHSV (wavehue0, wavesat0, waveval5e); 
leds[p0_vline5b[waveidex5xe]] = CHSV (wavehue0x, wavesat0, waveval5e);
leds[p1_vline5a[waveidex5e]] = CHSV (wavehue0, wavesat0, waveval5e); 
leds[p1_vline5b[waveidex5xe]] = CHSV (wavehue0x, wavesat0, waveval5e);
leds[p2_vline5a[waveidex5e]] = CHSV (wavehue0, wavesat0, waveval5e); 
leds[p2_vline5b[waveidex5xe]] = CHSV (wavehue0x, wavesat0, waveval5e);
leds[p3_vline5a[waveidex5e]] = CHSV (wavehue0, wavesat0, waveval5e); 
leds[p3_vline5b[waveidex5xe]] = CHSV (wavehue0x, wavesat0, waveval5e);
leds[p4_vline5a[waveidex5e]] = CHSV (wavehue0, wavesat0, waveval5e); 
leds[p4_vline5b[waveidex5xe]] = CHSV (wavehue0x, wavesat0, waveval5e);

if (wavecond5e == 0) {
 if (waveval5e < 244) { waveval5e = waveval5e + wavespd;} 
 if (waveval5e >= 244){ wavecond5e = 1; wavephaseG = 1;} }
  
if (wavecond5e == 1) {
  if (waveval5e > 3.6) { waveval5e = waveval5e - wavespd; } 
  if (waveval5e <= 3.6 ) {  wavetime5e = 0; wavecond5e = 2;} }
  
  

if (wavecond5e == 2) { if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline5a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline5b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p1_vline5a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline5b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p2_vline5a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline5b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p3_vline5a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline5b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p4_vline5a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline5b[i]] = CHSV (wavehue0, wavesat0, 0);}}if (wavetime5e > wavewait) {wavecond5e = 0; wavephaseF = 0;  } }

}



//seventh phase
if (wavephaseG == 1){

waveidex4g = random (0,8);
waveidex4xg = random (0,7);
 
  
leds[p0_vline6a[waveidex4g]] = CHSV (wavehue0, wavesat0, waveval4g); 
leds[p0_vline6b[waveidex4xg]] = CHSV (wavehue0x, wavesat0, waveval4g);
leds[p1_vline6a[waveidex4g]] = CHSV (wavehue0, wavesat0, waveval4g); 
leds[p1_vline6b[waveidex4xg]] = CHSV (wavehue0x, wavesat0, waveval4g);
leds[p2_vline6a[waveidex4g]] = CHSV (wavehue0, wavesat0, waveval4g); 
leds[p2_vline6b[waveidex4xg]] = CHSV (wavehue0x, wavesat0, waveval4g);
leds[p3_vline6a[waveidex4g]] = CHSV (wavehue0, wavesat0, waveval4g); 
leds[p3_vline6b[waveidex4xg]] = CHSV (wavehue0x, wavesat0, waveval4g);
leds[p4_vline6a[waveidex4g]] = CHSV (wavehue0, wavesat0, waveval4g); 
leds[p4_vline6b[waveidex4xg]] = CHSV (wavehue0x, wavesat0, waveval4g);

if (wavecond4g == 0) {
 if (waveval4g < 244) { waveval4g = waveval4g + wavespd;} 
 if (waveval4g >= 244){ wavecond4g = 1;  wavephaseH = 1;} }
  
if (wavecond4g == 1) {
  if (waveval4g > 3.6) { waveval4g = waveval4g - wavespd; } 
  if (waveval4g <= 3.6 ) {  wavetime4g = 0; wavecond4g = 2;} }
  
  

if (wavecond4g == 2) { if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline6a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline6b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p1_vline6a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline6b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p2_vline6a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline6b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p3_vline6a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline6b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p4_vline6a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline6b[i]] = CHSV (wavehue0, wavesat0, 0);}} if (wavetime4g > wavewait) {wavephaseG = 0; wavecond4g = 0;   } }

}



//eighth phase (H)

if (wavephaseH == 1){



waveidex5g = random (0,8);
waveidex5xg = random (0,7);
 
  
leds[p0_vline7a[waveidex5g]] = CHSV (wavehue0, wavesat0, waveval5g); 
leds[p0_vline7b[waveidex5xg]] = CHSV (wavehue0x, wavesat0, waveval5g);
leds[p1_vline7a[waveidex5g]] = CHSV (wavehue0, wavesat0, waveval5g); 
leds[p1_vline7b[waveidex5xg]] = CHSV (wavehue0x, wavesat0, waveval5g);
leds[p2_vline7a[waveidex5g]] = CHSV (wavehue0, wavesat0, waveval5g); 
leds[p2_vline7b[waveidex5xg]] = CHSV (wavehue0x, wavesat0, waveval5g);
leds[p3_vline7a[waveidex5g]] = CHSV (wavehue0, wavesat0, waveval5g); 
leds[p3_vline7b[waveidex5xg]] = CHSV (wavehue0x, wavesat0, waveval5g);
leds[p4_vline7a[waveidex5g]] = CHSV (wavehue0, wavesat0, waveval5g); 
leds[p4_vline7b[waveidex5xg]] = CHSV (wavehue0x, wavesat0, waveval5g);

if (wavecond5g == 0) {
 if (waveval5g < 244) { waveval5g = waveval5g + wavespd;} 
 if (waveval5g >= 244){ wavecond5g = 1; wavephaseI = 1;} }
  
if (wavecond5g == 1) {
  if (waveval5g > 3.6) { waveval5g = waveval5g - wavespd; } 
  if (waveval5g <= 3.6 ) {  wavetime5g = 0; wavecond5g = 2;} }
  
  

if (wavecond5g == 2) { if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline7a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline7b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p1_vline7a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline7b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p2_vline7a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline7b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p3_vline7a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline7b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p4_vline7a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline7b[i]] = CHSV (wavehue0, wavesat0, 0);} } if (wavetime5g > wavewait) {wavecond5g = 0; wavephaseH = 0;   } }

}




//nineth phase (I)
if (wavephaseI == 1){




waveidex4i = random (0,8);
waveidex4xi = random (0,7);
 
  
leds[p0_vline8a[waveidex4i]] = CHSV (wavehue0, wavesat0, waveval4i); 
leds[p0_vline8b[waveidex4xi]] = CHSV (wavehue0x, wavesat0, waveval4i);
leds[p1_vline8a[waveidex4i]] = CHSV (wavehue0, wavesat0, waveval4i); 
leds[p1_vline8b[waveidex4xi]] = CHSV (wavehue0x, wavesat0, waveval4i);
leds[p2_vline8a[waveidex4i]] = CHSV (wavehue0, wavesat0, waveval4i); 
leds[p2_vline8b[waveidex4xi]] = CHSV (wavehue0x, wavesat0, waveval4i);
leds[p3_vline8a[waveidex4i]] = CHSV (wavehue0, wavesat0, waveval4i); 
leds[p3_vline8b[waveidex4xi]] = CHSV (wavehue0x, wavesat0, waveval4i);
leds[p4_vline8a[waveidex4i]] = CHSV (wavehue0, wavesat0, waveval4i); 
leds[p4_vline8b[waveidex4xi]] = CHSV (wavehue0x, wavesat0, waveval4i);

if (wavecond4i == 0) {
 if (waveval4i < 244) { waveval4i = waveval4i + wavespd;} 
 if (waveval4i >= 244){ wavecond4i = 1; wavephaseJ = 1;  } }
  
if (wavecond4i == 1) {
  if (waveval4i > 3.6) { waveval4i = waveval4i - wavespd; } 
  if (waveval4i <= 3.6 ) {  wavetime4i = 0; wavecond4i = 2;} }
  
  

if (wavecond4i == 2) { if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline8a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline8b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p1_vline8a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline8b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p2_vline8a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline8b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p3_vline8a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline8b[i]] = CHSV (wavehue0, wavesat0, 0);}
                      for (int i = 0; i< 8; i++){  leds[p4_vline8a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline8b[i]] = CHSV (wavehue0, wavesat0, 0);}} if (wavetime4i > wavewait) {wavephaseI = 0; wavecond4i = 0;  } }

}


//tenth phase (J)

if (wavephaseJ == 1){




waveidex5i = random (0,8);
waveidex5xi = random (0,7);
 
  
leds[p0_vline9a[waveidex5i]] = CHSV (wavehue0, wavesat0, waveval5i); 
leds[p0_vline9b[waveidex5xi]] = CHSV (wavehue0x, wavesat0, waveval5i);
leds[p1_vline9a[waveidex5i]] = CHSV (wavehue0, wavesat0, waveval5i); 
leds[p1_vline9b[waveidex5xi]] = CHSV (wavehue0x, wavesat0, waveval5i);
leds[p2_vline9a[waveidex5i]] = CHSV (wavehue0, wavesat0, waveval5i); 
leds[p2_vline9b[waveidex5xi]] = CHSV (wavehue0x, wavesat0, waveval5i);
leds[p3_vline9a[waveidex5i]] = CHSV (wavehue0, wavesat0, waveval5i); 
leds[p3_vline9b[waveidex5xi]] = CHSV (wavehue0x, wavesat0, waveval5i);
leds[p4_vline9a[waveidex5i]] = CHSV (wavehue0, wavesat0, waveval5i); 
leds[p4_vline9b[waveidex5xi]] = CHSV (wavehue0x, wavesat0, waveval5i);

if (wavecond5i == 0) {
 if (waveval5i < 244) { waveval5i = waveval5i + wavespd;} 
 if (waveval5i >= 244){ wavecond5i = 1; wavephaseA = 1; } }
  
if (wavecond5i == 1) {
  if (waveval5i > 3.6) { waveval5i = waveval5i - wavespd; } 
  if (waveval5i <= 3.6 ) {  wavetime5i = 0; wavecond5i = 2;} }
  
  

if (wavecond5i == 2) {if (wavetails == 1){ for (int i = 0; i< 8; i++){  leds[p0_vline9a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p0_vline9b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p1_vline9a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p1_vline9b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p2_vline9a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p2_vline9b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p3_vline9a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p3_vline9b[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 8; i++){  leds[p4_vline9a[i]] = CHSV (wavehue0, wavesat0, 0);} 
                      for (int i = 0; i< 7; i++){  leds[p4_vline9b[i]] = CHSV (wavehue0, wavesat0, 0);} } if (wavetime5i > wavewait) {wavecond5i = 0; wavephaseJ = 0; wavephase99 = 1; wavetime3i = 0;   } }

}








if (wavephase99 == 1){ if (wavetime3i >150) {wavephase99 = 0; wavephaseA = 1;}} 

} //end style 3


  LEDS.show();
  
  } 
