/*
void dragons (){
  
if (dragonStageTimer > dragonStageTime) { dragonStage++; dragonStageTimer = 0; if (dragonStage >= 6){dragonStage = 0;} } 
  
  switch (dragonStage){
     case 0:    alternatingDragon (); break;
     case 1:    dancingDragon (); break;
     case 2:    diagonalDragon (); break;
     case 3:    shipsInTheNightDragon (); break;
     case 4:    shipsOffTheCoastDragon (); break;
     case 5:    wonkyBatsDragon (); break;
                 }  
  
}



void alternatingDragon (){
  
  if (dragonTimer <= dragonTime) {
 
 for (int i = 0; i< LED_COUNT; i = i+2){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }   
 for (int i = 1; i< LED_COUNT; i = i+2){leds[i] = CHSV (dragonHue, dragonSat, 0);  }        
 }


 if (dragonTimer > dragonTime) {
 
 for (int i = 0; i< LED_COUNT; i = i+2){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+2){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }      
 }

if (dragonTimer > dragonTime * 2) {dragonTimer = 0;}
 
 LEDS.show();  
  
  }


void dancingDragon () { 
 
  if (dragonTimer <= dragonTime) {
 
 for (int i = 0; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }   
 
 for (int i = 1; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, 0);  }        
 for (int i = 2; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 }


 if (dragonTimer > dragonTime && dragonTimer < dragonTime * 2) {
 
 for (int i = 0; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 2; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, 0);  }       
 }


 if (dragonTimer > dragonTime * 2) {
 
 for (int i = 0; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+3){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }       
 }


if (dragonTimer > dragonTime * 3) {dragonTimer = 0;}
 
 LEDS.show();  }  


 void diagonalDragon (){
  
    if (dragonTimer <= dragonTime) {
 
 for (int i = 0; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }   
 for (int i = 1; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }        
 for (int i = 2; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 3; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 }


 if (dragonTimer > dragonTime && dragonTimer < dragonTime * 2) {
 
 for (int i = 0; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 2; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 3; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }       
 }


 if (dragonTimer > dragonTime * 2 && dragonTimer < dragonTime * 3) {
 
 for (int i = 0; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 3; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }        
 }

 if (dragonTimer > dragonTime * 3 && dragonTimer < dragonTime * 4) {
 
 for (int i = 0; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+4){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }        
 }
 


if (dragonTimer > dragonTime * 4) {dragonTimer = 0;}
 
 LEDS.show();  
  
  }

void shipsInTheNightDragon () {
   
    if (dragonTimer <= dragonTime) {
 
 for (int i = 0; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }   
 for (int i = 1; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }        
 for (int i = 2; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 3; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 4; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 }


 if (dragonTimer > dragonTime && dragonTimer < dragonTime * 2) {
 
 for (int i = 0; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 2; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 3; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 4; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }       
 }


 if (dragonTimer > dragonTime * 2 && dragonTimer < dragonTime * 3) {
 
 for (int i = 0; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 3; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }    
 for (int i = 4; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }     
 }

 if (dragonTimer > dragonTime * 3 && dragonTimer < dragonTime * 4) {
 
 for (int i = 0; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }  
 for (int i = 4; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }       
 }
 

 if (dragonTimer > dragonTime * 4 && dragonTimer < dragonTime * 5) {
 
 for (int i = 0; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, 0);  }  
 for (int i = 4; i< LED_COUNT; i = i+5){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }       
 }



if (dragonTimer > dragonTime * 5) {dragonTimer = 0;}
 
 LEDS.show();  }


void shipsOffTheCoastDragon (){
    if (dragonTimer <= dragonTime) {
 
 for (int i = 0; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }   
 for (int i = 1; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }        
 for (int i = 2; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 3; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 4; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0); }
 for (int i = 5; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0); } 
 }


 if (dragonTimer > dragonTime && dragonTimer < dragonTime * 2) {
 
 for (int i = 0; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 2; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 3; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 4; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 5; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0); }     
 }


 if (dragonTimer > dragonTime * 2 && dragonTimer < dragonTime * 3) {
 
 for (int i = 0; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 3; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }    
 for (int i = 4; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 5; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0); }   
 }

 if (dragonTimer > dragonTime * 3 && dragonTimer < dragonTime * 4) {
 
 for (int i = 0; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }  
 for (int i = 4; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }    
 for (int i = 5; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0); }    
 }
 

 if (dragonTimer > dragonTime * 4 && dragonTimer < dragonTime * 5) {
 
 for (int i = 0; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }  
 for (int i = 4; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }    
 for (int i = 5; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0); }    
 }

 if (dragonTimer > dragonTime * 5 && dragonTimer < dragonTime * 6) {
 
 for (int i = 0; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }  
 for (int i = 4; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, 0);  }    
 for (int i = 5; i< LED_COUNT; i = i+6){leds[i] = CHSV (dragonHue, dragonSat, dragonVal); }    
 }

if (dragonTimer > dragonTime * 6) {dragonTimer = 0;}
 
 LEDS.show();  
  }


void wonkyBatsDragon (){
    if (dragonTimer <= dragonTime) {
 
 for (int i = 0; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }   
 for (int i = 1; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }        
 for (int i = 2; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 3; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 4; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); }
 for (int i = 5; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); } 
 for (int i = 6; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); } 
 }


 if (dragonTimer > dragonTime && dragonTimer < dragonTime * 2) {
 
 for (int i = 0; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 2; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 3; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  } 
 for (int i = 4; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 5; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); }    
 for (int i = 6; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); }  
 }


 if (dragonTimer > dragonTime * 2 && dragonTimer < dragonTime * 3) {
 
 for (int i = 0; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }
 for (int i = 3; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }    
 for (int i = 4; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 5; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); }   
 for (int i = 6; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); } 
 }

 if (dragonTimer > dragonTime * 3 && dragonTimer < dragonTime * 4) {
 
 for (int i = 0; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }  
 for (int i = 4; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }    
 for (int i = 5; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); }    
 for (int i = 6; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); } 
 }
 

 if (dragonTimer > dragonTime * 4 && dragonTimer < dragonTime * 5) {
 
 for (int i = 0; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }  
 for (int i = 4; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, dragonVal);  }    
 for (int i = 5; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); }    
 for (int i = 6; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); } 
 }

 if (dragonTimer > dragonTime * 5 && dragonTimer < dragonTime * 6) {
 
 for (int i = 0; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }  
 for (int i = 4; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }    
 for (int i = 5; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, dragonVal); }    
 for (int i = 6; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); } 
 }

 if (dragonTimer > dragonTime * 6 && dragonTimer < dragonTime * 7) {
 
 for (int i = 0; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }   
 for (int i = 1; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 2; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }
 for (int i = 3; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }  
 for (int i = 4; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0);  }    
 for (int i = 5; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, 0); }    
 for (int i = 6; i< LED_COUNT; i = i+7){leds[i] = CHSV (dragonHue, dragonSat, dragonVal); } 
 }

if (dragonTimer > dragonTime * 7) {dragonTimer = 0;}
 
 LEDS.show();  
  
  
  }  

*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
void redBluePurple () {

 if (dragonTimer <= 1000) {
 
 for (int i = 0; i< LED_COUNT; i = i+3){leds[i] = CHSV (0, dragonSat, dragonVal);  }   
 for (int i = 1; i< LED_COUNT; i = i+3){leds[i] = CHSV (200, dragonSat, dragonVal);  }     
 for (int i = 2; i< LED_COUNT; i = i+3){leds[i] = CHSV (160, dragonSat, dragonVal);  }  
 }

if (dragonTimer > 1000) {
 
 for (int i = 0; i< LED_COUNT; i = i+3){leds[i] = CHSV (160, dragonSat, dragonVal);  }   
 for (int i = 1; i< LED_COUNT; i = i+3){leds[i] = CHSV (200, dragonSat, dragonVal);  }     
 for (int i = 2; i< LED_COUNT; i = i+3){leds[i] = CHSV (0, dragonSat, dragonVal);  }  
}

if (dragonTimer > 2000) {dragonTimer = 0;}
 
 LEDS.show(); 
  
  }
*/
  
