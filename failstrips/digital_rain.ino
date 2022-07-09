/*

byte rainpallet = 1; // 0 is default colours, 1 is changeable min and max hues
byte rainMin = 96; //0 & 25 for house warming
byte rainMax = 96; 


void digital_rain (){

////////////////////////////////////////////////////////////////////////////////////////////////////////PANEL0
///////FROM THE LEFT VERTICAL LINE 0
if (r0go == 0){ r0tailL = random (2,12); rainGate0 = random (0,gointerval);  r0go = 1; rainTime0c = 0; }
if (r0go == 1){ if (rainTime0c > rainGate0) {r0go = 2;}}
if (r0go == 2) {
if (rainTime0a > rainspd) { if (r0 > 0){ r0--; } rainTime0a = 0; }
if (rainTime0b > rainspd) { if (r0tail > 0) { if ( r0 < 29 - r0tailL) {r0tail--; }} rainTime0b = 0;}

leds [p05_vline0[r0]] = CHSV (rainhuea0, rainsata, rainvala);
if (r0 < 28){ leds [p05_vline0[r0tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r0tail == 0) {r0 = 29; r0tail = 29; r0go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 1
if (r1go == 0){ r1tailL = random (2,12); rainGate1 = random (0,gointerval); r1go = 1; rainTime1c = 0;}
if (r1go == 1){ if (rainTime1c > rainGate1) {r1go = 2;}}
if (r1go == 2) {
if (rainTime1a > rainspd) { if (r1 > 0){ r1--; } rainTime1a = 0; }
if (rainTime1b > rainspd) { if (r1tail > 0) { if ( r1 < 29 - r1tailL) {r1tail--; }} rainTime1b = 0;}

leds [p05_vline1[r1]] = CHSV (rainhuea1, rainsata, rainvala);
if (r1 < 28){ leds [p05_vline1[r1tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r1tail == 0) {r1 = 29; r1tail = 29; r1go = 0; }

}


///////FROM THE LEFT VERTICAL LINE 2
if (r2go == 0){ r2tailL = random (2,12); rainGate2 = random (0,gointerval); r2go = 1; rainTime2c = 0;}
if (r2go == 1){ if (rainTime2c > rainGate2) {r2go = 2;}}
if (r2go == 2) {
if (rainTime2a > rainspd) { if (r2 > 0){ r2--; } rainTime2a = 0; }
if (rainTime2b > rainspd) { if (r2tail > 0) { if ( r2 < 29 - r2tailL) {r2tail--; }} rainTime2b = 0;}

leds [p05_vline2[r2]] = CHSV (rainhuea2, rainsata, rainvala);
if (r2 < 28){ leds [p05_vline2[r2tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r2tail == 0) {r2 = 29; r2tail = 29; r2go = 0; }

}


///////FROM THE LEFT VERTICAL LINE 3
if (r3go == 0){ r3tailL = random (2,12); rainGate3 = random (0,gointerval); r3go = 1; rainTime3c = 0;}
if (r3go == 1){ if (rainTime3c > rainGate3) {r3go = 2;}}
if (r3go == 2) {
if (rainTime3a > rainspd) { if (r3 > 0){ r3--; } rainTime3a = 0; }
if (rainTime3b > rainspd) { if (r3tail > 0) { if ( r3 < 29 - r3tailL) {r3tail--; }} rainTime3b = 0;}

leds [p05_vline3[r3]] = CHSV (rainhuea3, rainsata, rainvala);
if (r3 < 28){ leds [p05_vline3[r3tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r3tail == 0) {r3 = 29; r3tail = 29; r3go = 0; }

}

///////FROM THE LEFT VERTICAL LINE 4
if (r4go == 0){ r4tailL = random (2,12); rainGate4 = random (0,gointerval); r4go = 1; rainTime4c = 0; }
if (r4go == 1){ if (rainTime4c > rainGate4) {r4go = 2;}}
if (r4go == 2) {
if (rainTime4a > rainspd) { if (r4 > 0){ r4--; } rainTime4a = 0; }
if (rainTime4b > rainspd) { if (r4tail > 0) { if ( r4 < 29 - r4tailL) {r4tail--; }} rainTime4b = 0;}

leds [p05_vline4[r4]] = CHSV (rainhuea4, rainsata, rainvala);
if (r4 < 28){ leds [p05_vline4[r4tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r4tail == 0) {r4 = 29; r4tail = 29; r4go = 0; }

}

///////FROM THE LEFT VERTICAL LINE 5
if (r5go == 0){ r5tailL = random (2,12); rainGate5 = random (0,gointerval); r5go = 1; rainTime5c = 0;}
if (r5go == 1){ if (rainTime5c > rainGate5) {r5go = 2;}}
if (r5go == 2) {
if (rainTime5a > rainspd) { if (r5 > 0){ r5--; } rainTime5a = 0; }
if (rainTime5b > rainspd) { if (r5tail > 0) { if ( r5 < 29 - r5tailL) {r5tail--; }} rainTime5b = 0;}

leds [p05_vline5[r5]] = CHSV (rainhuea5, rainsata, rainvala);
if (r5 < 28){ leds [p05_vline5[r5tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r5tail == 0) {r5 = 29; r5tail = 29; r5go = 0; }

}

///////FROM THE LEFT VERTICAL LINE 6
if (r6go == 0){ r6tailL = random (2,12); rainGate6 = random (0,gointerval); r6go = 1; rainTime6c = 0;}
if (r6go == 1){ if (rainTime6c > rainGate6) {r6go = 2;}}
if (r6go == 2) {
if (rainTime6a > rainspd) { if (r6 > 0){ r6--; } rainTime6a = 0; }
if (rainTime6b > rainspd) { if (r6tail > 0) { if ( r6 < 29 - r6tailL) {r6tail--; }} rainTime6b = 0;}

leds [p05_vline6[r6]] = CHSV (rainhuea6, rainsata, rainvala);
if (r6 < 28){ leds [p05_vline6[r6tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r6tail == 0) {r6 = 29; r6tail = 29; r6go = 0; }

}

///////FROM THE LEFT VERTICAL LINE 7
if (r7go == 0){ r7tailL = random (2,12); rainGate7 = random (0,gointerval); r7go = 1; rainTime7c = 0;}
if (r7go == 1){ if (rainTime7c > rainGate7) {r7go = 2;}}
if (r7go == 2) {
if (rainTime7a > rainspd) { if (r7 > 0){ r7--; } rainTime7a = 0; }
if (rainTime7b > rainspd) { if (r7tail > 0) { if ( r7 < 29 - r7tailL) {r7tail--; }} rainTime7b = 0;}

leds [p05_vline7[r7]] = CHSV (rainhuea7, rainsata, rainvala);
if (r7 < 28){ leds [p05_vline7[r7tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r7tail == 0) {r7 = 29; r7tail = 29; r7go = 0; }

}

///////FROM THE LEFT VERTICAL LINE 8
if (r8go == 0){ r8tailL = random (2,12); rainGate8 = random (0,gointerval); r8go = 1; rainTime8c = 0;}
if (r8go == 1){ if (rainTime8c > rainGate8) {r8go = 2;}}
if (r8go == 2) {
if (rainTime8a > rainspd) { if (r8 > 0){ r8--; } rainTime8a = 0; }
if (rainTime8b > rainspd) { if (r8tail > 0) { if ( r8 < 29 - r8tailL) {r8tail--; }} rainTime8b = 0;}

leds [p05_vline8[r8]] = CHSV (rainhuea8, rainsata, rainvala);
if (r8 < 28){ leds [p05_vline8[r8tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r8tail == 0) {r8 = 29; r8tail = 29; r8go = 0; }

}


///////FROM THE LEFT VERTICAL LINE 9
if (r9go == 0){ r9tailL = random (2,12); rainGate9 = random (0,gointerval); r9go = 1; rainTime9c = 0;}
if (r9go == 1){ if (rainTime9c > rainGate9) {r9go = 2;}}
if (r9go == 2) {
if (rainTime9a > rainspd) { if (r9 > 0){ r9--; } rainTime9a = 0; }
if (rainTime9b > rainspd) { if (r9tail > 0) { if ( r9 < 29 - r9tailL) {r9tail--; }} rainTime9b = 0;}

leds [p05_vline9[r9]] = CHSV (rainhuea9, rainsata, rainvala);
if (r9 < 28){ leds [p05_vline9[r9tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r9tail == 0) {r9 = 29; r9tail = 29; r9go = 0; }

}

////////////////////////////////////////////////////////////////////////////////////////////////////////PANEL1
///////FROM THE LEFT VERTICAL LINE 10 (0)
if (r10go == 0){ r10tailL = random (2,12); rainGate10 = random (0,gointerval); r10go = 1; rainTime10c = 0;}
if (r10go == 1){ if (rainTime10c > rainGate10) {r10go = 2;}}
if (r10go == 2) {
if (rainTime10a > rainspd) { if (r10 > 0){ r10--; } rainTime10a = 0; }
if (rainTime10b > rainspd) { if (r10tail > 0) { if ( r10 < 29 - r10tailL) {r10tail--; }} rainTime10b = 0;}

leds [p16_vline0[r10]] = CHSV (rainhuea10, rainsata, rainvala);
if (r10 < 28){ leds [p16_vline0[r10tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r10tail == 0) {r10 = 29; r10tail = 29; r10go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 11 (1)
if (r11go == 0){ r11tailL = random (2,12); rainGate11 = random (0,gointerval); r11go = 1; rainTime11c = 0;}
if (r11go == 1){ if (rainTime11c > rainGate11) {r11go = 2;}}
if (r11go == 2) {
if (rainTime11a > rainspd) { if (r11 > 0){ r11--; } rainTime11a = 0; }
if (rainTime11b > rainspd) { if (r11tail > 0) { if ( r11 < 29 - r11tailL) {r11tail--; }} rainTime11b = 0;}

leds [p16_vline1[r11]] = CHSV (rainhuea11, rainsata, rainvala);
if (r11 < 28){ leds [p16_vline1[r11tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r11tail == 0) {r11 = 29; r11tail = 29; r11go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 12 (2)
if (r12go == 0){ r12tailL = random (2,12); rainGate12 = random (0,gointerval); r12go = 1; rainTime12c = 0;}
if (r12go == 1){ if (rainTime12c > rainGate12) {r12go = 2;}}
if (r12go == 2) {
if (rainTime12a > rainspd) { if (r12 > 0){ r12--; } rainTime12a = 0; }
if (rainTime12b > rainspd) { if (r12tail > 0) { if ( r12 < 29 - r12tailL) {r12tail--; }} rainTime12b = 0;}

leds [p16_vline2[r12]] = CHSV (rainhuea12, rainsata, rainvala);
if (r12 < 28){ leds [p16_vline2[r12tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r12tail == 0) {r12 = 29; r12tail = 29; r12go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 13 (3)
if (r13go == 0){ r13tailL = random (2,12); rainGate13 = random (0,gointerval); r13go = 1; rainTime13c = 0;}
if (r13go == 1){ if (rainTime13c > rainGate13) {r13go = 2;}}
if (r13go == 2) {
if (rainTime13a > rainspd) { if (r13 > 0){ r13--; } rainTime13a = 0; }
if (rainTime13b > rainspd) { if (r13tail > 0) { if ( r13 < 29 - r13tailL) {r13tail--; }} rainTime13b = 0;}

leds [p16_vline3[r13]] = CHSV (rainhuea13, rainsata, rainvala);
if (r13 < 28){ leds [p16_vline3[r13tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r13tail == 0) {r13 = 29; r13tail = 29; r13go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 14 (4)
if (r14go == 0){ r14tailL = random (2,12); rainGate14 = random (0,gointerval); r14go = 1; rainTime14c = 0;}
if (r14go == 1){ if (rainTime14c > rainGate14) {r14go = 2;}}
if (r14go == 2) {
if (rainTime14a > rainspd) { if (r14 > 0){ r14--; } rainTime14a = 0; }
if (rainTime14b > rainspd) { if (r14tail > 0) { if ( r14 < 29 - r14tailL) {r14tail--; }} rainTime14b = 0;}

leds [p16_vline4[r14]] = CHSV (rainhuea14, rainsata, rainvala);
if (r14 < 28){ leds [p16_vline4[r14tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r14tail == 0) {r14 = 29; r14tail = 29; r14go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 15 (5)
if (r15go == 0){ r15tailL = random (2,12); rainGate15 = random (0,gointerval); r15go = 1; rainTime15c = 0;}
if (r15go == 1){ if (rainTime15c > rainGate15) {r15go = 2;}}
if (r15go == 2) {
if (rainTime15a > rainspd) { if (r15 > 0){ r15--; } rainTime15a = 0; }
if (rainTime15b > rainspd) { if (r15tail > 0) { if ( r15 < 29 - r15tailL) {r15tail--; }} rainTime15b = 0;}

leds [p16_vline5[r15]] = CHSV (rainhuea15, rainsata, rainvala);
if (r15 < 28){ leds [p16_vline5[r15tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r15tail == 0) {r15 = 29; r15tail = 29; r15go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 16 (6)
if (r16go == 0){ r16tailL = random (2,12); rainGate16 = random (0,gointerval); r16go = 1; rainTime16c = 0;}
if (r16go == 1){ if (rainTime16c > rainGate16) {r16go = 2;}}
if (r16go == 2) {
if (rainTime16a > rainspd) { if (r16 > 0){ r16--; } rainTime16a = 0; }
if (rainTime16b > rainspd) { if (r16tail > 0) { if ( r16 < 29 - r16tailL) {r16tail--; }} rainTime16b = 0;}

leds [p16_vline6[r16]] = CHSV (rainhuea16, rainsata, rainvala);
if (r16 < 28){ leds [p16_vline6[r16tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r16tail == 0) {r16 = 29; r16tail = 29; r16go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 17 (7)
if (r17go == 0){ r17tailL = random (2,12); rainGate17 = random (0,gointerval); r17go = 1; rainTime17c = 0;}
if (r17go == 1){ if (rainTime17c > rainGate17) {r17go = 2;}}
if (r17go == 2) {
if (rainTime17a > rainspd) { if (r17 > 0){ r17--; } rainTime17a = 0; }
if (rainTime17b > rainspd) { if (r17tail > 0) { if ( r17 < 29 - r17tailL) {r17tail--; }} rainTime17b = 0;}

leds [p16_vline7[r17]] = CHSV (rainhuea17, rainsata, rainvala);
if (r17 < 28){ leds [p16_vline7[r17tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r17tail == 0) {r17 = 29; r17tail = 29; r17go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 18 (8)
if (r18go == 0){ r18tailL = random (2,12); rainGate18 = random (0,gointerval); r18go = 1; rainTime18c = 0;}
if (r18go == 1){ if (rainTime18c > rainGate18) {r18go = 2;}}
if (r18go == 2) {
if (rainTime18a > rainspd) { if (r18 > 0){ r18--; } rainTime18a = 0; }
if (rainTime18b > rainspd) { if (r18tail > 0) { if ( r18 < 29 - r18tailL) {r18tail--; }} rainTime18b = 0;}

leds [p16_vline8[r18]] = CHSV (rainhuea18, rainsata, rainvala);
if (r18 < 28){ leds [p16_vline8[r18tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r18tail == 0) {r18 = 29; r18tail = 29; r18go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 19 (9)
if (r19go == 0){ r19tailL = random (2,12); rainGate19 = random (0,gointerval); r19go = 1; rainTime19c = 0;}
if (r19go == 1){ if (rainTime19c > rainGate19) {r19go = 2;}}
if (r19go == 2) {
if (rainTime19a > rainspd) { if (r19 > 0){ r19--; } rainTime19a = 0; }
if (rainTime19b > rainspd) { if (r19tail > 0) { if ( r19 < 29 - r19tailL) {r19tail--; }} rainTime19b = 0;}

leds [p16_vline9[r19]] = CHSV (rainhuea19, rainsata, rainvala);
if (r19 < 28){ leds [p16_vline9[r19tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r19tail == 0) {r19 = 29; r19tail = 29; r19go = 0; }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////PANEL2
///////FROM THE LEFT VERTICAL LINE 20 (0)
if (r20go == 0){ r20tailL = random (2,12); rainGate20 = random (0,gointerval); r20go = 1; rainTime20c = 0;}
if (r20go == 1){ if (rainTime20c > rainGate20) {r20go = 2;}}
if (r20go == 2) {
if (rainTime20a > rainspd) { if (r20 > 0){ r20--; } rainTime20a = 0; }
if (rainTime20b > rainspd) { if (r20tail > 0) { if ( r20 < 29 - r20tailL) {r20tail--; }} rainTime20b = 0;}

leds [p27_vline0[r20]] = CHSV (rainhuea20, rainsata, rainvala);
if (r20 < 28){ leds [p27_vline0[r20tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r20tail == 0) {r20 = 29; r20tail = 29; r20go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 21 (1)
if (r21go == 0){ r21tailL = random (2,12); rainGate21 = random (0,gointerval); r21go = 1; rainTime21c = 0;}
if (r21go == 1){ if (rainTime21c > rainGate21) {r21go = 2;}}
if (r21go == 2) {
if (rainTime21a > rainspd) { if (r21 > 0){ r21--; } rainTime21a = 0; }
if (rainTime21b > rainspd) { if (r21tail > 0) { if ( r21 < 29 - r21tailL) {r21tail--; }} rainTime21b = 0;}

leds [p27_vline1[r21]] = CHSV (rainhuea21, rainsata, rainvala);
if (r21 < 28){ leds [p27_vline1[r21tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r21tail == 0) {r21 = 29; r21tail = 29; r21go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 22 (2)
if (r22go == 0){ r22tailL = random (2,12); rainGate22 = random (0,gointerval); r22go = 1; rainTime22c = 0;}
if (r22go == 1){ if (rainTime22c > rainGate22) {r22go = 2;}}
if (r22go == 2) {
if (rainTime22a > rainspd) { if (r22 > 0){ r22--; } rainTime22a = 0; }
if (rainTime22b > rainspd) { if (r22tail > 0) { if ( r22 < 29 - r22tailL) {r22tail--; }} rainTime22b = 0;}

leds [p27_vline2[r22]] = CHSV (rainhuea22, rainsata, rainvala);
if (r22 < 28){ leds [p27_vline2[r22tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r22tail == 0) {r22 = 29; r22tail = 29; r22go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 23 (3)
if (r23go == 0){ r23tailL = random (2,12); rainGate23 = random (0,gointerval); r23go = 1; rainTime23c = 0;}
if (r23go == 1){ if (rainTime23c > rainGate23) {r23go = 2;}}
if (r23go == 2) {
if (rainTime23a > rainspd) { if (r23 > 0){ r23--; } rainTime23a = 0; }
if (rainTime23b > rainspd) { if (r23tail > 0) { if ( r23 < 29 - r23tailL) {r23tail--; }} rainTime23b = 0;}

leds [p27_vline3[r23]] = CHSV (rainhuea23, rainsata, rainvala);
if (r23 < 28){ leds [p27_vline3[r23tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r23tail == 0) {r23 = 29; r23tail = 29; r23go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 24 (4)
if (r24go == 0){ r24tailL = random (2,12); rainGate24 = random (0,gointerval); r24go = 1; rainTime24c = 0;}
if (r24go == 1){ if (rainTime24c > rainGate24) {r24go = 2;}}
if (r24go == 2) {
if (rainTime24a > rainspd) { if (r24 > 0){ r24--; } rainTime24a = 0; }
if (rainTime24b > rainspd) { if (r24tail > 0) { if ( r24 < 29 - r24tailL) {r24tail--; }} rainTime24b = 0;}

leds [p27_vline4[r24]] = CHSV (rainhuea24, rainsata, rainvala);
if (r24 < 28){ leds [p27_vline4[r24tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r24tail == 0) {r24 = 29; r24tail = 29; r24go = 0; }


}
///////FROM THE LEFT VERTICAL LINE 25 (5)
if (r25go == 0){ r25tailL = random (2,12); rainGate25 = random (0,gointerval); r25go = 1; rainTime25c = 0;}
if (r25go == 1){ if (rainTime25c > rainGate25) {r25go = 2;}}
if (r25go == 2) {
if (rainTime25a > rainspd) { if (r25 > 0){ r25--; } rainTime25a = 0; }
if (rainTime25b > rainspd) { if (r25tail > 0) { if ( r25 < 29 - r25tailL) {r25tail--; }} rainTime25b = 0;}

leds [p27_vline5[r25]] = CHSV (rainhuea25, rainsata, rainvala);
if (r25 < 28){ leds [p27_vline5[r25tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r25tail == 0) {r25 = 29; r25tail = 29; r25go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 26 (6)
if (r26go == 0){ r26tailL = random (2,12); rainGate26 = random (0,gointerval); r26go = 1; rainTime26c = 0;}
if (r26go == 1){ if (rainTime26c > rainGate26) {r26go = 2;}}
if (r26go == 2) {
if (rainTime26a > rainspd) { if (r26 > 0){ r26--; } rainTime26a = 0; }
if (rainTime26b > rainspd) { if (r26tail > 0) { if ( r26 < 29 - r26tailL) {r26tail--; }} rainTime26b = 0;}

leds [p27_vline6[r26]] = CHSV (rainhuea26, rainsata, rainvala);
if (r26 < 28){ leds [p27_vline6[r26tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r26tail == 0) {r26 = 29; r26tail = 29; r26go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 27 (7)
if (r27go == 0){ r27tailL = random (2,12); rainGate27 = random (0,gointerval); r27go = 1; rainTime27c = 0;}
if (r27go == 1){ if (rainTime27c > rainGate27) {r27go = 2;}}
if (r27go == 2) {
if (rainTime27a > rainspd) { if (r27 > 0){ r27--; } rainTime27a = 0; }
if (rainTime27b > rainspd) { if (r27tail > 0) { if ( r27 < 29 - r27tailL) {r27tail--; }} rainTime27b = 0;}

leds [p27_vline7[r27]] = CHSV (rainhuea27, rainsata, rainvala);
if (r27 < 28){ leds [p27_vline7[r27tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r27tail == 0) {r27 = 29; r27tail = 29; r27go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 28 (8)
if (r28go == 0){ r28tailL = random (2,12); rainGate28 = random (0,gointerval); r28go = 1; rainTime28c = 0;}
if (r28go == 1){ if (rainTime28c > rainGate28) {r28go = 2;}}
if (r28go == 2) {
if (rainTime28a > rainspd) { if (r28 > 0){ r28--; } rainTime28a = 0; }
if (rainTime28b > rainspd) { if (r28tail > 0) { if ( r28 < 29 - r28tailL) {r28tail--; }} rainTime28b = 0;}

leds [p27_vline8[r28]] = CHSV (rainhuea28, rainsata, rainvala);
if (r28 < 28){ leds [p27_vline8[r28tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r28tail == 0) {r28 = 29; r28tail = 29; r28go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 29 (9)
if (r29go == 0){ r29tailL = random (2,12); rainGate29 = random (0,gointerval); r29go = 1; rainTime29c = 0;}
if (r29go == 1){ if (rainTime29c > rainGate29) {r29go = 2;}}
if (r29go == 2) {
if (rainTime29a > rainspd) { if (r29 > 0){ r29--; } rainTime29a = 0; }
if (rainTime29b > rainspd) { if (r29tail > 0) { if ( r29 < 29 - r29tailL) {r29tail--; }} rainTime29b = 0;}

leds [p27_vline9[r29]] = CHSV (rainhuea29, rainsata, rainvala);
if (r29 < 28){ leds [p27_vline9[r29tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r29tail == 0) {r29 = 29; r29tail = 29; r29go = 0; }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////PANEL 3
///////FROM THE LEFT VERTICAL LINE 30 (0)
if (r30go == 0){ r30tailL = random (2,12); rainGate30 = random (0,gointerval); r30go = 1; rainTime30c = 0;}
if (r30go == 1){ if (rainTime30c > rainGate30) {r30go = 2;}}
if (r30go == 2) {
if (rainTime30a > rainspd) { if (r30 > 0){ r30--; } rainTime30a = 0; }
if (rainTime30b > rainspd) { if (r30tail > 0) { if ( r30 < 29 - r30tailL) {r30tail--; }} rainTime30b = 0;}

leds [p38_vline0[r30]] = CHSV (rainhuea30, rainsata, rainvala);
if (r30 < 28){ leds [p38_vline0[r30tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r30tail == 0) {r30 = 29; r30tail = 29; r30go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 31 (1)
if (r31go == 0){ r31tailL = random (2,12); rainGate31 = random (0,gointerval); r31go = 1; rainTime31c = 0;}
if (r31go == 1){ if (rainTime31c > rainGate31) {r31go = 2;}}
if (r31go == 2) {
if (rainTime31a > rainspd) { if (r31 > 0){ r31--; } rainTime31a = 0; }
if (rainTime31b > rainspd) { if (r31tail > 0) { if ( r31 < 29 - r31tailL) {r31tail--; }} rainTime31b = 0;}

leds [p38_vline1[r31]] = CHSV (rainhuea31, rainsata, rainvala);
if (r31 < 28){ leds [p38_vline1[r31tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r31tail == 0) {r31 = 29; r31tail = 29; r31go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 32 (2)
if (r32go == 0){ r32tailL = random (2,12); rainGate32 = random (0,gointerval); r32go = 1; rainTime32c = 0;}
if (r32go == 1){ if (rainTime32c > rainGate32) {r32go = 2;}}
if (r32go == 2) {
if (rainTime32a > rainspd) { if (r32 > 0){ r32--; } rainTime32a = 0; }
if (rainTime32b > rainspd) { if (r32tail > 0) { if ( r32 < 29 - r32tailL) {r32tail--; }} rainTime32b = 0;}

leds [p38_vline2[r32]] = CHSV (rainhuea32, rainsata, rainvala);
if (r32 < 28){ leds [p38_vline2[r32tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r32tail == 0) {r32 = 29; r32tail = 29; r32go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 33 (3)
if (r33go == 0){ r33tailL = random (2,12); rainGate33 = random (0,gointerval); r33go = 1; rainTime33c = 0;}
if (r33go == 1){ if (rainTime33c > rainGate33) {r33go = 2;}}
if (r33go == 2) {
if (rainTime33a > rainspd) { if (r33 > 0){ r33--; } rainTime33a = 0; }
if (rainTime33b > rainspd) { if (r33tail > 0) { if ( r33 < 29 - r33tailL) {r33tail--; }} rainTime33b = 0;}

leds [p38_vline3[r33]] = CHSV (rainhuea33, rainsata, rainvala);
if (r33 < 28){ leds [p38_vline3[r33tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r33tail == 0) {r33 = 29; r33tail = 29; r33go = 0; }
}


///////FROM THE LEFT VERTICAL LINE 34 (4)
if (r34go == 0){ r34tailL = random (2,12); rainGate34 = random (0,gointerval); r34go = 1; rainTime34c = 0;}
if (r34go == 1){ if (rainTime34c > rainGate34) {r34go = 2;}}
if (r34go == 2) {
if (rainTime34a > rainspd) { if (r34 > 0){ r34--; } rainTime34a = 0; }
if (rainTime34b > rainspd) { if (r34tail > 0) { if ( r34 < 29 - r34tailL) {r34tail--; }} rainTime34b = 0;}

leds [p38_vline4[r34]] = CHSV (rainhuea34, rainsata, rainvala);
if (r34 < 28){ leds [p38_vline4[r34tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r34tail == 0) {r34 = 29; r34tail = 29; r34go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 35 (5)
if (r35go == 0){ r35tailL = random (2,12); rainGate35 = random (0,gointerval); r35go = 1; rainTime35c = 0;}
if (r35go == 1){ if (rainTime35c > rainGate35) {r35go = 2;}}
if (r35go == 2) {
if (rainTime35a > rainspd) { if (r35 > 0){ r35--; } rainTime35a = 0; }
if (rainTime35b > rainspd) { if (r35tail > 0) { if ( r35 < 29 - r35tailL) {r35tail--; }} rainTime35b = 0;}

leds [p38_vline5[r35]] = CHSV (rainhuea35, rainsata, rainvala);
if (r35 < 28){ leds [p38_vline5[r35tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r35tail == 0) {r35 = 29; r35tail = 29; r35go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 36 (6)
if (r36go == 0){ r36tailL = random (2,12); rainGate36 = random (0,gointerval); r36go = 1; rainTime36c = 0;}
if (r36go == 1){ if (rainTime36c > rainGate36) {r36go = 2;}}
if (r36go == 2) {
if (rainTime36a > rainspd) { if (r36 > 0){ r36--; } rainTime36a = 0; }
if (rainTime36b > rainspd) { if (r36tail > 0) { if ( r36 < 29 - r36tailL) {r36tail--; }} rainTime36b = 0;}

leds [p38_vline6[r36]] = CHSV (rainhuea36, rainsata, rainvala);
if (r36 < 28){ leds [p38_vline6[r36tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r36tail == 0) {r36 = 29; r36tail = 29; r36go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 37 (7)
if (r37go == 0){ r37tailL = random (2,12); rainGate37 = random (0,gointerval); r37go = 1; rainTime37c = 0;}
if (r37go == 1){ if (rainTime37c > rainGate37) {r37go = 2;}}
if (r37go == 2) {
if (rainTime37a > rainspd) { if (r37 > 0){ r37--; } rainTime37a = 0; }
if (rainTime37b > rainspd) { if (r37tail > 0) { if ( r37 < 29 - r37tailL) {r37tail--; }} rainTime37b = 0;}

leds [p38_vline7[r37]] = CHSV (rainhuea37, rainsata, rainvala);
if (r37 < 28){ leds [p38_vline7[r37tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r37tail == 0) {r37 = 29; r37tail = 29; r37go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 38 (8)
if (r38go == 0){ r38tailL = random (2,12); rainGate38 = random (0,gointerval); r38go = 1; rainTime38c = 0;}
if (r38go == 1){ if (rainTime38c > rainGate38) {r38go = 2;}}
if (r38go == 2) {
if (rainTime38a > rainspd) { if (r38 > 0){ r38--; } rainTime38a = 0; }
if (rainTime38b > rainspd) { if (r38tail > 0) { if ( r38 < 29 - r38tailL) {r38tail--; }} rainTime38b = 0;}

leds [p38_vline8[r38]] = CHSV (rainhuea38, rainsata, rainvala);
if (r38 < 28){ leds [p38_vline8[r38tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r38tail == 0) {r38 = 29; r38tail = 29; r38go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 39 (9)
if (r39go == 0){ r39tailL = random (2,12); rainGate39 = random (0,gointerval); r39go = 1; rainTime39c = 0;}
if (r39go == 1){ if (rainTime39c > rainGate39) {r39go = 2;}}
if (r39go == 2) {
if (rainTime39a > rainspd) { if (r39 > 0){ r39--; } rainTime39a = 0; }
if (rainTime39b > rainspd) { if (r39tail > 0) { if ( r39 < 29 - r39tailL) {r39tail--; }} rainTime39b = 0;}

leds [p38_vline9[r39]] = CHSV (rainhuea39, rainsata, rainvala);
if (r39 < 28){ leds [p38_vline9[r39tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r39tail == 0) {r39 = 29; r39tail = 29; r39go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 40 (0)
if (r40go == 0){ r40tailL = random (2,12); rainGate40 = random (0,gointerval); r40go = 1; rainTime40c = 0;}
if (r40go == 1){ if (rainTime40c > rainGate40) {r40go = 2;}}
if (r40go == 2) {
if (rainTime40a > rainspd) { if (r40 > 0){ r40--; } rainTime40a = 0; }
if (rainTime40b > rainspd) { if (r40tail > 0) { if ( r40 < 29 - r40tailL) {r40tail--; }} rainTime40b = 0;}

leds [p49_vline0[r40]] = CHSV (rainhuea40, rainsata, rainvala);
if (r40 < 28){ leds [p49_vline0[r40tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r40tail == 0) {r40 = 29; r40tail = 29; r40go = 0; }
}

 
///////FROM THE LEFT VERTICAL LINE 41 (1)
if (r41go == 0){ r41tailL = random (2,12); rainGate41 = random (0,gointerval); r41go = 1; rainTime41c = 0;}
if (r41go == 1){ if (rainTime41c > rainGate41) {r41go = 2;}}
if (r41go == 2) {
if (rainTime41a > rainspd) { if (r41 > 0){ r41--; } rainTime41a = 0; }
if (rainTime41b > rainspd) { if (r41tail > 0) { if ( r41 < 29 - r41tailL) {r41tail--; }} rainTime41b = 0;}

leds [p49_vline1[r41]] = CHSV (rainhuea41, rainsata, rainvala);
if (r41 < 28){ leds [p49_vline1[r41tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r41tail == 0) {r41 = 29; r41tail = 29; r41go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 42 (2)
if (r42go == 0){ r42tailL = random (2,12); rainGate42 = random (0,gointerval); r42go = 1; rainTime42c = 0;}
if (r42go == 1){ if (rainTime42c > rainGate42) {r42go = 2;}}
if (r42go == 2) {
if (rainTime42a > rainspd) { if (r42 > 0){ r42--; } rainTime42a = 0; }
if (rainTime42b > rainspd) { if (r42tail > 0) { if ( r42 < 29 - r42tailL) {r42tail--; }} rainTime42b = 0;}

leds [p49_vline2[r42]] = CHSV (rainhuea42, rainsata, rainvala);
if (r42 < 28){ leds [p49_vline2[r42tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r42tail == 0) {r42 = 29; r42tail = 29; r42go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 43 (3)
if (r43go == 0){ r43tailL = random (2,12); rainGate43 = random (0,gointerval); r43go = 1; rainTime43c = 0;}
if (r43go == 1){ if (rainTime43c > rainGate43) {r43go = 2;}}
if (r43go == 2) {
if (rainTime43a > rainspd) { if (r43 > 0){ r43--; } rainTime43a = 0; }
if (rainTime43b > rainspd) { if (r43tail > 0) { if ( r43 < 29 - r43tailL) {r43tail--; }} rainTime43b = 0;}

leds [p49_vline3[r43]] = CHSV (rainhuea43, rainsata, rainvala);
if (r43 < 28){ leds [p49_vline3[r43tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r43tail == 0) {r43 = 29; r43tail = 29; r43go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 44 (4)
if (r44go == 0){ r44tailL = random (2,12); rainGate44 = random (0,gointerval); r44go = 1; rainTime44c = 0;}
if (r44go == 1){ if (rainTime44c > rainGate44) {r44go = 2;}}
if (r44go == 2) {
if (rainTime44a > rainspd) { if (r44 > 0){ r44--; } rainTime44a = 0; }
if (rainTime44b > rainspd) { if (r44tail > 0) { if ( r44 < 29 - r44tailL) {r44tail--; }} rainTime44b = 0;}

leds [p49_vline4[r44]] = CHSV (rainhuea44, rainsata, rainvala);
if (r44 < 28){ leds [p49_vline4[r44tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r44tail == 0) {r44 = 29; r44tail = 29; r44go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 45 (5)
if (r45go == 0){ r45tailL = random (2,12); rainGate45 = random (0,gointerval); r45go = 1; rainTime45c = 0;}
if (r45go == 1){ if (rainTime45c > rainGate45) {r45go = 2;}}
if (r45go == 2) {
if (rainTime45a > rainspd) { if (r45 > 0){ r45--; } rainTime45a = 0; }
if (rainTime45b > rainspd) { if (r45tail > 0) { if ( r45 < 29 - r45tailL) {r45tail--; }} rainTime45b = 0;}

leds [p49_vline5[r45]] = CHSV (rainhuea45, rainsata, rainvala);
if (r45 < 28){ leds [p49_vline5[r45tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r45tail == 0) {r45 = 29; r45tail = 29; r45go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 46 (6)
if (r46go == 0){ r46tailL = random (2,12); rainGate46 = random (0,gointerval); r46go = 1; rainTime46c = 0;}
if (r46go == 1){ if (rainTime46c > rainGate46) {r46go = 2;}}
if (r46go == 2) {
if (rainTime46a > rainspd) { if (r46 > 0){ r46--; } rainTime46a = 0; }
if (rainTime46b > rainspd) { if (r46tail > 0) { if ( r46 < 29 - r46tailL) {r46tail--; }} rainTime46b = 0;}

leds [p49_vline6[r46]] = CHSV (rainhuea46, rainsata, rainvala);
if (r46 < 28){ leds [p49_vline6[r46tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r46tail == 0) {r46 = 29; r46tail = 29; r46go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 47 (7)
if (r47go == 0){ r47tailL = random (2,12); rainGate47 = random (0,gointerval); r47go = 1; rainTime47c = 0;}
if (r47go == 1){ if (rainTime47c > rainGate47) {r47go = 2;}}
if (r47go == 2) {
if (rainTime47a > rainspd) { if (r47 > 0){ r47--; } rainTime47a = 0; }
if (rainTime47b > rainspd) { if (r47tail > 0) { if ( r47 < 29 - r47tailL) {r47tail--; }} rainTime47b = 0;}

leds [p49_vline7[r47]] = CHSV (rainhuea47, rainsata, rainvala);
if (r47 < 28){ leds [p49_vline7[r47tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r47tail == 0) {r47 = 29; r47tail = 29; r47go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 48 (8)
if (r48go == 0){ r48tailL = random (2,12); rainGate48 = random (0,gointerval); r48go = 1; rainTime48c = 0;}
if (r48go == 1){ if (rainTime48c > rainGate48) {r48go = 2;}}
if (r48go == 2) {
if (rainTime48a > rainspd) { if (r48 > 0){ r48--; } rainTime48a = 0; }
if (rainTime48b > rainspd) { if (r48tail > 0) { if ( r48 < 29 - r48tailL) {r48tail--; }} rainTime48b = 0;}

leds [p49_vline8[r48]] = CHSV (rainhuea48, rainsata, rainvala);
if (r48 < 28){ leds [p49_vline8[r48tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r48tail == 0) {r48 = 29; r48tail = 29; r48go = 0; }
}

///////FROM THE LEFT VERTICAL LINE 49 (9)
if (r49go == 0){ r49tailL = random (2,12); rainGate49 = random (0,gointerval); r49go = 1; rainTime49c = 0;}
if (r49go == 1){ if (rainTime49c > rainGate49) {r49go = 2;}}
if (r49go == 2) {
if (rainTime49a > rainspd) { if (r49 > 0){ r49--; } rainTime49a = 0; }
if (rainTime49b > rainspd) { if (r49tail > 0) { if ( r49 < 29 - r49tailL) {r49tail--; }} rainTime49b = 0;}

leds [p49_vline9[r49]] = CHSV (rainhuea49, rainsata, rainvala);
if (r49 < 28){ leds [p49_vline9[r49tail]] = CHSV (rainhueb, rainsatb, rainvalb);}

if (r49tail == 0) {r49 = 29; r49tail = 29; r49go = 0; }
}

if (rainpallet == 0){

//colour change
if (rainhuechange > 100) {
//panel 0
if (rainhuemda0 == 0){ if (rainhuea0 >104) {rainhuea0--; } if (rainhuea0 == 104){rainhuemda0 = 1;}}
if (rainhuemda0 == 1){ if (rainhuea0 <160) {rainhuea0++; } if (rainhuea0 == 160){rainhuemda0 = 0;}}

if (rainhuemda1 == 0){ if (rainhuea1 >104) {rainhuea1--; } if (rainhuea1 == 104){rainhuemda1 = 1;}}
if (rainhuemda1 == 1){ if (rainhuea1 <160) {rainhuea1++; } if (rainhuea1 == 160){rainhuemda1 = 0;}}

if (rainhuemda2 == 0){ if (rainhuea2 >104) {rainhuea2--; } if (rainhuea2 == 104){rainhuemda2 = 1;}}
if (rainhuemda2 == 1){ if (rainhuea2 <160) {rainhuea2++; } if (rainhuea2 == 160){rainhuemda2 = 0;}}

if (rainhuemda3 == 0){ if (rainhuea3 >104) {rainhuea3--; } if (rainhuea3 == 104){rainhuemda3 = 1;}}
if (rainhuemda3 == 1){ if (rainhuea3 <160) {rainhuea3++; } if (rainhuea3 == 160){rainhuemda3 = 0;}}

if (rainhuemda4 == 0){ if (rainhuea4 >104) {rainhuea4--; } if (rainhuea4 == 104){rainhuemda4 = 1;}}
if (rainhuemda4 == 1){ if (rainhuea4 <160) {rainhuea4++; } if (rainhuea4 == 160){rainhuemda4 = 0;}}

if (rainhuemda5 == 0){ if (rainhuea5 >104) {rainhuea5--; } if (rainhuea5 == 104){rainhuemda5 = 1;}}
if (rainhuemda5 == 1){ if (rainhuea5 <160) {rainhuea5++; } if (rainhuea5 == 160){rainhuemda5 = 0;}}

if (rainhuemda6 == 0){ if (rainhuea6 >104) {rainhuea6--; } if (rainhuea6 == 104){rainhuemda6 = 1;}}
if (rainhuemda6 == 1){ if (rainhuea6 <160) {rainhuea6++; } if (rainhuea6 == 160){rainhuemda6 = 0;}}

if (rainhuemda7 == 0){ if (rainhuea7 >104) {rainhuea7--; } if (rainhuea7 == 104){rainhuemda7 = 1;}}
if (rainhuemda7 == 1){ if (rainhuea7 <160) {rainhuea7++; } if (rainhuea7 == 160){rainhuemda7 = 0;}}

if (rainhuemda8 == 0){ if (rainhuea8 >104) {rainhuea8--; } if (rainhuea8 == 104){rainhuemda8 = 1;}}
if (rainhuemda8 == 1){ if (rainhuea8 <160) {rainhuea8++; } if (rainhuea8 == 160){rainhuemda8 = 0;}}

if (rainhuemda9 == 0){ if (rainhuea9 >104) {rainhuea9--; } if (rainhuea9 == 104){rainhuemda9 = 1;}}
if (rainhuemda9 == 1){ if (rainhuea9 <160) {rainhuea9++; } if (rainhuea9 == 160){rainhuemda9 = 0;}}

///panel 1

if (rainhuemda10 == 0){ if (rainhuea10 >104) {rainhuea10--; } if (rainhuea10 == 104){rainhuemda10 = 1;}}
if (rainhuemda10 == 1){ if (rainhuea10 <160) {rainhuea10++; } if (rainhuea10 == 160){rainhuemda10 = 0;}}

if (rainhuemda11 == 0){ if (rainhuea11 >104) {rainhuea11--; } if (rainhuea11 == 104){rainhuemda11 = 1;}}
if (rainhuemda11 == 1){ if (rainhuea11 <160) {rainhuea11++; } if (rainhuea11 == 160){rainhuemda11 = 0;}}

if (rainhuemda12 == 0){ if (rainhuea12 >104) {rainhuea12--; } if (rainhuea12 == 104){rainhuemda12 = 1;}}
if (rainhuemda12 == 1){ if (rainhuea12 <160) {rainhuea12++; } if (rainhuea12 == 160){rainhuemda12 = 0;}}

if (rainhuemda13 == 0){ if (rainhuea13 >104) {rainhuea13--; } if (rainhuea13 == 104){rainhuemda13 = 1;}}
if (rainhuemda13 == 1){ if (rainhuea13 <160) {rainhuea13++; } if (rainhuea13 == 160){rainhuemda13 = 0;}}

if (rainhuemda14 == 0){ if (rainhuea14 >104) {rainhuea14--; } if (rainhuea14 == 104){rainhuemda14 = 1;}}
if (rainhuemda14 == 1){ if (rainhuea14 <160) {rainhuea14++; } if (rainhuea14 == 160){rainhuemda14 = 0;}}

if (rainhuemda15 == 0){ if (rainhuea15 >104) {rainhuea15--; } if (rainhuea15 == 104){rainhuemda15 = 1;}}
if (rainhuemda15 == 1){ if (rainhuea15 <160) {rainhuea15++; } if (rainhuea15 == 160){rainhuemda15 = 0;}}

if (rainhuemda16 == 0){ if (rainhuea16 >104) {rainhuea16--; } if (rainhuea16 == 104){rainhuemda16 = 1;}}
if (rainhuemda16 == 1){ if (rainhuea16 <160) {rainhuea16++; } if (rainhuea16 == 160){rainhuemda16 = 0;}}

if (rainhuemda17 == 0){ if (rainhuea17 >104) {rainhuea17--; } if (rainhuea17 == 104){rainhuemda17 = 1;}}
if (rainhuemda17 == 1){ if (rainhuea17 <160) {rainhuea17++; } if (rainhuea17 == 160){rainhuemda17 = 0;}}

if (rainhuemda18 == 0){ if (rainhuea18 >104) {rainhuea18--; } if (rainhuea18 == 104){rainhuemda18 = 1;}}
if (rainhuemda18 == 1){ if (rainhuea18 <160) {rainhuea18++; } if (rainhuea18 == 160){rainhuemda18 = 0;}}

if (rainhuemda19 == 0){ if (rainhuea19 >104) {rainhuea19--; } if (rainhuea19 == 104){rainhuemda19 = 1;}}
if (rainhuemda19 == 1){ if (rainhuea19 <160) {rainhuea19++; } if (rainhuea19 == 160){rainhuemda19 = 0;}}

//panel 2

if (rainhuemda20 == 0){ if (rainhuea20 >104) {rainhuea20--; } if (rainhuea20 == 104){rainhuemda20 = 1;}}
if (rainhuemda20 == 1){ if (rainhuea20 <160) {rainhuea20++; } if (rainhuea20 == 160){rainhuemda20 = 0;}}

if (rainhuemda21 == 0){ if (rainhuea21 >104) {rainhuea21--; } if (rainhuea21 == 104){rainhuemda21 = 1;}}
if (rainhuemda21 == 1){ if (rainhuea21 <160) {rainhuea21++; } if (rainhuea21 == 160){rainhuemda21 = 0;}}

if (rainhuemda22 == 0){ if (rainhuea22 >104) {rainhuea22--; } if (rainhuea22 == 104){rainhuemda22 = 1;}}
if (rainhuemda22 == 1){ if (rainhuea22 <160) {rainhuea22++; } if (rainhuea22 == 160){rainhuemda22 = 0;}}

if (rainhuemda23 == 0){ if (rainhuea23 >104) {rainhuea23--; } if (rainhuea23 == 104){rainhuemda23 = 1;}}
if (rainhuemda23 == 1){ if (rainhuea23 <160) {rainhuea23++; } if (rainhuea23 == 160){rainhuemda23 = 0;}}

if (rainhuemda24 == 0){ if (rainhuea24 >104) {rainhuea24--; } if (rainhuea24 == 104){rainhuemda24 = 1;}}
if (rainhuemda24 == 1){ if (rainhuea24 <160) {rainhuea24++; } if (rainhuea24 == 160){rainhuemda24 = 0;}}

if (rainhuemda25 == 0){ if (rainhuea25 >104) {rainhuea25--; } if (rainhuea25 == 104){rainhuemda25 = 1;}}
if (rainhuemda25 == 1){ if (rainhuea25 <160) {rainhuea25++; } if (rainhuea25 == 160){rainhuemda25 = 0;}}

if (rainhuemda26 == 0){ if (rainhuea26 >104) {rainhuea26--; } if (rainhuea26 == 104){rainhuemda26 = 1;}}
if (rainhuemda26 == 1){ if (rainhuea26 <160) {rainhuea26++; } if (rainhuea26 == 160){rainhuemda26 = 0;}}

if (rainhuemda27 == 0){ if (rainhuea27 >104) {rainhuea27--; } if (rainhuea27 == 104){rainhuemda27 = 1;}}
if (rainhuemda27 == 1){ if (rainhuea27 <160) {rainhuea27++; } if (rainhuea27 == 160){rainhuemda27 = 0;}}

if (rainhuemda28 == 0){ if (rainhuea28 >104) {rainhuea28--; } if (rainhuea28 == 104){rainhuemda28 = 1;}}
if (rainhuemda28 == 1){ if (rainhuea28 <160) {rainhuea28++; } if (rainhuea28 == 160){rainhuemda28 = 0;}}

if (rainhuemda29 == 0){ if (rainhuea29 >104) {rainhuea29--; } if (rainhuea29 == 104){rainhuemda29 = 1;}}
if (rainhuemda29 == 1){ if (rainhuea29 <160) {rainhuea29++; } if (rainhuea29 == 160){rainhuemda29 = 0;}}

//panel 3

if (rainhuemda30 == 0){ if (rainhuea30 >104) {rainhuea30--; } if (rainhuea30 == 104){rainhuemda30 = 1;}}
if (rainhuemda30 == 1){ if (rainhuea30 <160) {rainhuea30++; } if (rainhuea30 == 160){rainhuemda30 = 0;}}

if (rainhuemda31 == 0){ if (rainhuea31 >104) {rainhuea31--; } if (rainhuea31 == 104){rainhuemda31 = 1;}}
if (rainhuemda31 == 1){ if (rainhuea31 <160) {rainhuea31++; } if (rainhuea31 == 160){rainhuemda31 = 0;}}

if (rainhuemda32 == 0){ if (rainhuea32 >104) {rainhuea32--; } if (rainhuea32 == 104){rainhuemda32 = 1;}}
if (rainhuemda32 == 1){ if (rainhuea32 <160) {rainhuea32++; } if (rainhuea32 == 160){rainhuemda32 = 0;}}

if (rainhuemda33 == 0){ if (rainhuea33 >104) {rainhuea33--; } if (rainhuea33 == 104){rainhuemda33 = 1;}}
if (rainhuemda33 == 1){ if (rainhuea33 <160) {rainhuea33++; } if (rainhuea33 == 160){rainhuemda33 = 0;}}

if (rainhuemda34 == 0){ if (rainhuea34 >104) {rainhuea34--; } if (rainhuea34 == 104){rainhuemda34 = 1;}}
if (rainhuemda34 == 1){ if (rainhuea34 <160) {rainhuea34++; } if (rainhuea34 == 160){rainhuemda34 = 0;}}

if (rainhuemda35 == 0){ if (rainhuea35 >104) {rainhuea35--; } if (rainhuea35 == 104){rainhuemda35 = 1;}}
if (rainhuemda35 == 1){ if (rainhuea35 <160) {rainhuea35++; } if (rainhuea35 == 160){rainhuemda35 = 0;}}

if (rainhuemda36 == 0){ if (rainhuea36 >104) {rainhuea36--; } if (rainhuea36 == 104){rainhuemda36 = 1;}}
if (rainhuemda36 == 1){ if (rainhuea36 <160) {rainhuea36++; } if (rainhuea36 == 160){rainhuemda36 = 0;}}

if (rainhuemda37 == 0){ if (rainhuea37 >104) {rainhuea37--; } if (rainhuea37 == 104){rainhuemda37 = 1;}}
if (rainhuemda37 == 1){ if (rainhuea37 <160) {rainhuea37++; } if (rainhuea37 == 160){rainhuemda37 = 0;}}

if (rainhuemda38 == 0){ if (rainhuea38 >104) {rainhuea38--; } if (rainhuea38 == 104){rainhuemda38 = 1;}}
if (rainhuemda38 == 1){ if (rainhuea38 <160) {rainhuea38++; } if (rainhuea38 == 160){rainhuemda38 = 0;}}

if (rainhuemda39 == 0){ if (rainhuea39 >104) {rainhuea39--; } if (rainhuea39 == 104){rainhuemda39 = 1;}}
if (rainhuemda39 == 1){ if (rainhuea39 <160) {rainhuea39++; } if (rainhuea39 == 160){rainhuemda39 = 0;}}

////panel 4

if (rainhuemda40 == 0){ if (rainhuea40 >104) {rainhuea40--; } if (rainhuea40 == 104){rainhuemda40 = 1;}}
if (rainhuemda40 == 1){ if (rainhuea40 <160) {rainhuea40++; } if (rainhuea40 == 160){rainhuemda40 = 0;}}

if (rainhuemda41 == 0){ if (rainhuea41 >104) {rainhuea41--; } if (rainhuea41 == 104){rainhuemda41 = 1;}}
if (rainhuemda41 == 1){ if (rainhuea41 <160) {rainhuea41++; } if (rainhuea41 == 160){rainhuemda41 = 0;}}

if (rainhuemda42 == 0){ if (rainhuea42 >104) {rainhuea42--; } if (rainhuea42 == 104){rainhuemda42 = 1;}}
if (rainhuemda42 == 1){ if (rainhuea42 <160) {rainhuea42++; } if (rainhuea42 == 160){rainhuemda42 = 0;}}

if (rainhuemda43 == 0){ if (rainhuea43 >104) {rainhuea43--; } if (rainhuea43 == 104){rainhuemda43 = 1;}}
if (rainhuemda43 == 1){ if (rainhuea43 <160) {rainhuea43++; } if (rainhuea43 == 160){rainhuemda43 = 0;}}

if (rainhuemda44 == 0){ if (rainhuea44 >104) {rainhuea44--; } if (rainhuea44 == 104){rainhuemda44 = 1;}}
if (rainhuemda44 == 1){ if (rainhuea44 <160) {rainhuea44++; } if (rainhuea44 == 160){rainhuemda44 = 0;}}

if (rainhuemda45 == 0){ if (rainhuea45 >104) {rainhuea45--; } if (rainhuea45 == 104){rainhuemda45 = 1;}}
if (rainhuemda45 == 1){ if (rainhuea45 <160) {rainhuea45++; } if (rainhuea45 == 160){rainhuemda45 = 0;}}

if (rainhuemda46 == 0){ if (rainhuea46 >104) {rainhuea46--; } if (rainhuea46 == 104){rainhuemda46 = 1;}}
if (rainhuemda46 == 1){ if (rainhuea46 <160) {rainhuea46++; } if (rainhuea46 == 160){rainhuemda46 = 0;}}

if (rainhuemda47 == 0){ if (rainhuea47 >104) {rainhuea47--; } if (rainhuea47 == 104){rainhuemda47 = 1;}}
if (rainhuemda47 == 1){ if (rainhuea47 <160) {rainhuea47++; } if (rainhuea47 == 160){rainhuemda47 = 0;}}

if (rainhuemda48 == 0){ if (rainhuea48 >104) {rainhuea48--; } if (rainhuea48 == 104){rainhuemda48 = 1;}}
if (rainhuemda48 == 1){ if (rainhuea48 <160) {rainhuea48++; } if (rainhuea48 == 160){rainhuemda48 = 0;}}

if (rainhuemda49 == 0){ if (rainhuea49 >104) {rainhuea49--; } if (rainhuea49 == 104){rainhuemda49 = 1;}}
if (rainhuemda49 == 1){ if (rainhuea49 <160) {rainhuea49++; } if (rainhuea49 == 160){rainhuemda49 = 0;}}


rainhuechange = 0;}

}

if (rainpallet == 1){

//colour change
if (rainhuechange > 100) {
//panel 0
if (rainhuemda0 == 0){ if (rainhuea0 >rainMin) {rainhuea0--; } if (rainhuea0 == rainMin){rainhuemda0 = 1;}}
if (rainhuemda0 == 1){ if (rainhuea0 <rainMax) {rainhuea0++; } if (rainhuea0 == rainMax){rainhuemda0 = 0;}}

if (rainhuemda1 == 0){ if (rainhuea1 >rainMin) {rainhuea1--; } if (rainhuea1 == rainMin){rainhuemda1 = 1;}}
if (rainhuemda1 == 1){ if (rainhuea1 <rainMax) {rainhuea1++; } if (rainhuea1 == rainMax){rainhuemda1 = 0;}}

if (rainhuemda2 == 0){ if (rainhuea2 >rainMin) {rainhuea2--; } if (rainhuea2 == rainMin){rainhuemda2 = 1;}}
if (rainhuemda2 == 1){ if (rainhuea2 <rainMax) {rainhuea2++; } if (rainhuea2 == rainMax){rainhuemda2 = 0;}}

if (rainhuemda3 == 0){ if (rainhuea3 >rainMin) {rainhuea3--; } if (rainhuea3 == rainMin){rainhuemda3 = 1;}}
if (rainhuemda3 == 1){ if (rainhuea3 <rainMax) {rainhuea3++; } if (rainhuea3 == rainMax){rainhuemda3 = 0;}}

if (rainhuemda4 == 0){ if (rainhuea4 >rainMin) {rainhuea4--; } if (rainhuea4 == rainMin){rainhuemda4 = 1;}}
if (rainhuemda4 == 1){ if (rainhuea4 <rainMax) {rainhuea4++; } if (rainhuea4 == rainMax){rainhuemda4 = 0;}}

if (rainhuemda5 == 0){ if (rainhuea5 >rainMin) {rainhuea5--; } if (rainhuea5 == rainMin){rainhuemda5 = 1;}}
if (rainhuemda5 == 1){ if (rainhuea5 <rainMax) {rainhuea5++; } if (rainhuea5 == rainMax){rainhuemda5 = 0;}}

if (rainhuemda6 == 0){ if (rainhuea6 >rainMin) {rainhuea6--; } if (rainhuea6 == rainMin){rainhuemda6 = 1;}}
if (rainhuemda6 == 1){ if (rainhuea6 <rainMax) {rainhuea6++; } if (rainhuea6 == rainMax){rainhuemda6 = 0;}}

if (rainhuemda7 == 0){ if (rainhuea7 >rainMin) {rainhuea7--; } if (rainhuea7 == rainMin){rainhuemda7 = 1;}}
if (rainhuemda7 == 1){ if (rainhuea7 <rainMax) {rainhuea7++; } if (rainhuea7 == rainMax){rainhuemda7 = 0;}}

if (rainhuemda8 == 0){ if (rainhuea8 >rainMin) {rainhuea8--; } if (rainhuea8 == rainMin){rainhuemda8 = 1;}}
if (rainhuemda8 == 1){ if (rainhuea8 <rainMax) {rainhuea8++; } if (rainhuea8 == rainMax){rainhuemda8 = 0;}}

if (rainhuemda9 == 0){ if (rainhuea9 >rainMin) {rainhuea9--; } if (rainhuea9 == rainMin){rainhuemda9 = 1;}}
if (rainhuemda9 == 1){ if (rainhuea9 <rainMax) {rainhuea9++; } if (rainhuea9 == rainMax){rainhuemda9 = 0;}}

///panel 1

if (rainhuemda10 == 0){ if (rainhuea10 >rainMin) {rainhuea10--; } if (rainhuea10 == rainMin){rainhuemda10 = 1;}}
if (rainhuemda10 == 1){ if (rainhuea10 <rainMax) {rainhuea10++; } if (rainhuea10 == rainMax){rainhuemda10 = 0;}}

if (rainhuemda11 == 0){ if (rainhuea11 >rainMin) {rainhuea11--; } if (rainhuea11 == rainMin){rainhuemda11 = 1;}}
if (rainhuemda11 == 1){ if (rainhuea11 <rainMax) {rainhuea11++; } if (rainhuea11 == rainMax){rainhuemda11 = 0;}}

if (rainhuemda12 == 0){ if (rainhuea12 >rainMin) {rainhuea12--; } if (rainhuea12 == rainMin){rainhuemda12 = 1;}}
if (rainhuemda12 == 1){ if (rainhuea12 <rainMax) {rainhuea12++; } if (rainhuea12 == rainMax){rainhuemda12 = 0;}}

if (rainhuemda13 == 0){ if (rainhuea13 >rainMin) {rainhuea13--; } if (rainhuea13 == rainMin){rainhuemda13 = 1;}}
if (rainhuemda13 == 1){ if (rainhuea13 <rainMax) {rainhuea13++; } if (rainhuea13 == rainMax){rainhuemda13 = 0;}}

if (rainhuemda14 == 0){ if (rainhuea14 >rainMin) {rainhuea14--; } if (rainhuea14 == rainMin){rainhuemda14 = 1;}}
if (rainhuemda14 == 1){ if (rainhuea14 <rainMax) {rainhuea14++; } if (rainhuea14 == rainMax){rainhuemda14 = 0;}}

if (rainhuemda15 == 0){ if (rainhuea15 >rainMin) {rainhuea15--; } if (rainhuea15 == rainMin){rainhuemda15 = 1;}}
if (rainhuemda15 == 1){ if (rainhuea15 <rainMax) {rainhuea15++; } if (rainhuea15 == rainMax){rainhuemda15 = 0;}}

if (rainhuemda16 == 0){ if (rainhuea16 >rainMin) {rainhuea16--; } if (rainhuea16 == rainMin){rainhuemda16 = 1;}}
if (rainhuemda16 == 1){ if (rainhuea16 <rainMax) {rainhuea16++; } if (rainhuea16 == rainMax){rainhuemda16 = 0;}}

if (rainhuemda17 == 0){ if (rainhuea17 >rainMin) {rainhuea17--; } if (rainhuea17 == rainMin){rainhuemda17 = 1;}}
if (rainhuemda17 == 1){ if (rainhuea17 <rainMax) {rainhuea17++; } if (rainhuea17 == rainMax){rainhuemda17 = 0;}}

if (rainhuemda18 == 0){ if (rainhuea18 >rainMin) {rainhuea18--; } if (rainhuea18 == rainMin){rainhuemda18 = 1;}}
if (rainhuemda18 == 1){ if (rainhuea18 <rainMax) {rainhuea18++; } if (rainhuea18 == rainMax){rainhuemda18 = 0;}}

if (rainhuemda19 == 0){ if (rainhuea19 >rainMin) {rainhuea19--; } if (rainhuea19 == rainMin){rainhuemda19 = 1;}}
if (rainhuemda19 == 1){ if (rainhuea19 <rainMax) {rainhuea19++; } if (rainhuea19 == rainMax){rainhuemda19 = 0;}}

//panel 2

if (rainhuemda20 == 0){ if (rainhuea20 >rainMin) {rainhuea20--; } if (rainhuea20 == rainMin){rainhuemda20 = 1;}}
if (rainhuemda20 == 1){ if (rainhuea20 <rainMax) {rainhuea20++; } if (rainhuea20 == rainMax){rainhuemda20 = 0;}}

if (rainhuemda21 == 0){ if (rainhuea21 >rainMin) {rainhuea21--; } if (rainhuea21 == rainMin){rainhuemda21 = 1;}}
if (rainhuemda21 == 1){ if (rainhuea21 <rainMax) {rainhuea21++; } if (rainhuea21 == rainMax){rainhuemda21 = 0;}}

if (rainhuemda22 == 0){ if (rainhuea22 >rainMin) {rainhuea22--; } if (rainhuea22 == rainMin){rainhuemda22 = 1;}}
if (rainhuemda22 == 1){ if (rainhuea22 <rainMax) {rainhuea22++; } if (rainhuea22 == rainMax){rainhuemda22 = 0;}}

if (rainhuemda23 == 0){ if (rainhuea23 >rainMin) {rainhuea23--; } if (rainhuea23 == rainMin){rainhuemda23 = 1;}}
if (rainhuemda23 == 1){ if (rainhuea23 <rainMax) {rainhuea23++; } if (rainhuea23 == rainMax){rainhuemda23 = 0;}}

if (rainhuemda24 == 0){ if (rainhuea24 >rainMin) {rainhuea24--; } if (rainhuea24 == rainMin){rainhuemda24 = 1;}}
if (rainhuemda24 == 1){ if (rainhuea24 <rainMax) {rainhuea24++; } if (rainhuea24 == rainMax){rainhuemda24 = 0;}}

if (rainhuemda25 == 0){ if (rainhuea25 >rainMin) {rainhuea25--; } if (rainhuea25 == rainMin){rainhuemda25 = 1;}}
if (rainhuemda25 == 1){ if (rainhuea25 <rainMax) {rainhuea25++; } if (rainhuea25 == rainMax){rainhuemda25 = 0;}}

if (rainhuemda26 == 0){ if (rainhuea26 >rainMin) {rainhuea26--; } if (rainhuea26 == rainMin){rainhuemda26 = 1;}}
if (rainhuemda26 == 1){ if (rainhuea26 <rainMax) {rainhuea26++; } if (rainhuea26 == rainMax){rainhuemda26 = 0;}}

if (rainhuemda27 == 0){ if (rainhuea27 >rainMin) {rainhuea27--; } if (rainhuea27 == rainMin){rainhuemda27 = 1;}}
if (rainhuemda27 == 1){ if (rainhuea27 <rainMax) {rainhuea27++; } if (rainhuea27 == rainMax){rainhuemda27 = 0;}}

if (rainhuemda28 == 0){ if (rainhuea28 >rainMin) {rainhuea28--; } if (rainhuea28 == rainMin){rainhuemda28 = 1;}}
if (rainhuemda28 == 1){ if (rainhuea28 <rainMax) {rainhuea28++; } if (rainhuea28 == rainMax){rainhuemda28 = 0;}}

if (rainhuemda29 == 0){ if (rainhuea29 >rainMin) {rainhuea29--; } if (rainhuea29 == rainMin){rainhuemda29 = 1;}}
if (rainhuemda29 == 1){ if (rainhuea29 <rainMax) {rainhuea29++; } if (rainhuea29 == rainMax){rainhuemda29 = 0;}}

//panel 3

if (rainhuemda30 == 0){ if (rainhuea30 >rainMin) {rainhuea30--; } if (rainhuea30 == rainMin){rainhuemda30 = 1;}}
if (rainhuemda30 == 1){ if (rainhuea30 <rainMax) {rainhuea30++; } if (rainhuea30 == rainMax){rainhuemda30 = 0;}}

if (rainhuemda31 == 0){ if (rainhuea31 >rainMin) {rainhuea31--; } if (rainhuea31 == rainMin){rainhuemda31 = 1;}}
if (rainhuemda31 == 1){ if (rainhuea31 <rainMax) {rainhuea31++; } if (rainhuea31 == rainMax){rainhuemda31 = 0;}}

if (rainhuemda32 == 0){ if (rainhuea32 >rainMin) {rainhuea32--; } if (rainhuea32 == rainMin){rainhuemda32 = 1;}}
if (rainhuemda32 == 1){ if (rainhuea32 <rainMax) {rainhuea32++; } if (rainhuea32 == rainMax){rainhuemda32 = 0;}}

if (rainhuemda33 == 0){ if (rainhuea33 >rainMin) {rainhuea33--; } if (rainhuea33 == rainMin){rainhuemda33 = 1;}}
if (rainhuemda33 == 1){ if (rainhuea33 <rainMax) {rainhuea33++; } if (rainhuea33 == rainMax){rainhuemda33 = 0;}}

if (rainhuemda34 == 0){ if (rainhuea34 >rainMin) {rainhuea34--; } if (rainhuea34 == rainMin){rainhuemda34 = 1;}}
if (rainhuemda34 == 1){ if (rainhuea34 <rainMax) {rainhuea34++; } if (rainhuea34 == rainMax){rainhuemda34 = 0;}}

if (rainhuemda35 == 0){ if (rainhuea35 >rainMin) {rainhuea35--; } if (rainhuea35 == rainMin){rainhuemda35 = 1;}}
if (rainhuemda35 == 1){ if (rainhuea35 <rainMax) {rainhuea35++; } if (rainhuea35 == rainMax){rainhuemda35 = 0;}}

if (rainhuemda36 == 0){ if (rainhuea36 >rainMin) {rainhuea36--; } if (rainhuea36 == rainMin){rainhuemda36 = 1;}}
if (rainhuemda36 == 1){ if (rainhuea36 <rainMax) {rainhuea36++; } if (rainhuea36 == rainMax){rainhuemda36 = 0;}}

if (rainhuemda37 == 0){ if (rainhuea37 >rainMin) {rainhuea37--; } if (rainhuea37 == rainMin){rainhuemda37 = 1;}}
if (rainhuemda37 == 1){ if (rainhuea37 <rainMax) {rainhuea37++; } if (rainhuea37 == rainMax){rainhuemda37 = 0;}}

if (rainhuemda38 == 0){ if (rainhuea38 >rainMin) {rainhuea38--; } if (rainhuea38 == rainMin){rainhuemda38 = 1;}}
if (rainhuemda38 == 1){ if (rainhuea38 <rainMax) {rainhuea38++; } if (rainhuea38 == rainMax){rainhuemda38 = 0;}}

if (rainhuemda39 == 0){ if (rainhuea39 >rainMin) {rainhuea39--; } if (rainhuea39 == rainMin){rainhuemda39 = 1;}}
if (rainhuemda39 == 1){ if (rainhuea39 <rainMax) {rainhuea39++; } if (rainhuea39 == rainMax){rainhuemda39 = 0;}}

////panel 4

if (rainhuemda40 == 0){ if (rainhuea40 >rainMin) {rainhuea40--; } if (rainhuea40 == rainMin){rainhuemda40 = 1;}}
if (rainhuemda40 == 1){ if (rainhuea40 <rainMax) {rainhuea40++; } if (rainhuea40 == rainMax){rainhuemda40 = 0;}}

if (rainhuemda41 == 0){ if (rainhuea41 >rainMin) {rainhuea41--; } if (rainhuea41 == rainMin){rainhuemda41 = 1;}}
if (rainhuemda41 == 1){ if (rainhuea41 <rainMax) {rainhuea41++; } if (rainhuea41 == rainMax){rainhuemda41 = 0;}}

if (rainhuemda42 == 0){ if (rainhuea42 >rainMin) {rainhuea42--; } if (rainhuea42 == rainMin){rainhuemda42 = 1;}}
if (rainhuemda42 == 1){ if (rainhuea42 <rainMax) {rainhuea42++; } if (rainhuea42 == rainMax){rainhuemda42 = 0;}}

if (rainhuemda43 == 0){ if (rainhuea43 >rainMin) {rainhuea43--; } if (rainhuea43 == rainMin){rainhuemda43 = 1;}}
if (rainhuemda43 == 1){ if (rainhuea43 <rainMax) {rainhuea43++; } if (rainhuea43 == rainMax){rainhuemda43 = 0;}}

if (rainhuemda44 == 0){ if (rainhuea44 >rainMin) {rainhuea44--; } if (rainhuea44 == rainMin){rainhuemda44 = 1;}}
if (rainhuemda44 == 1){ if (rainhuea44 <rainMax) {rainhuea44++; } if (rainhuea44 == rainMax){rainhuemda44 = 0;}}

if (rainhuemda45 == 0){ if (rainhuea45 >rainMin) {rainhuea45--; } if (rainhuea45 == rainMin){rainhuemda45 = 1;}}
if (rainhuemda45 == 1){ if (rainhuea45 <rainMax) {rainhuea45++; } if (rainhuea45 == rainMax){rainhuemda45 = 0;}}

if (rainhuemda46 == 0){ if (rainhuea46 >rainMin) {rainhuea46--; } if (rainhuea46 == rainMin){rainhuemda46 = 1;}}
if (rainhuemda46 == 1){ if (rainhuea46 <rainMax) {rainhuea46++; } if (rainhuea46 == rainMax){rainhuemda46 = 0;}}

if (rainhuemda47 == 0){ if (rainhuea47 >rainMin) {rainhuea47--; } if (rainhuea47 == rainMin){rainhuemda47 = 1;}}
if (rainhuemda47 == 1){ if (rainhuea47 <rainMax) {rainhuea47++; } if (rainhuea47 == rainMax){rainhuemda47 = 0;}}

if (rainhuemda48 == 0){ if (rainhuea48 >rainMin) {rainhuea48--; } if (rainhuea48 == rainMin){rainhuemda48 = 1;}}
if (rainhuemda48 == 1){ if (rainhuea48 <rainMax) {rainhuea48++; } if (rainhuea48 == rainMax){rainhuemda48 = 0;}}

if (rainhuemda49 == 0){ if (rainhuea49 >rainMin) {rainhuea49--; } if (rainhuea49 == rainMin){rainhuemda49 = 1;}}
if (rainhuemda49 == 1){ if (rainhuea49 <rainMax) {rainhuea49++; } if (rainhuea49 == rainMax){rainhuemda49 = 0;}}


rainhuechange = 0;}

}




LEDS.show();


} */
