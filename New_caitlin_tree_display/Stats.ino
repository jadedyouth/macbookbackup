void StatDisplay () {
  
  
  
  
    
tft.setRotation(3);    

  tft.setTextColor(ILI9341_GREEN, ILI9341_BLACK);  tft.setTextSize(2);
 


tft.setCursor(0, 0);
   tft.println("HUE:");

       tft.setCursor(50, 0); 
        tft.println(potZero); 

//darkens the unused extra digets
if (potZero < 100) {
tft.setCursor(73, 0);
   tft.println(" "); }

if (potZero < 10) {
tft.setCursor(62, 0);
   tft.println(" "); }   

//tft.println("Rainbow 2");
//tft.println("         ");


/////////////////////////////
if (potZero < 21) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_RED, ILI9341_BLACK);   tft.println("Reds      "); }

if (potZero >= 21 && potZero < 66) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_YELLOW, ILI9341_BLACK);   tft.println("Yellows   "); }

if (potZero >= 66 && potZero < 121) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_DARKGREEN, ILI9341_BLACK);   tft.println("Greens    "); }

if (potZero >= 121 && potZero < 154) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_CYAN, ILI9341_BLACK);   tft.println("Blues     "); }

if (potZero >= 154 && potZero < 180) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_BLUE, ILI9341_BLACK);   tft.println("Blues     "); }

if (potZero >= 180 && potZero < 200) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_PURPLE, ILI9341_BLACK);   tft.println("Purples   "); }



  


//////////////////////////////////////////////////////////////////////////////////////////Start Mode 2 rainbows
if (Mode == 0 || Mode == 4) {

if (potZero >= 200 && potZero < 220) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_PINK, ILI9341_BLACK);   tft.println("Pinks     "); }
                                               

if (potZero >= 220 && potZero < 230) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_PINK, ILI9341_BLACK);   tft.println("          "); }


if (potZero >= 230 && potZero < 250) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_RED, ILI9341_BLACK);     tft.println("R"); 

tft.setCursor(103, 0);
tft.setTextColor(ILI9341_ORANGE, ILI9341_BLACK);     tft.println("a"); 

tft.setCursor(116, 0);
tft.setTextColor(ILI9341_YELLOW, ILI9341_BLACK);     tft.println("i"); 

tft.setCursor(129, 0);
tft.setTextColor(ILI9341_GREEN, ILI9341_BLACK);     tft.println("n"); 

tft.setCursor(143, 0);
tft.setTextColor(ILI9341_BLUE, ILI9341_BLACK);     tft.println("b"); 

tft.setCursor(159, 0);
tft.setTextColor(ILI9341_PURPLE, ILI9341_BLACK);     tft.println("o"); 

tft.setCursor(173, 0);
tft.setTextColor(ILI9341_PINK, ILI9341_BLACK);     tft.println("w"); 

tft.setCursor(195, 0);
tft.setTextColor(ILI9341_RED, ILI9341_BLACK);     tft.println("1"); 
}


if (potZero > 250) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_RED, ILI9341_BLACK);     tft.println("R"); 

tft.setCursor(103, 0);
tft.setTextColor(ILI9341_ORANGE, ILI9341_BLACK);     tft.println("a"); 

tft.setCursor(116, 0);
tft.setTextColor(ILI9341_YELLOW, ILI9341_BLACK);     tft.println("i"); 

tft.setCursor(129, 0);
tft.setTextColor(ILI9341_GREEN, ILI9341_BLACK);     tft.println("n"); 

tft.setCursor(143, 0);
tft.setTextColor(ILI9341_BLUE, ILI9341_BLACK);     tft.println("b"); 

tft.setCursor(159, 0);
tft.setTextColor(ILI9341_PURPLE, ILI9341_BLACK);     tft.println("o"); 

tft.setCursor(173, 0);
tft.setTextColor(ILI9341_PINK, ILI9341_BLACK);     tft.println("w"); 

tft.setCursor(195, 0);
tft.setTextColor(ILI9341_RED, ILI9341_BLACK);     tft.println("2"); 
}

}             ///////////////////////////////////////////////////////////////end mode 2 rainbows





