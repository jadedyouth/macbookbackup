int spirspd = 100;
byte spirmode = 0;


//panel 0
////starts at 1 instead of 0 because drunk.

elapsedMillis spirtime1;
elapsedMillis spirtime1x;
byte spircond1;
int spirdex1;
byte spirhue1;
byte spirsat1 = 255;
byte spirval1 = 100;

elapsedMillis spirtime2;
byte spircond2;
int spirdex2;
byte spirhue2;
byte spirsat2 = 255;
byte spirval2 = 100;

elapsedMillis spirtime3;
byte spircond3;
int spirdex3;
byte spirhue3;
byte spirsat3 = 255;
byte spirval3 = 100;

elapsedMillis spirtime4;
byte spircond4;
int spirdex4;
byte spirhue4;
byte spirsat4 = 255;
byte spirval4 = 100;

//panel 1
elapsedMillis spirtime5;
byte spircond5;
int spirdex5;
byte spirhue5;
byte spirsat5 = 255;
byte spirval5 = 100;

elapsedMillis spirtime6;
byte spircond6;
int spirdex6;
byte spirhue6;
byte spirsat6 = 255;
byte spirval6 = 100;

elapsedMillis spirtime7;
byte spircond7;
int spirdex7;
byte spirhue7;
byte spirsat7 = 255;
byte spirval7 = 100;

elapsedMillis spirtime8;
byte spircond8;
int spirdex8;
byte spirhue8;
byte spirsat8 = 255;
byte spirval8 = 100;

//panel 2

elapsedMillis spirtime9;
byte spircond9;
int spirdex9;
byte spirhue9;
byte spirsat9 = 255;
byte spirval9 = 100;

elapsedMillis spirtime10;
byte spircond10;
int spirdex10;
byte spirhue10;
byte spirsat10 = 255;
byte spirval10 = 100;

elapsedMillis spirtime11;
byte spircond11;
int spirdex11;
byte spirhue11;
byte spirsat11 = 255;
byte spirval11 = 100;

elapsedMillis spirtime12;
byte spircond12;
int spirdex12;
byte spirhue12;
byte spirsat12 = 255;
byte spirval12 = 100;

//panel3
elapsedMillis spirtime13;
byte spircond13;
int spirdex13;
byte spirhue13;
byte spirsat13 = 255;
byte spirval13 = 100;

elapsedMillis spirtime14;
byte spircond14;
int spirdex14;
byte spirhue14;
byte spirsat14 = 255;
byte spirval14 = 100;

elapsedMillis spirtime15;
byte spircond15;
int spirdex15;
byte spirhue15;
byte spirsat15 = 255;
byte spirval15 = 100;

elapsedMillis spirtime16;
byte spircond16;
int spirdex16;
byte spirhue16;
byte spirsat16 = 255;
byte spirval16 = 100;

//panel 4
elapsedMillis spirtime17;
byte spircond17;
int spirdex17;
byte spirhue17;
byte spirsat17 = 255;
byte spirval17 = 100;

elapsedMillis spirtime18;
byte spircond18;
int spirdex18;
byte spirhue18;
byte spirsat18 = 255;
byte spirval18 = 100;

elapsedMillis spirtime19;
byte spircond19;
int spirdex19;
byte spirhue19;
byte spirsat19 = 255;
byte spirval19 = 100;

elapsedMillis spirtime20;
byte spircond20;
int spirdex20;
byte spirhue20;
byte spirsat20 = 255;
byte spirval20 = 100;


