/* 

 void invertedCrosss (){

  //background loads in one pixel at a time
if (crosssMode == 0){if (crosssTime > 100) { if (crosssbackidx < crosssbackcount){ crosssbackidx ++;} if (crosssbackidx >= crosssbackcount){ crosssMode = 1;} crosssTime = 0;}

crosssbackval = uval;
leds[p0_crosssback[crosssbackidx]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);
leds[p1_crosssback[crosssbackidx]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);

}



//background fades out, cross fades in
if (crosssMode == 1) {if (crosssTime > 30) { if (crosssbackval > 0) {crosssbackval--;} if (crosssval < 100){ crosssval++; } crosssTime = 0;  }

for (int i = 0; i< crosssbackcount; i++){leds[p0_crosssback[i]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);}
for (int i = 0; i< crosssbackcount; i++){leds[p1_crosssback[i]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);}

for (int i = 0; i< crossscount; i++){leds[p0_crosss[i]] = CHSV (crossshue, crossssat, crosssval);}
for (int i = 0; i< crossscount; i++){leds[p1_crosss[i]] = CHSV (crossshue, crossssat, crosssval);}
if (crosssval >= 100) {crosssMode = 2;}
}

LEDS.show();
 }






void invertedCrosss5 (){

  //background loads in one pixel at a time
if (crosssMode == 0){if (crosssTime > 100) { if (crosssbackidx < crosssbackcount){ crosssbackidx ++;} if (crosssbackidx >= crosssbackcount){ crosssMode = 1;} crosssTime = 0;}

crosssbackval = uval;
leds[p0_crosssback[crosssbackidx]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);
leds[p1_crosssback[crosssbackidx]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);
leds[p2_crosssback[crosssbackidx]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);
leds[p3_crosssback[crosssbackidx]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);
leds[p4_crosssback[crosssbackidx]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);
}



//background fades out, cross fades in
if (crosssMode == 1) {if (crosssTime > 30) { if (crosssbackval > 0) {crosssbackval--;} if (crosssval < 100){ crosssval++; } crosssTime = 0;  }

for (int i = 0; i< crosssbackcount; i++){leds[p0_crosssback[i]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);}
for (int i = 0; i< crosssbackcount; i++){leds[p1_crosssback[i]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);}
for (int i = 0; i< crosssbackcount; i++){leds[p2_crosssback[i]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);}
for (int i = 0; i< crosssbackcount; i++){leds[p3_crosssback[i]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);}
for (int i = 0; i< crosssbackcount; i++){leds[p4_crosssback[i]] = CHSV (crosssbackhue, crosssbacksat, crosssbackval);}

for (int i = 0; i< crossscount; i++){leds[p0_crosss[i]] = CHSV (crossshue, crossssat, crosssval);}
for (int i = 0; i< crossscount; i++){leds[p1_crosss[i]] = CHSV (crossshue, crossssat, crosssval);}
for (int i = 0; i< crossscount; i++){leds[p2_crosss[i]] = CHSV (crossshue, crossssat, crosssval);}
for (int i = 0; i< crossscount; i++){leds[p3_crosss[i]] = CHSV (crossshue, crossssat, crosssval);}
for (int i = 0; i< crossscount; i++){leds[p4_crosss[i]] = CHSV (crossshue, crossssat, crosssval);}
if (crosssval >= 100) {crosssMode = 2;}
}

LEDS.show();
 } */
