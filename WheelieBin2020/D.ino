void Loop_Nine () {
  
  
  
 
if (gate == 0) {
  
if (index >= halfdex) {gate = 1;  }

  leds[index] = CHSV(hue, 255, 255);
 
 index ++;

Serial.println (index);


  leds[undex] = CHSV(hue, 255, 255);
 
 undex --;




}

if (gate == 1) {
  
if (index == 15) {gate = 2; }

  leds[index] = CHSV(0, 0, 0);
 
 index --;


  leds[undex] = CHSV(0, 0, 0);
 
 undex ++;


}


if (gate == 2) {gate = 0; hue = random (0,255); 
for(int i = 0; i < 15; i++) { leds[i] = CHSV(hue, 255, 255); } 
for(int i = 125; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, 255); } 

halfdex = random (16, 70); }




 FastLED.delay (10);

   
  FastLED.show();  
 
  
  }

void  Loop_Ten (){
    
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, 255); }   

hue++;
     FastLED.delay (15);

   
  FastLED.show();  
    }


void  Loop_Eleven (){
    
  leds[index] = CHSV(hue, 255, 255);    
index ++; if (index >= NUM_LEDS) {index = 0;}
hue++;
     FastLED.delay (15);

   
  FastLED.show();  
    }    
