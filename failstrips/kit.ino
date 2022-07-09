

void kit (){


  
if (kitmd == 0) { kittop = random (3,11); kitmd = 1;}

//out
if (kitmd == 1) {if (kittime > kitspd){ if (kitpos < kittop) {kitpos ++;} kittime = 0;} if (kitpos >= kittop) {kitmd = 2;} 




for (int i = 0; i< 15; i++) {leds[p1_vline0[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline9[i]] = CHSV (kithue, kitsat, kitval);} 
switch (kitpos){
case 0: for (int i = 0; i< 15; i++) {leds[p1_vline0[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline9[i]] = CHSV (kithue, kitsat, kitval);} break;
case 1: for (int i = 0; i< 15; i++) {leds[p1_vline1[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline8[i]] = CHSV (kithue, kitsat, kitval);} break;
case 2: for (int i = 0; i< 15; i++) {leds[p1_vline2[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline7[i]] = CHSV (kithue, kitsat, kitval);} break;
case 3: for (int i = 0; i< 15; i++) {leds[p1_vline3[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline6[i]] = CHSV (kithue, kitsat, kitval);} break;
case 4: for (int i = 0; i< 15; i++) {leds[p1_vline4[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline5[i]] = CHSV (kithue, kitsat, kitval);} break;
case 5: for (int i = 0; i< 15; i++) {leds[p1_vline5[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline4[i]] = CHSV (kithue, kitsat, kitval);} break;
case 6: for (int i = 0; i< 15; i++) {leds[p1_vline6[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline3[i]] = CHSV (kithue, kitsat, kitval);} break;
case 7: for (int i = 0; i< 15; i++) {leds[p1_vline7[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline2[i]] = CHSV (kithue, kitsat, kitval);} break;
case 8: for (int i = 0; i< 15; i++) {leds[p1_vline8[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline1[i]] = CHSV (kithue, kitsat, kitval);} break;
case 9: for (int i = 0; i< 15; i++) {leds[p1_vline9[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline0[i]] = CHSV (kithue, kitsat, kitval);} break;
   break;
}

}
 //in

 if (kitmd == 2) {if (kittime > kitspd){ if (kitpos > 0) {kitpos --;} kittime = 0;} if (kitpos <= 0) {kitmd = 0;} 





switch (kitpos){
case 0: for (int i = 0; i< 15; i++) {leds[p1_vline0[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline9[i]] = CHSV (kithue, kitsat, 0);} break;
case 1: for (int i = 0; i< 15; i++) {leds[p1_vline1[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline8[i]] = CHSV (kithue, kitsat, 0);} break;
case 2: for (int i = 0; i< 15; i++) {leds[p1_vline2[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline7[i]] = CHSV (kithue, kitsat, 0);} break;
case 3: for (int i = 0; i< 15; i++) {leds[p1_vline3[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline6[i]] = CHSV (kithue, kitsat, 0);} break;
case 4: for (int i = 0; i< 15; i++) {leds[p1_vline4[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline5[i]] = CHSV (kithue, kitsat, 0);} break;
case 5: for (int i = 0; i< 15; i++) {leds[p1_vline5[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline4[i]] = CHSV (kithue, kitsat, 0);} break;
case 6: for (int i = 0; i< 15; i++) {leds[p1_vline6[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline3[i]] = CHSV (kithue, kitsat, 0);} break;
case 7: for (int i = 0; i< 15; i++) {leds[p1_vline7[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline2[i]] = CHSV (kithue, kitsat, 0);} break;
case 8: for (int i = 0; i< 15; i++) {leds[p1_vline8[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline1[i]] = CHSV (kithue, kitsat, 0);} break;
case 9: for (int i = 0; i< 15; i++) {leds[p1_vline9[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline0[i]] = CHSV (kithue, kitsat, 0);} break;
  break;
}

}
LEDS.show();
}



void kit5 (){
if (kitmd == 0) { kittop = random (0,26); kitmd = 1;}


//out
if (kitmd == 1) {if (kittime > kitspd){ if (kitpos < kittop) {kitpos ++;} kittime = 0;} if (kitpos >= kittop) {kitmd = 2;} 




for (int i = 0; i< 15; i++) {leds[p2_vline5[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p2_vline4[i]] = CHSV (kithue, kitsat, kitval);} 
switch (kitpos){
case 0: for (int i = 0; i< 15; i++) {leds[p2_vline5[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p2_vline4[i]] = CHSV (kithue, kitsat, kitval);} break;
case 1: for (int i = 0; i< 15; i++) {leds[p2_vline6[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p2_vline3[i]] = CHSV (kithue, kitsat, kitval);} break;
case 2: for (int i = 0; i< 15; i++) {leds[p2_vline7[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p2_vline2[i]] = CHSV (kithue, kitsat, kitval);} break;
case 3: for (int i = 0; i< 15; i++) {leds[p2_vline8[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p2_vline1[i]] = CHSV (kithue, kitsat, kitval);} break;
case 4: for (int i = 0; i< 15; i++) {leds[p2_vline9[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p2_vline0[i]] = CHSV (kithue, kitsat, kitval);} break;
case 5: for (int i = 0; i< 15; i++) {leds[p3_vline0[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline9[i]] = CHSV (kithue, kitsat, kitval);} break;
case 6: for (int i = 0; i< 15; i++) {leds[p3_vline1[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline8[i]] = CHSV (kithue, kitsat, kitval);} break;
case 7: for (int i = 0; i< 15; i++) {leds[p3_vline2[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline7[i]] = CHSV (kithue, kitsat, kitval);} break;
case 8: for (int i = 0; i< 15; i++) {leds[p3_vline3[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline6[i]] = CHSV (kithue, kitsat, kitval);} break;
case 9: for (int i = 0; i< 15; i++) {leds[p3_vline4[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline5[i]] = CHSV (kithue, kitsat, kitval);} break;
 
case 10: for (int i = 0; i< 15; i++) {leds[p3_vline5[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline4[i]] = CHSV (kithue, kitsat, kitval);} break;  
case 11: for (int i = 0; i< 15; i++) {leds[p3_vline6[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline3[i]] = CHSV (kithue, kitsat, kitval);} break;
case 12: for (int i = 0; i< 15; i++) {leds[p3_vline7[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline2[i]] = CHSV (kithue, kitsat, kitval);} break;  
case 13: for (int i = 0; i< 15; i++) {leds[p3_vline8[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline1[i]] = CHSV (kithue, kitsat, kitval);} break;  
case 14: for (int i = 0; i< 15; i++) {leds[p3_vline9[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p1_vline0[i]] = CHSV (kithue, kitsat, kitval);} break;
case 15: for (int i = 0; i< 15; i++) {leds[p4_vline0[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline9[i]] = CHSV (kithue, kitsat, kitval);} break;
case 16: for (int i = 0; i< 15; i++) {leds[p4_vline1[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline8[i]] = CHSV (kithue, kitsat, kitval);} break;  
case 17: for (int i = 0; i< 15; i++) {leds[p4_vline2[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline7[i]] = CHSV (kithue, kitsat, kitval);} break;
case 18: for (int i = 0; i< 15; i++) {leds[p4_vline3[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline6[i]] = CHSV (kithue, kitsat, kitval);} break;
case 19: for (int i = 0; i< 15; i++) {leds[p4_vline4[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline5[i]] = CHSV (kithue, kitsat, kitval);} break;
case 20: for (int i = 0; i< 15; i++) {leds[p4_vline5[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline4[i]] = CHSV (kithue, kitsat, kitval);} break;  
case 21: for (int i = 0; i< 15; i++) {leds[p4_vline6[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline3[i]] = CHSV (kithue, kitsat, kitval);} break;
case 22: for (int i = 0; i< 15; i++) {leds[p4_vline7[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline2[i]] = CHSV (kithue, kitsat, kitval);} break;
case 23: for (int i = 0; i< 15; i++) {leds[p4_vline8[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline1[i]] = CHSV (kithue, kitsat, kitval);} break;  
case 24: for (int i = 0; i< 15; i++) {leds[p4_vline9[i]] = CHSV (kithue, kitsat, kitval);} for (int i = 0; i< 15; i++) {leds[p0_vline0[i]] = CHSV (kithue, kitsat, kitval);} break; 
  
  
  break;
}

}
 //in

 if (kitmd == 2) {if (kittime > kitspd){ if (kitpos > 0) {kitpos --;} kittime = 0;} if (kitpos <= 0) {kitmd = 0;} 





switch (kitpos){
case 0: for (int i = 0; i< 15; i++) {leds[p2_vline5[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p2_vline4[i]] = CHSV (kithue, kitsat, 0);} break;
case 1: for (int i = 0; i< 15; i++) {leds[p2_vline6[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p2_vline3[i]] = CHSV (kithue, kitsat, 0);} break;
case 2: for (int i = 0; i< 15; i++) {leds[p2_vline7[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p2_vline2[i]] = CHSV (kithue, kitsat, 0);} break;
case 3: for (int i = 0; i< 15; i++) {leds[p2_vline8[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p2_vline1[i]] = CHSV (kithue, kitsat, 0);} break;
case 4: for (int i = 0; i< 15; i++) {leds[p2_vline9[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p2_vline0[i]] = CHSV (kithue, kitsat, 0);} break;
case 5: for (int i = 0; i< 15; i++) {leds[p3_vline0[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline9[i]] = CHSV (kithue, kitsat, 0);} break;
case 6: for (int i = 0; i< 15; i++) {leds[p3_vline1[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline8[i]] = CHSV (kithue, kitsat, 0);} break;
case 7: for (int i = 0; i< 15; i++) {leds[p3_vline2[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline7[i]] = CHSV (kithue, kitsat, 0);} break;
case 8: for (int i = 0; i< 15; i++) {leds[p3_vline3[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline6[i]] = CHSV (kithue, kitsat, 0);} break;
case 9: for (int i = 0; i< 15; i++) {leds[p3_vline4[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline5[i]] = CHSV (kithue, kitsat, 0);} break;

case 10: for (int i = 0; i< 15; i++) {leds[p3_vline5[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline4[i]] = CHSV (kithue, kitsat, 0);} break;  
case 11: for (int i = 0; i< 15; i++) {leds[p3_vline6[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline3[i]] = CHSV (kithue, kitsat, 0);} break;
case 12: for (int i = 0; i< 15; i++) {leds[p3_vline7[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline2[i]] = CHSV (kithue, kitsat, 0);} break;
case 13: for (int i = 0; i< 15; i++) {leds[p3_vline8[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline1[i]] = CHSV (kithue, kitsat, 0);} break;  
case 14: for (int i = 0; i< 15; i++) {leds[p3_vline9[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p1_vline0[i]] = CHSV (kithue, kitsat, 0);} break;
case 15: for (int i = 0; i< 15; i++) {leds[p4_vline0[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline9[i]] = CHSV (kithue, kitsat, 0);} break;
case 16: for (int i = 0; i< 15; i++) {leds[p4_vline1[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline8[i]] = CHSV (kithue, kitsat, 0);} break;  
case 17: for (int i = 0; i< 15; i++) {leds[p4_vline2[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline7[i]] = CHSV (kithue, kitsat, 0);} break;
case 18: for (int i = 0; i< 15; i++) {leds[p4_vline3[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline6[i]] = CHSV (kithue, kitsat, 0);} break;
case 19: for (int i = 0; i< 15; i++) {leds[p4_vline4[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline5[i]] = CHSV (kithue, kitsat, 0);} break;
case 20: for (int i = 0; i< 15; i++) {leds[p4_vline5[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline4[i]] = CHSV (kithue, kitsat, 0);} break;  
case 21: for (int i = 0; i< 15; i++) {leds[p4_vline6[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline3[i]] = CHSV (kithue, kitsat, 0);} break;
case 22: for (int i = 0; i< 15; i++) {leds[p4_vline7[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline2[i]] = CHSV (kithue, kitsat, 0);} break;
case 23: for (int i = 0; i< 15; i++) {leds[p4_vline8[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline1[i]] = CHSV (kithue, kitsat, 0);} break;  
case 24: for (int i = 0; i< 15; i++) {leds[p4_vline9[i]] = CHSV (kithue, kitsat, 0);} for (int i = 0; i< 15; i++) {leds[p0_vline0[i]] = CHSV (kithue, kitsat, 0);} break;
  break;
}

}
LEDS.show();
} 