void mystic_spiral (){
spirhue1 = 160;
spirhue2 = 160;
spirhue3 = 160;
spirhue4 = 160;

spirhue5 = 160;
spirhue6 = 160;
spirhue7 = 160;
spirhue8 = 160;

spirhue9 = 160;
spirhue10 = 160;
spirhue11 = 160;
spirhue12 = 160;

spirhue13 = 160;
spirhue14 = 160;
spirhue15 = 160;
spirhue16 = 160;

spirhue17 = 160;
spirhue18 = 160;
spirhue19 = 160;
spirhue20 = 160;

if (spirmode == 0) {

//from the inside to outside 
//spiral 1
if (spircond1 == 0){

if (spirtime1 > spirspd) {if (spirdex1 < 12) {spirdex1++;} if (spirdex1 >= 12) {spirdex1 = 11; spircond1 = 1;}  spirtime1 = 0;}
leds[p0_pbox1d[spirdex1]] = CHSV (spirhue1, spirsat1, spirval1);

}

if (spircond1 == 1){

if (spirtime1 > spirspd) {if (spirdex1 > 0) {spirdex1--;} if (spirdex1 <= 0) {spirdex1 = 0; spircond1 = 2;}  spirtime1 = 0;}
leds[p0_pbox1d[spirdex1]] = CHSV (spirhue1, spirsat1, 0);

}

if (spircond1 == 2){spirdex1 = 11; spircond1 = 3;}


if (spircond1 == 3){

if (spirtime1 > spirspd) {if (spirdex1 > 0) {spirdex1--;} if (spirdex1 <= 0) {spirdex1 = 0; spircond1 = 4;}  spirtime1 = 0;}
leds[p0_pbox1d[spirdex1]] = CHSV (spirhue1, spirsat1, spirval1);

}

if (spircond1 == 4){leds[p0_pbox1d[spirdex1]] = CHSV (spirhue1, spirsat1, spirval1); if (spirtime1 > spirspd) {spircond1 = 5; spirtime1 = 0;} }


if (spircond1 == 5){

if (spirtime1 > spirspd) {if (spirdex1 < 12) {spirdex1++;} if (spirdex1 >= 12) {spirdex1 = 0; spircond1 = 0;}  spirtime1 = 0;}
leds[p0_pbox1d[spirdex1]] = CHSV (spirhue1, spirsat1, 0);

}


//spiral 2
if (spircond2 == 0){

if (spirtime2 > spirspd) {if (spirdex2 < 20) {spirdex2++;} if (spirdex2 >= 20) {spirdex2 = 20-1; spircond2 = 1;}  spirtime2 = 0;}
leds[p0_pbox2d[spirdex2]] = CHSV (spirhue2, spirsat2, spirval2);

}

if (spircond2 == 1){

if (spirtime2 > spirspd) {if (spirdex2 > 0) {spirdex2--;} if (spirdex2 <= 0) {spirdex2 = 0; spircond2 = 2;}  spirtime2 = 0;}
leds[p0_pbox2d[spirdex2]] = CHSV (spirhue2, spirsat2, 0);

}

if (spircond2 == 2){spirdex2 = 20-1; spircond2 = 3;}


if (spircond2 == 3){

if (spirtime2 > spirspd) {if (spirdex2 > 0) {spirdex2--;} if (spirdex2 <= 0) {spirdex2 = 0; spircond2 = 4;}  spirtime2 = 0;}
leds[p0_pbox2d[spirdex2]] = CHSV (spirhue2, spirsat2, spirval2);

}

if (spircond2 == 4){leds[p0_pbox2d[spirdex2]] = CHSV (spirhue2, spirsat2, spirval2); if (spirtime2 > spirspd) {spircond2 = 5; spirtime2 = 0;} }


if (spircond2 == 5){

if (spirtime2 > spirspd) {if (spirdex2 < 20) {spirdex2++;} if (spirdex2 >= 20) {spirdex2 = 0; spircond2 = 0;}  spirtime2 = 0;}
leds[p0_pbox2d[spirdex2]] = CHSV (spirhue2, spirsat2, 0);

}

//spiral 3
if (spircond3 == 0){

if (spirtime3 > spirspd) {if (spirdex3 < 28) {spirdex3++;} if (spirdex3 >= 28) {spirdex3 = 28-1; spircond3 = 1;}  spirtime3 = 0;}
leds[p0_pbox3d[spirdex3]] = CHSV (spirhue3, spirsat3, spirval3);

}

if (spircond3 == 1){

if (spirtime3 > spirspd) {if (spirdex3 > 0) {spirdex3--;} if (spirdex3 <= 0) {spirdex3 = 0; spircond3 = 2;}  spirtime3 = 0;}
leds[p0_pbox3d[spirdex3]] = CHSV (spirhue3, spirsat3, 0);

}

if (spircond3 == 2){spirdex3 = 28-1; spircond3 = 3;}


if (spircond3 == 3){

if (spirtime3 > spirspd) {if (spirdex3 > 0) {spirdex3--;} if (spirdex3 <= 0) {spirdex3 = 0; spircond3 = 4;}  spirtime3 = 0;}
leds[p0_pbox3d[spirdex3]] = CHSV (spirhue3, spirsat3, spirval3);

}

if (spircond3 == 4){leds[p0_pbox3d[spirdex3]] = CHSV (spirhue3, spirsat3, spirval3); if (spirtime3 > spirspd) {spircond3 = 5; spirtime3 = 0;} }


if (spircond3 == 5){

if (spirtime3 > spirspd) {if (spirdex3 < 28) {spirdex3++;} if (spirdex3 >= 28) {spirdex3 = 0; spircond3 = 0;}  spirtime3 = 0;}
leds[p0_pbox3d[spirdex3]] = CHSV (spirhue3, spirsat3, 0);
}

//spiral 4
if (spircond4 == 0){

if (spirtime4 > spirspd) {if (spirdex4 < 36) {spirdex4++;} if (spirdex4 >= 36) {spirdex4 = 36-1; spircond4 = 1;}  spirtime4 = 0;}
leds[p0_pbox4d[spirdex4]] = CHSV (spirhue4, spirsat4, spirval4);

}

if (spircond4 == 1){

if (spirtime4 > spirspd) {if (spirdex4 > 0) {spirdex4--;} if (spirdex4 <= 0) {spirdex4 = 0; spircond4 = 2;}  spirtime4 = 0;}
leds[p0_pbox4d[spirdex4]] = CHSV (spirhue4, spirsat4, 0);

}

if (spircond4 == 2){spirdex4 = 36-1; spircond4 = 3;}


if (spircond4 == 3){

if (spirtime4 > spirspd) {if (spirdex4 > 0) {spirdex4--;} if (spirdex4 <= 0) {spirdex4 = 0; spircond4 = 4;}  spirtime4 = 0;}
leds[p0_pbox4d[spirdex4]] = CHSV (spirhue4, spirsat4, spirval4);

}

if (spircond4 == 4){leds[p0_pbox4d[spirdex4]] = CHSV (spirhue4, spirsat4, spirval4); if (spirtime4 > spirspd) {spircond4 = 5; spirtime4 = 0;} }


if (spircond4 == 5){

if (spirtime4 > spirspd) {if (spirdex4 < 36) {spirdex4++;} if (spirdex4 >= 36) {spirdex4 = 0; spircond4 = 0;}  spirtime4 = 0;}
leds[p0_pbox4d[spirdex4]] = CHSV (spirhue4, spirsat4, 0);

}



//////////////////////////Panel 1
//spiral 5 (1)
if (spircond5 == 0){

if (spirtime5 > spirspd) {if (spirdex5 < 12) {spirdex5++;} if (spirdex5 >= 12) {spirdex5 = 12-1; spircond5 = 1;}  spirtime5 = 0;}
leds[p1_pbox1d[spirdex5]] = CHSV (spirhue5, spirsat5, spirval5);

}

if (spircond5 == 1){

if (spirtime5 > spirspd) {if (spirdex5 > 0) {spirdex5--;} if (spirdex5 <= 0) {spirdex5 = 0; spircond5 = 2;}  spirtime5 = 0;}
leds[p1_pbox1d[spirdex5]] = CHSV (spirhue5, spirsat5, 0);

}

if (spircond5 == 2){spirdex5 = 12-1; spircond5 = 3;}


if (spircond5 == 3){

if (spirtime5 > spirspd) {if (spirdex5 > 0) {spirdex5--;} if (spirdex5 <= 0) {spirdex5 = 0; spircond5 = 4;}  spirtime5 = 0;}
leds[p1_pbox1d[spirdex5]] = CHSV (spirhue5, spirsat5, spirval5);

}

if (spircond5 == 4){leds[p1_pbox1d[spirdex5]] = CHSV (spirhue5, spirsat5, spirval5); if (spirtime5 > spirspd) {spircond5 = 5; spirtime5 = 0;} }


if (spircond5 == 5){

if (spirtime5 > spirspd) {if (spirdex5 < 12) {spirdex5++;} if (spirdex5 >= 12) {spirdex5 = 0; spircond5 = 0;}  spirtime5 = 0;}
leds[p1_pbox1d[spirdex5]] = CHSV (spirhue5, spirsat5, 0);

}

//spiral 6 (2)
if (spircond6 == 0){

if (spirtime6 > spirspd) {if (spirdex6 < 20) {spirdex6++;} if (spirdex6 >= 20) {spirdex6 = 20-1; spircond6 = 1;}  spirtime6 = 0;}
leds[p1_pbox2d[spirdex6]] = CHSV (spirhue6, spirsat6, spirval6);

}

if (spircond6 == 1){

if (spirtime6 > spirspd) {if (spirdex6 > 0) {spirdex6--;} if (spirdex6 <= 0) {spirdex6 = 0; spircond6 = 2;}  spirtime6 = 0;}
leds[p1_pbox2d[spirdex6]] = CHSV (spirhue6, spirsat6, 0);

}

if (spircond6 == 2){spirdex6 = 20-1; spircond6 = 3;}


if (spircond6 == 3){

if (spirtime6 > spirspd) {if (spirdex6 > 0) {spirdex6--;} if (spirdex6 <= 0) {spirdex6 = 0; spircond6 = 4;}  spirtime6 = 0;}
leds[p1_pbox2d[spirdex6]] = CHSV (spirhue6, spirsat6, spirval6);

}

if (spircond6 == 4){leds[p1_pbox2d[spirdex6]] = CHSV (spirhue6, spirsat6, spirval6); if (spirtime6 > spirspd) {spircond6 = 5; spirtime6 = 0;} }


if (spircond6 == 5){

if (spirtime6 > spirspd) {if (spirdex6 < 20) {spirdex6++;} if (spirdex6 >= 20) {spirdex6 = 0; spircond6 = 0;}  spirtime6 = 0;}
leds[p1_pbox2d[spirdex6]] = CHSV (spirhue6, spirsat6, 0);

}

//spiral 7 (3)
if (spircond7 == 0){

if (spirtime7 > spirspd) {if (spirdex7 < 28) {spirdex7++;} if (spirdex7 >= 28) {spirdex7 = 28-1; spircond7 = 1;}  spirtime7 = 0;}
leds[p1_pbox3d[spirdex7]] = CHSV (spirhue7, spirsat7, spirval7);

}

if (spircond7 == 1){

if (spirtime7 > spirspd) {if (spirdex7 > 0) {spirdex7--;} if (spirdex7 <= 0) {spirdex7 = 0; spircond7 = 2;}  spirtime7 = 0;}
leds[p1_pbox3d[spirdex7]] = CHSV (spirhue7, spirsat7, 0);

}

if (spircond7 == 2){spirdex7 = 28-1; spircond7 = 3;}


if (spircond7 == 3){

if (spirtime7 > spirspd) {if (spirdex7 > 0) {spirdex7--;} if (spirdex7 <= 0) {spirdex7 = 0; spircond7 = 4;}  spirtime7 = 0;}
leds[p1_pbox3d[spirdex7]] = CHSV (spirhue7, spirsat7, spirval7);

}

if (spircond7 == 4){leds[p1_pbox3d[spirdex7]] = CHSV (spirhue7, spirsat7, spirval7); if (spirtime7 > spirspd) {spircond7 = 5; spirtime7 = 0;} }


if (spircond7 == 5){

if (spirtime7 > spirspd) {if (spirdex7 < 28) {spirdex7++;} if (spirdex7 >= 28) {spirdex7 = 0; spircond7 = 0;}  spirtime7 = 0;}
leds[p1_pbox3d[spirdex7]] = CHSV (spirhue7, spirsat7, 0);

}
//spiral 8 (4)

if (spircond8 == 0){

if (spirtime8 > spirspd) {if (spirdex8 < 36) {spirdex8++;} if (spirdex8 >= 36) {spirdex8 = 36-1; spircond8 = 1;}  spirtime8 = 0;}
leds[p1_pbox4d[spirdex8]] = CHSV (spirhue8, spirsat8, spirval8);

}

if (spircond8 == 1){

if (spirtime8 > spirspd) {if (spirdex8 > 0) {spirdex8--;} if (spirdex8 <= 0) {spirdex8 = 0; spircond8 = 2;}  spirtime8 = 0;}
leds[p1_pbox4d[spirdex8]] = CHSV (spirhue8, spirsat8, 0);

}

if (spircond8 == 2){spirdex8 = 36-1; spircond8 = 3;}


if (spircond8 == 3){

if (spirtime8 > spirspd) {if (spirdex8 > 0) {spirdex8--;} if (spirdex8 <= 0) {spirdex8 = 0; spircond8 = 4;}  spirtime8 = 0;}
leds[p1_pbox4d[spirdex8]] = CHSV (spirhue8, spirsat8, spirval8);

}

if (spircond8 == 4){leds[p1_pbox4d[spirdex8]] = CHSV (spirhue8, spirsat8, spirval8); if (spirtime8 > spirspd) {spircond8 = 5; spirtime8 = 0;} }


if (spircond8 == 5){

if (spirtime8 > spirspd) {if (spirdex8 < 36) {spirdex8++;} if (spirdex8 >= 36) {spirdex8 = 0; spircond8 = 0;}  spirtime8 = 0;}
leds[p1_pbox4d[spirdex8]] = CHSV (spirhue8, spirsat8, 0);

}

///////////////////////////Panel 3
//spiral 9 (1)
if (spircond9 == 0){

if (spirtime9 > spirspd) {if (spirdex9 < 12) {spirdex9++;} if (spirdex9 >= 12) {spirdex9 = 12-1; spircond9 = 1;}  spirtime9 = 0;}
leds[p2_pbox1d[spirdex9]] = CHSV (spirhue9, spirsat9, spirval9);

}

if (spircond9 == 1){

if (spirtime9 > spirspd) {if (spirdex9 > 0) {spirdex9--;} if (spirdex9 <= 0) {spirdex9 = 0; spircond9 = 2;}  spirtime9 = 0;}
leds[p2_pbox1d[spirdex9]] = CHSV (spirhue9, spirsat9, 0);

}

if (spircond9 == 2){spirdex9 = 12-1; spircond9 = 3;}


if (spircond9 == 3){

if (spirtime9 > spirspd) {if (spirdex9 > 0) {spirdex9--;} if (spirdex9 <= 0) {spirdex9 = 0; spircond9 = 4;}  spirtime9 = 0;}
leds[p2_pbox1d[spirdex9]] = CHSV (spirhue9, spirsat9, spirval9);

}

if (spircond9 == 4){leds[p2_pbox1d[spirdex9]] = CHSV (spirhue9, spirsat9, spirval9); if (spirtime9 > spirspd) {spircond9 = 5; spirtime9 = 0;} }


if (spircond9 == 5){

if (spirtime9 > spirspd) {if (spirdex9 < 12) {spirdex9++;} if (spirdex9 >= 12) {spirdex9 = 0; spircond9 = 0;}  spirtime9 = 0;}
leds[p2_pbox1d[spirdex9]] = CHSV (spirhue9, spirsat9, 0);
}

//spiral 10 (2)
if (spircond10 == 0){

if (spirtime10 > spirspd) {if (spirdex10 < 20) {spirdex10++;} if (spirdex10 >= 20) {spirdex10 = 20-1; spircond10 = 1;}  spirtime10 = 0;}
leds[p2_pbox2d[spirdex10]] = CHSV (spirhue10, spirsat10, spirval10);

}

if (spircond10 == 1){

if (spirtime10 > spirspd) {if (spirdex10 > 0) {spirdex10--;} if (spirdex10 <= 0) {spirdex10 = 0; spircond10 = 2;}  spirtime10 = 0;}
leds[p2_pbox2d[spirdex10]] = CHSV (spirhue10, spirsat10, 0);

}

if (spircond10 == 2){spirdex10 = 20-1; spircond10 = 3;}


if (spircond10 == 3){

if (spirtime10 > spirspd) {if (spirdex10 > 0) {spirdex10--;} if (spirdex10 <= 0) {spirdex10 = 0; spircond10 = 4;}  spirtime10 = 0;}
leds[p2_pbox2d[spirdex10]] = CHSV (spirhue10, spirsat10, spirval10);

}

if (spircond10 == 4){leds[p2_pbox2d[spirdex10]] = CHSV (spirhue10, spirsat10, spirval10); if (spirtime10 > spirspd) {spircond10 = 5; spirtime10 = 0;} }


if (spircond10 == 5){

if (spirtime10 > spirspd) {if (spirdex10 < 20) {spirdex10++;} if (spirdex10 >= 20) {spirdex10 = 0; spircond10 = 0;}  spirtime10 = 0;}
leds[p2_pbox2d[spirdex10]] = CHSV (spirhue10, spirsat10, 0);
}


//spiral 11 (3)
if (spircond11 == 0){

if (spirtime11 > spirspd) {if (spirdex11 < 28) {spirdex11++;} if (spirdex11 >= 28) {spirdex11 = 28-1; spircond11 = 1;}  spirtime11 = 0;}
leds[p2_pbox3d[spirdex11]] = CHSV (spirhue11, spirsat11, spirval11);

}

if (spircond11 == 1){

if (spirtime11 > spirspd) {if (spirdex11 > 0) {spirdex11--;} if (spirdex11 <= 0) {spirdex11 = 0; spircond11 = 2;}  spirtime11 = 0;}
leds[p2_pbox3d[spirdex11]] = CHSV (spirhue11, spirsat11, 0);

}

if (spircond11 == 2){spirdex11 = 28-1; spircond11 = 3;}


if (spircond11 == 3){

if (spirtime11 > spirspd) {if (spirdex11 > 0) {spirdex11--;} if (spirdex11 <= 0) {spirdex11 = 0; spircond11 = 4;}  spirtime11 = 0;}
leds[p2_pbox3d[spirdex11]] = CHSV (spirhue11, spirsat11, spirval11);

}

if (spircond11 == 4){leds[p2_pbox3d[spirdex11]] = CHSV (spirhue11, spirsat11, spirval11); if (spirtime11 > spirspd) {spircond11 = 5; spirtime11 = 0;} }


if (spircond11 == 5){

if (spirtime11 > spirspd) {if (spirdex11 < 28) {spirdex11++;} if (spirdex11 >= 28) {spirdex11 = 0; spircond11 = 0;}  spirtime11 = 0;}
leds[p2_pbox3d[spirdex11]] = CHSV (spirhue11, spirsat11, 0);
}

//spiral 12
if (spircond12 == 0){

if (spirtime12 > spirspd) {if (spirdex12 < 36) {spirdex12++;} if (spirdex12 >= 36) {spirdex12 = 36-1; spircond12 = 1;}  spirtime12 = 0;}
leds[p2_pbox4d[spirdex12]] = CHSV (spirhue12, spirsat12, spirval12);

}

if (spircond12 == 1){

if (spirtime12 > spirspd) {if (spirdex12 > 0) {spirdex12--;} if (spirdex12 <= 0) {spirdex12 = 0; spircond12 = 2;}  spirtime12 = 0;}
leds[p2_pbox4d[spirdex12]] = CHSV (spirhue12, spirsat12, 0);

}

if (spircond12 == 2){spirdex12 = 36-1; spircond12 = 3;}


if (spircond12 == 3){

if (spirtime12 > spirspd) {if (spirdex12 > 0) {spirdex12--;} if (spirdex12 <= 0) {spirdex12 = 0; spircond12 = 4;}  spirtime12 = 0;}
leds[p2_pbox4d[spirdex12]] = CHSV (spirhue12, spirsat12, spirval12);

}

if (spircond12 == 4){leds[p2_pbox4d[spirdex12]] = CHSV (spirhue12, spirsat12, spirval12); if (spirtime12 > spirspd) {spircond12 = 5; spirtime12 = 0;} }


if (spircond12 == 5){

if (spirtime12 > spirspd) {if (spirdex12 < 36) {spirdex12++;} if (spirdex12 >= 36) {spirdex12 = 0; spircond12 = 0;}  spirtime12 = 0;}
leds[p2_pbox4d[spirdex12]] = CHSV (spirhue12, spirsat12, 0);
}

/////////////////////////////////Panel 3

//spiral 13 (1)
if (spircond13 == 0){

if (spirtime13 > spirspd) {if (spirdex13 < 12) {spirdex13++;} if (spirdex13 >= 12) {spirdex13 = 12-1; spircond13 = 1;}  spirtime13 = 0;}
leds[p3_pbox1d[spirdex13]] = CHSV (spirhue13, spirsat13, spirval13);

}

if (spircond13 == 1){

if (spirtime13 > spirspd) {if (spirdex13 > 0) {spirdex13--;} if (spirdex13 <= 0) {spirdex13 = 0; spircond13 = 2;}  spirtime13 = 0;}
leds[p3_pbox1d[spirdex13]] = CHSV (spirhue13, spirsat13, 0);

}

if (spircond13 == 2){spirdex13 = 12-1; spircond13 = 3;}


if (spircond13 == 3){

if (spirtime13 > spirspd) {if (spirdex13 > 0) {spirdex13--;} if (spirdex13 <= 0) {spirdex13 = 0; spircond13 = 4;}  spirtime13 = 0;}
leds[p3_pbox1d[spirdex13]] = CHSV (spirhue13, spirsat13, spirval13);

}

if (spircond13 == 4){leds[p3_pbox1d[spirdex13]] = CHSV (spirhue13, spirsat13, spirval13); if (spirtime13 > spirspd) {spircond13 = 5; spirtime13 = 0;} }


if (spircond13 == 5){

if (spirtime13 > spirspd) {if (spirdex13 < 12) {spirdex13++;} if (spirdex13 >= 12) {spirdex13 = 0; spircond13 = 0;}  spirtime13 = 0;}
leds[p3_pbox1d[spirdex13]] = CHSV (spirhue13, spirsat13, 0);
}

//spiral 14 (2)
if (spircond14 == 0){

if (spirtime14 > spirspd) {if (spirdex14 < 20) {spirdex14++;} if (spirdex14 >= 20) {spirdex14 = 20-1; spircond14 = 1;}  spirtime14 = 0;}
leds[p3_pbox2d[spirdex14]] = CHSV (spirhue14, spirsat14, spirval14);

}

if (spircond14 == 1){

if (spirtime14 > spirspd) {if (spirdex14 > 0) {spirdex14--;} if (spirdex14 <= 0) {spirdex14 = 0; spircond14 = 2;}  spirtime14 = 0;}
leds[p3_pbox2d[spirdex14]] = CHSV (spirhue14, spirsat14, 0);

}

if (spircond14 == 2){spirdex14 = 20-1; spircond14 = 3;}


if (spircond14 == 3){

if (spirtime14 > spirspd) {if (spirdex14 > 0) {spirdex14--;} if (spirdex14 <= 0) {spirdex14 = 0; spircond14 = 4;}  spirtime14 = 0;}
leds[p3_pbox2d[spirdex14]] = CHSV (spirhue14, spirsat14, spirval14);

}

if (spircond14 == 4){leds[p3_pbox2d[spirdex14]] = CHSV (spirhue14, spirsat14, spirval14); if (spirtime14 > spirspd) {spircond14 = 5; spirtime14 = 0;} }


if (spircond14 == 5){

if (spirtime14 > spirspd) {if (spirdex14 < 20) {spirdex14++;} if (spirdex14 >= 20) {spirdex14 = 0; spircond14 = 0;}  spirtime14 = 0;}
leds[p3_pbox2d[spirdex14]] = CHSV (spirhue14, spirsat14, 0);
}


//spiral 15 (3)
if (spircond15 == 0){

if (spirtime15 > spirspd) {if (spirdex15 < 28) {spirdex15++;} if (spirdex15 >= 28) {spirdex15 = 28-1; spircond15 = 1;}  spirtime15 = 0;}
leds[p3_pbox3d[spirdex15]] = CHSV (spirhue15, spirsat15, spirval15);

}

if (spircond15 == 1){

if (spirtime15 > spirspd) {if (spirdex15 > 0) {spirdex15--;} if (spirdex15 <= 0) {spirdex15 = 0; spircond15 = 2;}  spirtime15 = 0;}
leds[p3_pbox3d[spirdex15]] = CHSV (spirhue15, spirsat15, 0);

}

if (spircond15 == 2){spirdex15 = 28-1; spircond15 = 3;}


if (spircond15 == 3){

if (spirtime15 > spirspd) {if (spirdex15 > 0) {spirdex15--;} if (spirdex15 <= 0) {spirdex15 = 0; spircond15 = 4;}  spirtime15 = 0;}
leds[p3_pbox3d[spirdex15]] = CHSV (spirhue15, spirsat15, spirval15);

}

if (spircond15 == 4){leds[p3_pbox3d[spirdex15]] = CHSV (spirhue15, spirsat15, spirval15); if (spirtime15 > spirspd) {spircond15 = 5; spirtime15 = 0;} }


if (spircond15 == 5){

if (spirtime15 > spirspd) {if (spirdex15 < 28) {spirdex15++;} if (spirdex15 >= 28) {spirdex15 = 0; spircond15 = 0;}  spirtime15 = 0;}
leds[p3_pbox3d[spirdex15]] = CHSV (spirhue15, spirsat15, 0);
}

//spiral 16
if (spircond16 == 0){

if (spirtime16 > spirspd) {if (spirdex16 < 36) {spirdex16++;} if (spirdex16 >= 36) {spirdex16 = 36-1; spircond16 = 1;}  spirtime16 = 0;}
leds[p3_pbox4d[spirdex16]] = CHSV (spirhue16, spirsat16, spirval16);

}

if (spircond16 == 1){

if (spirtime16 > spirspd) {if (spirdex16 > 0) {spirdex16--;} if (spirdex16 <= 0) {spirdex16 = 0; spircond16 = 2;}  spirtime16 = 0;}
leds[p3_pbox4d[spirdex16]] = CHSV (spirhue16, spirsat16, 0);

}

if (spircond16 == 2){spirdex16 = 36-1; spircond16 = 3;}


if (spircond16 == 3){

if (spirtime16 > spirspd) {if (spirdex16 > 0) {spirdex16--;} if (spirdex16 <= 0) {spirdex16 = 0; spircond16 = 4;}  spirtime16 = 0;}
leds[p3_pbox4d[spirdex16]] = CHSV (spirhue16, spirsat16, spirval16);

}

if (spircond16 == 4){leds[p3_pbox4d[spirdex16]] = CHSV (spirhue16, spirsat16, spirval16); if (spirtime16 > spirspd) {spircond16 = 5; spirtime16 = 0;} }


if (spircond16 == 5){

if (spirtime16 > spirspd) {if (spirdex16 < 36) {spirdex16++;} if (spirdex16 >= 36) {spirdex16 = 0; spircond16 = 0;}  spirtime16 = 0;}
leds[p3_pbox4d[spirdex16]] = CHSV (spirhue16, spirsat16, 0);
}


/////panel 4

//spiral 17 (1)
if (spircond17 == 0){

if (spirtime17 > spirspd) {if (spirdex17 < 12) {spirdex17++;} if (spirdex17 >= 12) {spirdex17 = 12-1; spircond17 = 1;}  spirtime17 = 0;}
leds[p4_pbox1d[spirdex17]] = CHSV (spirhue17, spirsat17, spirval17);

}

if (spircond17 == 1){

if (spirtime17 > spirspd) {if (spirdex17 > 0) {spirdex17--;} if (spirdex17 <= 0) {spirdex17 = 0; spircond17 = 2;}  spirtime17 = 0;}
leds[p4_pbox1d[spirdex17]] = CHSV (spirhue17, spirsat17, 0);

}

if (spircond17 == 2){spirdex17 = 12-1; spircond17 = 3;}


if (spircond17 == 3){

if (spirtime17 > spirspd) {if (spirdex17 > 0) {spirdex17--;} if (spirdex17 <= 0) {spirdex17 = 0; spircond17 = 4;}  spirtime17 = 0;}
leds[p4_pbox1d[spirdex17]] = CHSV (spirhue17, spirsat17, spirval17);

}

if (spircond17 == 4){leds[p4_pbox1d[spirdex17]] = CHSV (spirhue17, spirsat17, spirval17); if (spirtime17 > spirspd) {spircond17 = 5; spirtime17 = 0;} }


if (spircond17 == 5){

if (spirtime17 > spirspd) {if (spirdex17 < 12) {spirdex17++;} if (spirdex17 >= 12) {spirdex17 = 0; spircond17 = 0;}  spirtime17 = 0;}
leds[p4_pbox1d[spirdex17]] = CHSV (spirhue17, spirsat17, 0);
}

//spiral 18 (2)
if (spircond18 == 0){

if (spirtime18 > spirspd) {if (spirdex18 < 20) {spirdex18++;} if (spirdex18 >= 20) {spirdex18 = 20-1; spircond18 = 1;}  spirtime18 = 0;}
leds[p4_pbox2d[spirdex18]] = CHSV (spirhue18, spirsat18, spirval18);

}

if (spircond18 == 1){

if (spirtime18 > spirspd) {if (spirdex18 > 0) {spirdex18--;} if (spirdex18 <= 0) {spirdex18 = 0; spircond18 = 2;}  spirtime18 = 0;}
leds[p4_pbox2d[spirdex18]] = CHSV (spirhue18, spirsat18, 0);

}

if (spircond18 == 2){spirdex18 = 20-1; spircond18 = 3;}


if (spircond18 == 3){

if (spirtime18 > spirspd) {if (spirdex18 > 0) {spirdex18--;} if (spirdex18 <= 0) {spirdex18 = 0; spircond18 = 4;}  spirtime18 = 0;}
leds[p4_pbox2d[spirdex18]] = CHSV (spirhue18, spirsat18, spirval18);

}

if (spircond18 == 4){leds[p4_pbox2d[spirdex18]] = CHSV (spirhue18, spirsat18, spirval18); if (spirtime18 > spirspd) {spircond18 = 5; spirtime18 = 0;} }


if (spircond18 == 5){

if (spirtime18 > spirspd) {if (spirdex18 < 20) {spirdex18++;} if (spirdex18 >= 20) {spirdex18 = 0; spircond18 = 0;}  spirtime18 = 0;}
leds[p4_pbox2d[spirdex18]] = CHSV (spirhue18, spirsat18, 0);
}

//spiral 19 (3)
if (spircond19 == 0){

if (spirtime19 > spirspd) {if (spirdex19 < 28) {spirdex19++;} if (spirdex19 >= 28) {spirdex19 = 28-1; spircond19 = 1;}  spirtime19 = 0;}
leds[p4_pbox3d[spirdex19]] = CHSV (spirhue19, spirsat19, spirval19);

}

if (spircond19 == 1){

if (spirtime19 > spirspd) {if (spirdex19 > 0) {spirdex19--;} if (spirdex19 <= 0) {spirdex19 = 0; spircond19 = 2;}  spirtime19 = 0;}
leds[p4_pbox3d[spirdex19]] = CHSV (spirhue19, spirsat19, 0);

}

if (spircond19 == 2){spirdex19 = 28-1; spircond19 = 3;}


if (spircond19 == 3){

if (spirtime19 > spirspd) {if (spirdex19 > 0) {spirdex19--;} if (spirdex19 <= 0) {spirdex19 = 0; spircond19 = 4;}  spirtime19 = 0;}
leds[p4_pbox3d[spirdex19]] = CHSV (spirhue19, spirsat19, spirval19);

}

if (spircond19 == 4){leds[p4_pbox3d[spirdex19]] = CHSV (spirhue19, spirsat19, spirval19); if (spirtime19 > spirspd) {spircond19 = 5; spirtime19 = 0;} }


if (spircond19 == 5){

if (spirtime19 > spirspd) {if (spirdex19 < 28) {spirdex19++;} if (spirdex19 >= 28) {spirdex19 = 0; spircond19 = 0;}  spirtime19 = 0;}
leds[p4_pbox3d[spirdex19]] = CHSV (spirhue19, spirsat19, 0);
}

//spiral 20 (4)
if (spircond20 == 0){

if (spirtime20 > spirspd) {if (spirdex20 < 36) {spirdex20++;} if (spirdex20 >= 36) {spirdex20 = 36-1; spircond20 = 1;}  spirtime20 = 0;}
leds[p4_pbox4d[spirdex20]] = CHSV (spirhue20, spirsat20, spirval20);

}

if (spircond20 == 1){

if (spirtime20 > spirspd) {if (spirdex20 > 0) {spirdex20--;} if (spirdex20 <= 0) {spirdex20 = 0; spircond20 = 2;}  spirtime20 = 0;}
leds[p4_pbox4d[spirdex20]] = CHSV (spirhue20, spirsat20, 0);

}

if (spircond20 == 2){spirdex20 = 36-1; spircond20 = 3;}


if (spircond20 == 3){

if (spirtime20 > spirspd) {if (spirdex20 > 0) {spirdex20--;} if (spirdex20 <= 0) {spirdex20 = 0; spircond20 = 4;}  spirtime20 = 0;}
leds[p4_pbox4d[spirdex20]] = CHSV (spirhue20, spirsat20, spirval20);

}

if (spircond20 == 4){leds[p4_pbox4d[spirdex20]] = CHSV (spirhue20, spirsat20, spirval20); if (spirtime20 > spirspd) {spircond20 = 5; spirtime20 = 0;} }


if (spircond20 == 5){

if (spirtime20 > spirspd) {if (spirdex20 < 36) {spirdex20++;} if (spirdex20 >= 36) {spirdex20 = 0; spircond20 = 0;}  spirtime20 = 0;}
leds[p4_pbox4d[spirdex20]] = CHSV (spirhue20, spirsat20, 0);
}

}//end spirmode 0

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//one direction only
if (spirmode == 1) {

//from the inside to outside 
//spiral 1


if (spirtime1 > spirspd) {if (spirdex1 < 12) {spirdex1++;} if (spirdex1 >= 6) {spircond1 = 1; } if (spirdex1 >= 12) {spirdex1 = 0; }  spirtime1 = 0;}
leds[p0_pbox1d[spirdex1]] = CHSV (spirhue1, spirsat1, spirval1);



if (spircond1 == 1){

if (spirtime1x > spirspd) {if (spirdex1 < 12) {spirdex1++;} if (spirdex1 >= 12) {spirdex1 = 0; spircond1 = 0;}  spirtime1x = 0;}
leds[p0_pbox1d[spirdex1]] = CHSV (spirhue1, spirsat1, 0);

}
/*

//spiral 2
if (spircond2 == 0){

if (spirtime2 > spirspd) {if (spirdex2 < 20) {spirdex2++;} if (spirdex2 >= 20) {spirdex2 = 0; spircond2 = 1;}  spirtime2 = 0;}
leds[p0_pbox2d[spirdex2]] = CHSV (spirhue2, spirsat2, spirval2);

}

if (spircond2 == 1){

if (spirtime2 > spirspd) {if (spirdex2 < 20) {spirdex2++;} if (spirdex2 >= 20) {spirdex2 = 0; spircond2 = 0;}  spirtime2 = 0;}
leds[p0_pbox2d[spirdex2]] = CHSV (spirhue2, spirsat2, 0);

}

//spiral 3
if (spircond3 == 0){

if (spirtime3 > spirspd) {if (spirdex3 < 28) {spirdex3++;} if (spirdex3 >= 28) {spirdex3 = 0; spircond3 = 1;}  spirtime3 = 0;}
leds[p0_pbox3d[spirdex3]] = CHSV (spirhue3, spirsat3, spirval3);

}

if (spircond3 == 1){

if (spirtime3 > spirspd) {if (spirdex3 < 28) {spirdex3++;} if (spirdex3 >= 28) {spirdex3 = 0; spircond3 = 0;}  spirtime3 = 0;}
leds[p0_pbox3d[spirdex3]] = CHSV (spirhue3, spirsat3, 0);

}

//spiral 4
if (spircond4 == 0){

if (spirtime4 > spirspd) {if (spirdex4 < 36) {spirdex4++;} if (spirdex4 >= 36) {spirdex4 = 0; spircond4 = 1;}  spirtime4 = 0;}
leds[p0_pbox4d[spirdex4]] = CHSV (spirhue4, spirsat4, spirval4);

}

if (spircond4 == 1){

if (spirtime4 > spirspd) {if (spirdex4 < 36) {spirdex4++;} if (spirdex4 >= 36) {spirdex4 = 0; spircond4 = 0;}  spirtime4 = 0;}
leds[p0_pbox4d[spirdex4]] = CHSV (spirhue4, spirsat4, 0);

}





*/



}//end spirmode 1

 LEDS.show(); 
}
