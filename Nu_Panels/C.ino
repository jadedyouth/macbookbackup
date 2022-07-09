/*

void fireworksOne (){
  
  
  
  if (fireworksStage == 0) {for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);}  x = random (0,10); y = random (0,15); hue = random (0,255); middleHue = hue - 20; verticalFactor = 0; horizontalFactor = 0; fireworksStage = 1;}

if (fireworksStage == 1) {verticalFactor++; horizontalFactor++; delay (80); if (verticalFactor > 8) {fireworksStage = 0;}   }



//if (x + horizontalFactor < 10 && x - horizontalFactor >= 0 && y + verticalFactor < 15 && y - verticalFactor >= 0) { } //global constraint
 
if (x < 10 && x >= 0 && y < 14 && y >= 0)                 {leds[XY(x, y)]  = CHSV(middleHue, sat, val); }                                                          //centre 
if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(hue, sat, val);}                                                 //12
if (x + horizontalFactor < 10 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);}  //1:30
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(hue, sat, val); }                                            //3
if (x + horizontalFactor < 10 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}  //4:30
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //6
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}   //7:30
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y)]  = CHSV(hue, sat, val); }                                             //9
if (x - horizontalFactor >= 0 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);} //10:30



LEDS.show();   
   }



void fireworksTwo (){
  
  for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} 

if (fireworksStage == 0) { x = random (0,10); y = random (0,15); hue = random (0,255); middleHue = hue - 0; verticalFactor = 0; horizontalFactor = 0; fireworksStage = 1;}

if (fireworksStage == 1) {verticalFactor++; horizontalFactor++; delay (130); if (verticalFactor > 8) {fireworksStage = 0;}   }


//if (x + horizontalFactor < 10 && x - horizontalFactor >= 0 && y + verticalFactor < 15 && y - verticalFactor >= 0) { } //global constraint
 
if (x < 10 && x >= 0 && y < 14 && y >= 0)                 {leds[XY(x, y)]  = CHSV(middleHue, sat, val); }                                                          //centre 
if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(hue, sat, val);}                                                 //12
if (x + horizontalFactor < 10 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);}  //1:30
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(hue, sat, val); }                                            //3
if (x + horizontalFactor < 10 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}  //4:30
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //6
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}   //7:30
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y)]  = CHSV(hue, sat, val); }                                             //9
if (x - horizontalFactor >= 0 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);} //10:30



///flash 2
if (AAfireworksStage == 0) {AAx = random (0,10); AAy = random (0,15); AAhue = random (0,255); AAmiddleHue = AAhue - 0; AAverticalFactor = 0; AAhorizontalFactor = 0; AAfireworksStage = 1;}

if (AAfireworksStage == 1) {AAverticalFactor++; AAhorizontalFactor++; if (AAverticalFactor > 8) {AAseparater = random (0,10); if (AAseparater > 7) {  AAfireworksStage = 0; } }   }

if (AAx < 10 && AAx >= 0 && AAy < 14 && AAy >= 0)                 {leds[XY(AAx, AAy)]  = CHSV(AAmiddleHue, AAsat, AAval); }                                                          //centre 
if (AAy + AAverticalFactor < 15)                              {leds[XY(AAx, AAy + AAverticalFactor)]  = CHSV(AAhue, AAsat, AAval);}                                                 //12
if (AAx + AAhorizontalFactor < 10 && AAy + AAverticalFactor < 15 && AAhorizontalFactor > 1 && AAverticalFactor > 1) {leds[XY(AAx + AAhorizontalFactor, AAy + AAverticalFactor)]  = CHSV(AAhue, AAsat, AAval);}  //1:30
if (AAx + AAhorizontalFactor < 10)                            {leds[XY(AAx + AAhorizontalFactor, AAy)]  = CHSV(AAhue, AAsat, AAval); }                                            //3
if (AAx + AAhorizontalFactor < 10 && AAy - AAverticalFactor >= 0 && AAhorizontalFactor > 1 && AAverticalFactor > 1) {leds[XY(AAx + AAhorizontalFactor, AAy - AAverticalFactor)]  = CHSV(AAhue, AAsat, AAval);}  //4:30
if (AAy - AAverticalFactor >= 0)                              {leds[XY(AAx, AAy - AAverticalFactor)]  = CHSV(AAhue, AAsat, AAval); }                                                 //6
if (AAx - AAhorizontalFactor >= 0 && AAy - AAverticalFactor >= 0 && AAhorizontalFactor > 1 && AAverticalFactor > 1) {leds[XY(AAx - AAhorizontalFactor, AAy - AAverticalFactor)]  = CHSV(AAhue, AAsat, AAval);}   //7:30
if (AAx - AAhorizontalFactor >= 0) {leds[XY(AAx - AAhorizontalFactor, AAy)]  = CHSV(AAhue, AAsat, AAval); }                                             //9
if (AAx - AAhorizontalFactor >= 0 && AAy + AAverticalFactor < 15 && AAhorizontalFactor > 1 && AAverticalFactor > 1){leds[XY(AAx - AAhorizontalFactor, AAy + AAverticalFactor)]  = CHSV(AAhue, AAsat, AAval);} //10:30


///flash 3
if (ABfireworksStage == 0) {ABx = random (0,10); ABy = random (0,15); ABhue = random (0,255); ABmiddleHue = ABhue - 0; ABverticalFactor = 0; ABhorizontalFactor = 0; ABfireworksStage = 1;}

if (ABfireworksStage == 1) {ABverticalFactor++; ABhorizontalFactor++; if (ABverticalFactor > 8) {ABseparater = random (0,10); if (ABseparater > 8) {  ABfireworksStage = 0; } }   }

if (ABx < 10 && ABx >= 0 && ABy < 14 && ABy >= 0)                 {leds[XY(ABx, ABy)]  = CHSV(ABmiddleHue, ABsat, ABval); }                                                          //centre 
if (ABy + ABverticalFactor < 15)                              {leds[XY(ABx, ABy + ABverticalFactor)]  = CHSV(ABhue, ABsat, ABval);}                                                 //12
if (ABx + ABhorizontalFactor < 10 && ABy + ABverticalFactor < 15 && ABhorizontalFactor > 1 && ABverticalFactor > 1) {leds[XY(ABx + ABhorizontalFactor, ABy + ABverticalFactor)]  = CHSV(ABhue, ABsat, ABval);}  //1:30
if (ABx + ABhorizontalFactor < 10)                            {leds[XY(ABx + ABhorizontalFactor, ABy)]  = CHSV(ABhue, ABsat, ABval); }                                            //3
if (ABx + ABhorizontalFactor < 10 && ABy - ABverticalFactor >= 0 && ABhorizontalFactor > 1 && ABverticalFactor > 1) {leds[XY(ABx + ABhorizontalFactor, ABy - ABverticalFactor)]  = CHSV(ABhue, ABsat, ABval);}  //4:30
if (ABy - ABverticalFactor >= 0)                              {leds[XY(ABx, ABy - ABverticalFactor)]  = CHSV(ABhue, ABsat, ABval); }                                                 //6
if (ABx - ABhorizontalFactor >= 0 && ABy - ABverticalFactor >= 0 && ABhorizontalFactor > 1 && ABverticalFactor > 1) {leds[XY(ABx - ABhorizontalFactor, ABy - ABverticalFactor)]  = CHSV(ABhue, ABsat, ABval);}   //7:30
if (ABx - ABhorizontalFactor >= 0) {leds[XY(ABx - ABhorizontalFactor, ABy)]  = CHSV(ABhue, ABsat, ABval); }                                             //9
if (ABx - ABhorizontalFactor >= 0 && ABy + ABverticalFactor < 15 && ABhorizontalFactor > 1 && ABverticalFactor > 1){leds[XY(ABx - ABhorizontalFactor, ABy + ABverticalFactor)]  = CHSV(ABhue, ABsat, ABval);} //10:30



LEDS.show();   

  }


void fireWorksThree () {
   if (fireworksStage == 0) {for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);}  x = 5; y = 7; hue = random (0,255); middleHue = hue - 20; verticalFactor = 0; horizontalFactor = 0; fireworksStage = 1;}

if (fireworksStage == 1) {verticalFactor++; horizontalFactor++; delay (40); if (verticalFactor > 5) {fireworksStage = 2;}   }

if (fireworksStage == 2) {verticalFactor--; horizontalFactor--; delay (40); if (verticalFactor <= 0) {fireworksStage = 3; fireCounter++; if (fireCounter > 7) {fireCounter = 0;  fireworksStage = 0;}}  }

if (fireworksStage == 3) {verticalFactor++; horizontalFactor++; delay (40); if (verticalFactor > 5) {fireworksStage = 2;  }   }

//if (x + horizontalFactor < 10 && x - horizontalFactor >= 0 && y + verticalFactor < 15 && y - verticalFactor >= 0) { } //global constraint

if (fireworksStage == 1) {
 
if (x < 10 && x >= 0 && y < 14 && y >= 0)                 {leds[XY(x, y)]  = CHSV(middleHue, sat, val); }                                                          //centre 
if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(hue, sat, val);}                                                 //12
if (x + horizontalFactor < 10 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);}  //1:30
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(hue, sat, val); }                                            //3
if (x + horizontalFactor < 10 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}  //4:30
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //6
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}   //7:30
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                                         //9
if (x - horizontalFactor >= 0 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);} //10:30

}

if (fireworksStage == 2) {
if (x + horizontalFactor < 10 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(0, 0, 0);}  //1:30
if (x + horizontalFactor < 10 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(0, 0, 0);}  //4:30
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(0, 0, 0);}   //7:30
if (x - horizontalFactor >= 0 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(0, 0, 0);} //10:30

if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(0, 0, 0); }                                                //3
if (x - horizontalFactor >= 0)                            {leds[XY(x - horizontalFactor, y)]  = CHSV(0, 0, 0); }                                                                         //9

if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(0, 0, 0);}                                                 //12
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(0, 0, 0); }                                                 //6

}

if (fireworksStage == 3) {
if (x + horizontalFactor < 10 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);}  //1:30
if (x + horizontalFactor < 10 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}  //4:30
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}   //7:30
if (x - horizontalFactor >= 0 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);} //10:30

if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                          //3
if (x - horizontalFactor >= 0)                             {leds[XY(x - horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                                                    //9

if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(hue, sat, val);}                                                 //12
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //6
}

LEDS.show();   

 
  } 



void fireWorksThreePointFive () {
   if (fireworksStage == 0) {for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);} fireWorksThreePointFiveDirections ();  hue = random (0,255); middleHue = hue - 20; verticalFactor = 0; horizontalFactor = 0; fireworksStage = 1;}

if (fireworksStage == 1) {verticalFactor++; horizontalFactor++; delay (40); if (verticalFactor > 5) {fireworksStage = 2;}   }

if (fireworksStage == 2) {verticalFactor--; horizontalFactor--; delay (40); if (verticalFactor <= 0) {fireworksStage = 3; fireCounter++; if (fireCounter > 3) {fireCounter = 0;  fireworksStage = 0;}}  }

if (fireworksStage == 3) {verticalFactor++; horizontalFactor++; delay (40); if (verticalFactor > 5) {fireworksStage = 2;  }   }

//if (x + horizontalFactor < 10 && x - horizontalFactor >= 0 && y + verticalFactor < 15 && y - verticalFactor >= 0) { } //global constraint

if (fireworksStage == 1) {
 
if (x < 10 && x >= 0 && y < 14 && y >= 0)                 {leds[XY(x, y)]  = CHSV(middleHue, sat, val); }                                                          //centre 
if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(hue, sat, val);}                                                 //12
if (x + horizontalFactor < 10 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);}  //1:30
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(hue, sat, val); }                                            //3
if (x + horizontalFactor < 10 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}  //4:30
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //6
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}   //7:30
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                                         //9
if (x - horizontalFactor >= 0 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);} //10:30

}

if (fireworksStage == 2) {
if (x + horizontalFactor < 10 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(0, 0, 0);}  //1:30
if (x + horizontalFactor < 10 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(0, 0, 0);}  //4:30
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(0, 0, 0);}   //7:30
if (x - horizontalFactor >= 0 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(0, 0, 0);} //10:30

if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(0, 0, 0); }                                                //3
if (x - horizontalFactor >= 0)                            {leds[XY(x - horizontalFactor, y)]  = CHSV(0, 0, 0); }                                                                         //9

if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(0, 0, 0);}                                                 //12
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(0, 0, 0); }                                                 //6

}

if (fireworksStage == 3) {
if (x + horizontalFactor < 10 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);}  //1:30
if (x + horizontalFactor < 10 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}  //4:30
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0 && horizontalFactor > 1 && verticalFactor > 1) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}   //7:30
if (x - horizontalFactor >= 0 && y + verticalFactor < 15 && horizontalFactor > 1 && verticalFactor > 1){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);} //10:30

if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                          //3
if (x - horizontalFactor >= 0)                             {leds[XY(x - horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                                                    //9

if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(hue, sat, val);}                                                 //12
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //6
}

LEDS.show();   

 
  }   



void fireWorksThreePointFiveDirections (){
 // if (x < 6 && y == 3) {x = x+1; y = 3;} if (x >=6 && y < 11) {y++;} if (x > 3 && y > 10) {x--;} if (x == 3 && y > 3) { y--;} //goes in a square

fireXYindex++; if (fireXYindex == 6) {fireXYindex = 0;}

switch (fireXYindex) {
  case 0: x = 3; y = 3; break;
  case 1: x = 7; y = 7; break;
  case 2: x = 3; y = 10; break;
  case 3: x = 7; y = 3; break;
  case 4: x = 3; y = 7; break;
  case 5: x = 7; y = 10; break;
  
  
  break;}
  
  }


void fireWorksBoxesDirections (){


y++; if (y >= 15){ y = 1; hue = random (0,255); x = random (2,8); }


  }



void fireWorksBoxes (){
  
  
  if (fireworksStage == 0) {  for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 0, 0);}   verticalFactor = 0; horizontalFactor = 0; fireworksStage = 1;}

if (fireworksStage == 1) {verticalFactor++; horizontalFactor++; delay (100); if (verticalFactor > 2) {fireworksStage = 2;}   }

if (fireworksStage == 2) {verticalFactor--; horizontalFactor--; delay (100); if (verticalFactor <= 0) {fireWorksBoxesDirections (); fireworksStage = 3; fireCounter++; if (fireCounter > 3) {fireCounter = 0;  fireworksStage = 0;}}  }

if (fireworksStage == 3) {verticalFactor++; horizontalFactor++; delay (100); if (verticalFactor > 2) {fireworksStage = 2;   }   }

//if (x + horizontalFactor < 10 && x - horizontalFactor >= 0 && y + verticalFactor < 15 && y - verticalFactor >= 0) { } //global constraint

if (fireworksStage == 1) {
 
if (x < 10 && x >= 0 && y < 14 && y >= 0)                 {leds[XY(x, y)]  = CHSV(hue, sat, val); }                                                          //centre 
if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(hue, sat, val);}                                                 //12
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x + 1, y + verticalFactor) ]  = CHSV(hue, sat, val);}                          //verticle right of 12
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x - 1, y + verticalFactor) ]  = CHSV(hue, sat, val);}                          //verticle left of 12
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);}  //1:30
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y + 1)]  = CHSV(hue, sat, val); }                                            //horizontal above 3
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y - 1)]  = CHSV(hue, sat, val); }                                            //horizontal below 3
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(hue, sat, val); }                                            //3
if (x + horizontalFactor < 10 && y - verticalFactor >= 0) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}  //4:30
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //6
if (y - verticalFactor >= 0)                              {leds[XY(x - 1, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //verticle left of 6
if (y - verticalFactor >= 0)                              {leds[XY(x + 1, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //verticle right of 6
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}   //7:30
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                                         //9
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y + 1)]  = CHSV(hue, sat, val); }                                                                         //horizontal above 9
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y - 1)]  = CHSV(hue, sat, val); }                                                                         //horizontal below 9
if (x - horizontalFactor >= 0 && y + verticalFactor < 15){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);} //10:30

}

if (fireworksStage == 2) {
  if (x < 10 && x >= 0 && y < 14 && y >= 0)                 {leds[XY(x, y)]  = CHSV(hue, sat, val); }                                                          //centre 
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x + 1, y + verticalFactor) ]  = CHSV(0, 0, 0);}                          //verticle right of 12
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x - 1, y + verticalFactor) ]  = CHSV(0, 0, 0);}                          //verticle left of 12
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(0, 0, 0);}  //1:30

if (x + horizontalFactor < 10 && y - verticalFactor >= 0) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(0, 0, 0);}  //4:30
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(0, 0, 0);}   //7:30
if (x - horizontalFactor >= 0 && y + verticalFactor < 15){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(0, 0, 0);} //10:30

if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(0, 0, 0); }                                                //3
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y + 1)]  = CHSV(0, 0, 0); }                                            //horizontal above 3
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y - 1)]  = CHSV(0, 0, 0); }                                            //horizontal below 3
if (x - horizontalFactor >= 0)                            {leds[XY(x - horizontalFactor, y)]  = CHSV(0, 0, 0); }                                                                         //9
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y + 1)]  = CHSV(0, 0, 0); }                                                                         //horizontal above 9
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y - 1)]  = CHSV(0, 0, 0); }                                                                         //horizontal below 9

if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(0, 0, 0);}                                                 //12
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(0, 0, 0); }                                                 //6
if (y - verticalFactor >= 0)                              {leds[XY(x - 1, y - verticalFactor)]  = CHSV(0, 0, 0); }                                                 //verticle left of 6
if (y - verticalFactor >= 0)                              {leds[XY(x + 1, y - verticalFactor)]  = CHSV(0, 0, 0); }                                                 //verticle right of 6

}

if (fireworksStage == 3) {
  if (x < 10 && x >= 0 && y < 14 && y >= 0)                 {leds[XY(x, y)]  = CHSV(hue, sat, val); }                                                          //centre 
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x + 1, y + verticalFactor) ]  = CHSV(hue, sat, val);}                          //verticle right of 12
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x - 1, y + verticalFactor) ]  = CHSV(hue, sat, val);}                          //verticle left of 12
if (x + horizontalFactor < 10 && y + verticalFactor < 15) {leds[XY(x + horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);}  //1:30
if (x + horizontalFactor < 10 && y - verticalFactor >= 0) {leds[XY(x + horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}  //4:30
if (x - horizontalFactor >= 0 && y - verticalFactor >= 0) {leds[XY(x - horizontalFactor, y - verticalFactor)]  = CHSV(hue, sat, val);}   //7:30
if (x - horizontalFactor >= 0 && y + verticalFactor < 15){leds[XY(x - horizontalFactor, y + verticalFactor)]  = CHSV(hue, sat, val);} //10:30

if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                          //3
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y + 1)]  = CHSV(hue, sat, val); }                                            //horizontal above 3
if (x + horizontalFactor < 10)                            {leds[XY(x + horizontalFactor, y - 1)]  = CHSV(hue, sat, val); }                                            //horizontal below 3
if (x - horizontalFactor >= 0)                             {leds[XY(x - horizontalFactor, y)]  = CHSV(hue, sat, val); }                                                                                    //9
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y + 1)]  = CHSV(hue, sat, val); }                                                                         //horizontal above 9
if (x - horizontalFactor >= 0) {leds[XY(x - horizontalFactor, y - 1)]  = CHSV(hue, sat, val); }                                                                         //horizontal below 9

if (y + verticalFactor < 15)                              {leds[XY(x, y + verticalFactor)]  = CHSV(hue, sat, val);}                                                 //12
if (y - verticalFactor >= 0)                              {leds[XY(x, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //6
if (y - verticalFactor >= 0)                              {leds[XY(x - 1, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //verticle left of 6
if (y - verticalFactor >= 0)                              {leds[XY(x + 1, y - verticalFactor)]  = CHSV(hue, sat, val); }                                                 //verticle right of 6
}

LEDS.show();   


  
  }   */