//////////////////////////////////////////////////////////////////////////////////////////Start Mode 1 rainbow
if (Mode == 1 || Mode == 2 || Mode == 3) {

if (potZero >= 200 && potZero < 240) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_PINK, ILI9341_BLACK);   tft.println("Pinks     ");  }

if (potZero >= 240 && potZero < 250) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_PINK, ILI9341_BLACK);   tft.println("          "); }





if (potZero > 250) {
tft.setCursor(90, 0);
tft.setTextColor(ILI9341_RED, ILI9341_BLACK);     tft.println("R"); 

tft.setCursor(103, 0);
tft.setTextColor(ILI9341_ORANGE, ILI9341_BLACK);     tft.println("a"); 

tft.setCursor(116, 0);
tft.setTextColor(ILI9341_YELLOW, ILI9341_BLACK);     tft.println("i"); 

tft.setCursor(129, 0);
tft.setTextColor(ILI9341_GREEN, ILI9341_BLACK);     tft.println("n"); 

tft.setCursor(143, 0);
tft.setTextColor(ILI9341_BLUE, ILI9341_BLACK);     tft.println("b"); 

tft.setCursor(159, 0);
tft.setTextColor(ILI9341_PURPLE, ILI9341_BLACK);     tft.println("o"); 

tft.setCursor(173, 0);
tft.setTextColor(ILI9341_PINK, ILI9341_BLACK);     tft.println("w"); 

tft.setCursor(195, 0);
tft.setTextColor(ILI9341_RED, ILI9341_BLACK);     tft.println("1"); 
}

}             ///////////////////////////////////////////////////////////////end mode 1 rainbow



////////////////////////////////////saturation display


tft.setCursor(0, 30);
if (potOne <= 10) { tft.setTextColor(ILI9341_WHITE, ILI9341_BLACK);  }
else  tft.setTextColor(ILI9341_GREEN, ILI9341_BLACK);  

potOneConverted = potOne*2.55;

   tft.println("SATURATION:");

       tft.setCursor(130, 30); 
        tft.println(potOneConverted); 


//darkens the unused extra digets
if (potOneConverted < 100) {
tft.setCursor(153, 30);
   tft.println(" "); }

if (potOneConverted < 10) {
tft.setCursor(142, 30);
   tft.println(" "); }  

////////////////////////////////////brightess display
tft.setCursor(0, 60);
tft.setTextColor(ILI9341_GREEN, ILI9341_BLACK);  
  if (potTwo == 0) {tft.println("LIGHTS OUT   ");}

else {
   
   tft.println("BRIGHTNESS:");


potTwoConverted = potTwo/2.55;
       tft.setCursor(130, 60); 
        tft.println(potTwoConverted);  }


//darkens the unused extra digets
if (potTwoConverted < 100) {
tft.setCursor(153, 60);
   tft.println(" "); }

if (potTwoConverted < 10) {
tft.setCursor(142, 60);
   tft.println(" "); }  

////////////////////////////////////speed display


  tft.setTextColor(ILI9341_BLUE,ILI9341_BLACK); 

tft.setCursor(210, 0);
   tft.println("SPEED:");

       tft.setCursor(280, 0); 

   potThreeConverted =  potThree/2.55;
        tft.println(100-potThreeConverted);   


//darkens the unused extra digets
if (100-potThreeConverted < 100) {
tft.setCursor(303, 0);
   tft.println(" "); }

if (100-potThreeConverted < 10) {
tft.setCursor(292, 0);
   tft.println(" "); }  



////////////////////////////////////mode 0 display


tft.setCursor(220, 30);
   tft.println("MODE:");

       tft.setCursor(280, 30); 
        tft.println(potFour);


//darkens the unused extra digets
if (potFour < 100) {
tft.setCursor(303, 30);
   tft.println(" "); }

if (potFour < 10) {
tft.setCursor(292, 30);
   tft.println(" "); }  
        
////////////////////////////////////mode 1 display


tft.setCursor(220, 60);
   tft.println("MODE:");

       tft.setCursor(280, 60); 
        tft.println(potFive);

//darkens the unused extra digets
if (potFive < 100) {
tft.setCursor(303, 90);
   tft.println(" "); }

