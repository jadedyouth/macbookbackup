/*

void skanner (){



  

//vetical
if (skvd == 0){

if (skvpos == 0) {for (int i = 0; i< 15; i++) {leds[p0_vline0[i]] = CHSV (skhue, 255, sk0val);} }
if (skvpos == 1) {for (int i = 0; i< 15; i++) {leds[p0_vline1[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline0[i]] = CHSV (0, 255, 0);} }
if (skvpos == 2) {for (int i = 0; i< 15; i++) {leds[p0_vline2[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline1[i]] = CHSV (0, 255, 0);} }
if (skvpos == 3) {for (int i = 0; i< 15; i++) {leds[p0_vline3[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline2[i]] = CHSV (0, 255, 0);} }
if (skvpos == 4) {for (int i = 0; i< 15; i++) {leds[p0_vline4[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline3[i]] = CHSV (0, 255, 0);} }
if (skvpos == 5) {for (int i = 0; i< 15; i++) {leds[p0_vline5[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline4[i]] = CHSV (0, 255, 0);} }
if (skvpos == 6) {for (int i = 0; i< 15; i++) {leds[p0_vline6[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline5[i]] = CHSV (0, 255, 0);} }
if (skvpos == 7) {for (int i = 0; i< 15; i++) {leds[p0_vline7[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline6[i]] = CHSV (0, 255, 0);} }
if (skvpos == 8) {for (int i = 0; i< 15; i++) {leds[p0_vline8[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline7[i]] = CHSV (0, 255, 0);} }
if (skvpos == 9) {for (int i = 0; i< 15; i++) {leds[p0_vline9[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline8[i]] = CHSV (0, 255, 0);} }
if (skvpos == 10) {for (int i = 0; i< 15; i++) {leds[p1_vline0[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline9[i]] = CHSV (0, 255, 0);} }
if (skvpos == 11) {for (int i = 0; i< 15; i++) {leds[p1_vline1[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline0[i]] = CHSV (0, 255, 0);} }
if (skvpos == 12) {for (int i = 0; i< 15; i++) {leds[p1_vline2[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline1[i]] = CHSV (0, 255, 0);} }
if (skvpos == 13) {for (int i = 0; i< 15; i++) {leds[p1_vline3[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline2[i]] = CHSV (0, 255, 0);} }
if (skvpos == 14) {for (int i = 0; i< 15; i++) {leds[p1_vline4[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline3[i]] = CHSV (0, 255, 0);} }
if (skvpos == 15) {for (int i = 0; i< 15; i++) {leds[p1_vline5[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline4[i]] = CHSV (0, 255, 0);} }
if (skvpos == 16) {for (int i = 0; i< 15; i++) {leds[p1_vline6[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline5[i]] = CHSV (0, 255, 0);} }
if (skvpos == 17) {for (int i = 0; i< 15; i++) {leds[p1_vline7[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline6[i]] = CHSV (0, 255, 0);} }
if (skvpos == 18) {for (int i = 0; i< 15; i++) {leds[p1_vline8[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline7[i]] = CHSV (0, 255, 0);} }
if (skvpos == 19) {for (int i = 0; i< 15; i++) {leds[p1_vline9[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline8[i]] = CHSV (0, 255, 0);} }
}

if (skvd == 1){
if (skvpos == 19){for (int i = 0; i< 15; i++) {leds[p1_vline9[i]] = CHSV (skhue, 255, sk0val); } }
if (skvpos == 18){for (int i = 0; i< 15; i++) {leds[p1_vline8[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline9[i]] = CHSV (0, 255, 0);} }
if (skvpos == 17){for (int i = 0; i< 15; i++) {leds[p1_vline7[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline8[i]] = CHSV (0, 255, 0);} }
if (skvpos == 16){for (int i = 0; i< 15; i++) {leds[p1_vline6[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline7[i]] = CHSV (0, 255, 0);} }
if (skvpos == 15){for (int i = 0; i< 15; i++) {leds[p1_vline5[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline6[i]] = CHSV (0, 255, 0);} }
if (skvpos == 14){for (int i = 0; i< 15; i++) {leds[p1_vline4[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline5[i]] = CHSV (0, 255, 0);} }
if (skvpos == 13){for (int i = 0; i< 15; i++) {leds[p1_vline3[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline4[i]] = CHSV (0, 255, 0);} }
if (skvpos == 12){for (int i = 0; i< 15; i++) {leds[p1_vline2[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline3[i]] = CHSV (0, 255, 0);} }
if (skvpos == 11){for (int i = 0; i< 15; i++) {leds[p1_vline1[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline2[i]] = CHSV (0, 255, 0);} }
if (skvpos == 10){for (int i = 0; i< 15; i++) {leds[p1_vline0[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline1[i]] = CHSV (0, 255, 0);} }
if (skvpos == 9) {for (int i = 0; i< 15; i++) {leds[p0_vline9[i]] = CHSV (skhue, 255, sk0val); leds[p1_vline0[i]] = CHSV (0, 255, 0);} }
if (skvpos == 8) {for (int i = 0; i< 15; i++) {leds[p0_vline8[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline9[i]] = CHSV (0, 255, 0);} }
if (skvpos == 7) {for (int i = 0; i< 15; i++) {leds[p0_vline7[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline8[i]] = CHSV (0, 255, 0);} }
if (skvpos == 6) {for (int i = 0; i< 15; i++) {leds[p0_vline6[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline7[i]] = CHSV (0, 255, 0);} }
if (skvpos == 5) {for (int i = 0; i< 15; i++) {leds[p0_vline5[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline6[i]] = CHSV (0, 255, 0);} }
if (skvpos == 4) {for (int i = 0; i< 15; i++) {leds[p0_vline4[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline5[i]] = CHSV (0, 255, 0);} }
if (skvpos == 3) {for (int i = 0; i< 15; i++) {leds[p0_vline3[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline4[i]] = CHSV (0, 255, 0);} }
if (skvpos == 2) {for (int i = 0; i< 15; i++) {leds[p0_vline2[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline3[i]] = CHSV (0, 255, 0);} }
if (skvpos == 1) {for (int i = 0; i< 15; i++) {leds[p0_vline1[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline2[i]] = CHSV (0, 255, 0);} }
if (skvpos == 0) {for (int i = 0; i< 15; i++) {leds[p0_vline0[i]] = CHSV (skhue, 255, sk0val); leds[p0_vline1[i]] = CHSV (0, 255, 0);} }

} 

//if (sktv0 < skspeed) {sk0val = uval;} 
if (skvd == 0) {if (sktv0 >skspeed) { if (skvpos < 20) { skvpos++; sktv0 = 0;} } } //move right
if (skvd == 1) {if (sktv0 >skspeed) { if (skvpos > 0) { skvpos--; sktv0 = 0;} } } 

if (skvpos == 19 && sktv0 >= skspeed - 22) { skvd = 1;} //come back
if (skvpos == 0 && sktv0 >= skspeed - 22) { skvd = 0;}




//horizontal
if (skhd == 0){
//panel0
if (skhpos == 0) {for (int i = 0; i< 10; i++) {leds[p0_hline0[i]] = CHSV (skhue, 255, sk0val); } }
if (skhpos == 1) {for (int i = 0; i< 10; i++) {leds[p0_hline1[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline0[i]] = CHSV (0, 255, 0);} }
if (skhpos == 2) {for (int i = 0; i< 10; i++) {leds[p0_hline2[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline1[i]] = CHSV (0, 255, 0);} }
if (skhpos == 3) {for (int i = 0; i< 10; i++) {leds[p0_hline3[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline2[i]] = CHSV (0, 255, 0);} }
if (skhpos == 4) {for (int i = 0; i< 10; i++) {leds[p0_hline4[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline3[i]] = CHSV (0, 255, 0);} }
if (skhpos == 5) {for (int i = 0; i< 10; i++) {leds[p0_hline5[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline4[i]] = CHSV (0, 255, 0);} }
if (skhpos == 6) {for (int i = 0; i< 10; i++) {leds[p0_hline6[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline5[i]] = CHSV (0, 255, 0);} }
if (skhpos == 7) {for (int i = 0; i< 10; i++) {leds[p0_hline7[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline6[i]] = CHSV (0, 255, 0);} }
if (skhpos == 8) {for (int i = 0; i< 10; i++) {leds[p0_hline8[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline7[i]] = CHSV (0, 255, 0);} }
if (skhpos == 9) {for (int i = 0; i< 10; i++) {leds[p0_hline9[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline8[i]] = CHSV (0, 255, 0);} }
if (skhpos == 10) {for (int i = 0; i< 10; i++) {leds[p0_hline10[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline9[i]] = CHSV (0, 255, 0);} }
if (skhpos == 11) {for (int i = 0; i< 10; i++) {leds[p0_hline11[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline10[i]] = CHSV (0, 255, 0);} }
if (skhpos == 12) {for (int i = 0; i< 10; i++) {leds[p0_hline12[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline11[i]] = CHSV (0, 255, 0);} }
if (skhpos == 13) {for (int i = 0; i< 10; i++) {leds[p0_hline13[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline12[i]] = CHSV (0, 255, 0);} }
if (skhpos == 14) {for (int i = 0; i< 10; i++) {leds[p0_hline14[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline13[i]] = CHSV (0, 255, 0);} }


//panel1
if (skhpos == 0) {for (int i = 0; i< 10; i++) {leds[p1_hline0[i]] = CHSV (skhue, 255, sk0val); } }
if (skhpos == 1) {for (int i = 0; i< 10; i++) {leds[p1_hline1[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline0[i]] = CHSV (0, 255, 0);} }
if (skhpos == 2) {for (int i = 0; i< 10; i++) {leds[p1_hline2[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline1[i]] = CHSV (0, 255, 0);} }
if (skhpos == 3) {for (int i = 0; i< 10; i++) {leds[p1_hline3[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline2[i]] = CHSV (0, 255, 0);} }
if (skhpos == 4) {for (int i = 0; i< 10; i++) {leds[p1_hline4[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline3[i]] = CHSV (0, 255, 0);} }
if (skhpos == 5) {for (int i = 0; i< 10; i++) {leds[p1_hline5[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline4[i]] = CHSV (0, 255, 0);} }
if (skhpos == 6) {for (int i = 0; i< 10; i++) {leds[p1_hline6[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline5[i]] = CHSV (0, 255, 0);} }
if (skhpos == 7) {for (int i = 0; i< 10; i++) {leds[p1_hline7[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline6[i]] = CHSV (0, 255, 0);} }
if (skhpos == 8) {for (int i = 0; i< 10; i++) {leds[p1_hline8[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline7[i]] = CHSV (0, 255, 0);} }
if (skhpos == 9) {for (int i = 0; i< 10; i++) {leds[p1_hline9[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline8[i]] = CHSV (0, 255, 0);} }
if (skhpos == 10) {for (int i = 0; i< 10; i++) {leds[p1_hline10[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline9[i]] = CHSV (0, 255, 0);} }
if (skhpos == 11) {for (int i = 0; i< 10; i++) {leds[p1_hline11[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline10[i]] = CHSV (0, 255, 0);} }
if (skhpos == 12) {for (int i = 0; i< 10; i++) {leds[p1_hline12[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline11[i]] = CHSV (0, 255, 0);} }
if (skhpos == 13) {for (int i = 0; i< 10; i++) {leds[p1_hline13[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline12[i]] = CHSV (0, 255, 0);} }
if (skhpos == 14) {for (int i = 0; i< 10; i++) {leds[p1_hline14[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline13[i]] = CHSV (0, 255, 0);} }
}


if (skhd == 1){

//panel0
if (skhpos == 14) {for (int i = 0; i< 10; i++) {leds[p0_hline14[i]] = CHSV (skhue, 255, sk0val);} }
if (skhpos == 13) {for (int i = 0; i< 10; i++) {leds[p0_hline13[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline14[i]] = CHSV (0, 255, 0);} }
if (skhpos == 12) {for (int i = 0; i< 10; i++) {leds[p0_hline12[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline13[i]] = CHSV (0, 255, 0);} }
if (skhpos == 11) {for (int i = 0; i< 10; i++) {leds[p0_hline11[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline12[i]] = CHSV (0, 255, 0);} }
if (skhpos == 10) {for (int i = 0; i< 10; i++) {leds[p0_hline10[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline11[i]] = CHSV (0, 255, 0);} }
if (skhpos == 9) {for (int i = 0; i< 10; i++) {leds[p0_hline9[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline10[i]] = CHSV (0, 255, 0);} }
if (skhpos == 8) {for (int i = 0; i< 10; i++) {leds[p0_hline8[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline9[i]] = CHSV (0, 255, 0);} }
if (skhpos == 7) {for (int i = 0; i< 10; i++) {leds[p0_hline7[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline8[i]] = CHSV (0, 255, 0);} }
if (skhpos == 6) {for (int i = 0; i< 10; i++) {leds[p0_hline6[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline7[i]] = CHSV (0, 255, 0);} }
if (skhpos == 5) {for (int i = 0; i< 10; i++) {leds[p0_hline5[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline6[i]] = CHSV (0, 255, 0);} }
if (skhpos == 4) {for (int i = 0; i< 10; i++) {leds[p0_hline4[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline5[i]] = CHSV (0, 255, 0);} }
if (skhpos == 3) {for (int i = 0; i< 10; i++) {leds[p0_hline3[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline4[i]] = CHSV (0, 255, 0);} }
if (skhpos == 2) {for (int i = 0; i< 10; i++) {leds[p0_hline2[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline3[i]] = CHSV (0, 255, 0);} }
if (skhpos == 1) {for (int i = 0; i< 10; i++) {leds[p0_hline1[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline2[i]] = CHSV (0, 255, 0);} }
if (skhpos == 0) {for (int i = 0; i< 10; i++) {leds[p0_hline0[i]] = CHSV (skhue, 255, sk0val); leds[p0_hline1[i]] = CHSV (0, 255, 0);} }

//panel1

if (skhpos == 14) {for (int i = 0; i< 10; i++) {leds[p1_hline14[i]] = CHSV (skhue, 255, sk0val);} }
if (skhpos == 13) {for (int i = 0; i< 10; i++) {leds[p1_hline13[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline14[i]] = CHSV (0, 255, 0);} }
if (skhpos == 12) {for (int i = 0; i< 10; i++) {leds[p1_hline12[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline13[i]] = CHSV (0, 255, 0);} }
if (skhpos == 11) {for (int i = 0; i< 10; i++) {leds[p1_hline11[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline12[i]] = CHSV (0, 255, 0);} }
if (skhpos == 10) {for (int i = 0; i< 10; i++) {leds[p1_hline10[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline11[i]] = CHSV (0, 255, 0);} }
if (skhpos == 9) {for (int i = 0; i< 10; i++) {leds[p1_hline9[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline10[i]] = CHSV (0, 255, 0);} }
if (skhpos == 8) {for (int i = 0; i< 10; i++) {leds[p1_hline8[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline9[i]] = CHSV (0, 255, 0);} }
if (skhpos == 7) {for (int i = 0; i< 10; i++) {leds[p1_hline7[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline8[i]] = CHSV (0, 255, 0);} }
if (skhpos == 6) {for (int i = 0; i< 10; i++) {leds[p1_hline6[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline7[i]] = CHSV (0, 255, 0);} }
if (skhpos == 5) {for (int i = 0; i< 10; i++) {leds[p1_hline5[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline6[i]] = CHSV (0, 255, 0);} }
if (skhpos == 4) {for (int i = 0; i< 10; i++) {leds[p1_hline4[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline5[i]] = CHSV (0, 255, 0);} }
if (skhpos == 3) {for (int i = 0; i< 10; i++) {leds[p1_hline3[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline4[i]] = CHSV (0, 255, 0);} }
if (skhpos == 2) {for (int i = 0; i< 10; i++) {leds[p1_hline2[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline3[i]] = CHSV (0, 255, 0);} }
if (skhpos == 1) {for (int i = 0; i< 10; i++) {leds[p1_hline1[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline2[i]] = CHSV (0, 255, 0);} }
if (skhpos == 0) {for (int i = 0; i< 10; i++) {leds[p1_hline0[i]] = CHSV (skhue, 255, sk0val); leds[p1_hline1[i]] = CHSV (0, 255, 0);} }

} 
//if (skth0 <skspeed) {sk0val = uval;} 
if (skhd == 0) {if (skth0 >skspeed) { if (skhpos < 15) { skhpos++; skth0 = 0;} } } //move right
if (skhd == 1) {if (skth0 >skspeed) { if (skhpos > 0) { skhpos--; skth0 = 0;} } } 

if (skhpos == 14 && skth0 >= skspeed - 22) { skhd = 1;} //come back
if (skhpos == 0 && skth0 >= skspeed - 22) { skhd = 0;}








LEDS.show();
}  */
