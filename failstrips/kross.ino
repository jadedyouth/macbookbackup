/*

void kross (){

if (KRmode == 0) {
  
if (KRtime > 80) { if (KRidxvb > 0) { if (KRidxhl < 9){ KRidxhl++;} if (KRidxhr > 0){ KRidxhr--; } }
if (KRidxvb < 13){KRidxvb++;} if (KRidxvt > 0){KRidxvt--;} KRtime = 0;}
if (KRidxvb > 5) {KRsat = 0; KRval = 60;} }

if (KRmode == 1) {KRtime = 0; KRsat = 255; KRval = 100; KRidxvt = 13; KRidxvb = 0; KRidxhl = 0; KRidxhr = 9; KRmode = 0; } 


//panel 0
leds[p0_hline6[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p0_hline7[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p0_hline6[KRidxhr]] = CHSV (KRhue, KRsat, KRval);
leds[p0_hline7[KRidxhr]] = CHSV (KRhue, KRsat, KRval);

leds[p0_vline4[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p0_vline5[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p0_vline4[KRidxvb]] = CHSV (KRhue, KRsat, KRval);
leds[p0_vline5[KRidxvb]] = CHSV (KRhue, KRsat, KRval);

//panel 1
leds[p1_hline6[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p1_hline7[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p1_hline6[KRidxhr]] = CHSV (KRhue, KRsat, KRval);
leds[p1_hline7[KRidxhr]] = CHSV (KRhue, KRsat, KRval);

leds[p1_vline4[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p1_vline5[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p1_vline4[KRidxvb]] = CHSV (KRhue, KRsat, KRval);
leds[p1_vline5[KRidxvb]] = CHSV (KRhue, KRsat, KRval);


//panel 2

leds[p2_hline6[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p2_hline7[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p2_hline6[KRidxhr]] = CHSV (KRhue, KRsat, KRval);
leds[p2_hline7[KRidxhr]] = CHSV (KRhue, KRsat, KRval);

leds[p2_vline4[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p2_vline5[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p2_vline4[KRidxvb]] = CHSV (KRhue, KRsat, KRval);
leds[p2_vline5[KRidxvb]] = CHSV (KRhue, KRsat, KRval); 


//panel 3

leds[p3_hline6[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p3_hline7[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p3_hline6[KRidxhr]] = CHSV (KRhue, KRsat, KRval);
leds[p3_hline7[KRidxhr]] = CHSV (KRhue, KRsat, KRval);

leds[p3_vline4[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p3_vline5[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p3_vline4[KRidxvb]] = CHSV (KRhue, KRsat, KRval);
leds[p3_vline5[KRidxvb]] = CHSV (KRhue, KRsat, KRval); 

//panel 4

leds[p4_hline6[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p4_hline7[KRidxhl]] = CHSV (KRhue, KRsat, KRval);
leds[p4_hline6[KRidxhr]] = CHSV (KRhue, KRsat, KRval);
leds[p4_hline7[KRidxhr]] = CHSV (KRhue, KRsat, KRval);

leds[p4_vline4[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p4_vline5[KRidxvt]] = CHSV (KRhue, KRsat, KRval);
leds[p4_vline4[KRidxvb]] = CHSV (KRhue, KRsat, KRval);
leds[p4_vline5[KRidxvb]] = CHSV (KRhue, KRsat, KRval); 


LEDS.show();
if (KRidxvt == 1) {KRtime1 = 0;}
if (KRidxvt == 0) {if (KRtime1 > 200){ KRmode = 1;}}

} */