if (potFive < 10) {
tft.setCursor(292, 90);
   tft.println(" "); }  
        
tft.setTextColor(ILI9341_BLUE, ILI9341_BLACK);  
if (Mode == 0) {tft.setCursor(110, 85);   tft.println("       SOLID ON"); }
if (Mode == 1) {tft.setCursor(110, 85);   tft.println("        BLINKER"); }
if (Mode == 2) {tft.setCursor(110, 85);   tft.println("          FADER"); }
if (Mode == 3) {tft.setCursor(110, 85);   tft.println("    GROUP FLASH"); }
if (Mode == 4) {tft.setCursor(110, 85);   tft.println("    FIFTY FLASH"); }
if (Mode == 5) {tft.setCursor(110, 85);   tft.println("ALTERNATE FLASH"); }
if (Mode == 6) {tft.setCursor(110, 85);   tft.println("  4 TRAINS FADE"); }
if (Mode == 7) {tft.setCursor(110, 85);   tft.println("     LONG TRAIN"); }
if (Mode == 8) {tft.setCursor(110, 85);   tft.println("    TRAIN CRASH"); }
if (Mode == 9) {tft.setCursor(110, 85);   tft.println("          FAIRY"); }
if (Mode == 10){tft.setCursor(110, 85);   tft.println("        FAIRIES"); }
if (Mode == 11){tft.setCursor(110, 85);   tft.println("    DARKEN THRU"); }
if (Mode == 12){tft.setCursor(110, 85);   tft.println("  DARKEN THRU 2"); }
if (Mode == 13){tft.setCursor(110, 85);   tft.println("  DARKEN THRU 4"); }
if (Mode == 14){tft.setCursor(110, 85);   tft.println("      FIREFLIES"); }
if (Mode == 15){tft.setCursor(110, 85);   tft.println("SATURATION FADE"); }
if (Mode == 16){tft.setCursor(110, 85);   tft.println("  COLOUR SWOOSH"); }
if (Mode == 17){tft.setCursor(110, 85);   tft.println("   DIGITAL RAIN"); }
if (Mode == 18){tft.setCursor(110, 85);   tft.println("  DIGITAL TRAIN"); }

                                
 /*
 if (clearer < 200) {  tft.fillRect(50, 0, 40, 20, ILI9341_BLACK); tft.fillRect(280, 60, 40, 20, ILI9341_BLACK);}
 if (clearer > 200 && clearer < 400) { tft.fillRect(130, 30, 40, 20, ILI9341_BLACK); tft.fillRect(280, 0, 40, 20, ILI9341_BLACK);}
 if (clearer > 400 && clearer < 600) {tft.fillRect(130, 60, 40, 20, ILI9341_BLACK); tft.fillRect(280, 30, 40, 20, ILI9341_BLACK);  }

 if (clearer > 600 && clearer < 800) { tft.fillRect(280, 0, 40, 20, ILI9341_BLACK); tft.fillRect(130, 60, 40, 20, ILI9341_BLACK); }
 if (clearer > 800 && clearer < 1000) { tft.fillRect(280, 30, 40, 20, ILI9341_BLACK); tft.fillRect(50, 0, 40, 20, ILI9341_BLACK);}
 if (clearer > 1000 && clearer < 1200) { tft.fillRect(280, 60, 40, 20, ILI9341_BLACK); tft.fillRect(130, 30, 40, 20, ILI9341_BLACK); }

 if (clearer > 1200) {  clearer = 0; }
*/

if (clearer >= 1500) { /*
tft.fillRect(50, 0, 40, 20, ILI9341_BLACK);
tft.fillRect(130, 30, 40, 20, ILI9341_BLACK);
tft.fillRect(130, 60, 40, 20, ILI9341_BLACK); 
tft.fillRect(280, 0, 40, 20, ILI9341_BLACK);
tft.fillRect(280, 30, 40, 20, ILI9341_BLACK);
tft.fillRect(280, 60, 40, 20, ILI9341_BLACK); 

  */  clearer = 0; JokeGate++; JokeMd ++;}
  
  
  
  
  
  
  
  }
