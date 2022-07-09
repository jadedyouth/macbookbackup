void AllRainbow () {
  
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, 255); } if (Timer >= 100) { hue++;  Timer = 0; }

  
  }

void SlowChange (){
  
 
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, val); } 

if (Timer <1000) { val = 255;} 
if (Timer >1000 && Timer < 2000) {val = 0;}
if (Timer >2000) {Timer = 0; hue = random (0,255); }
 
  
  }

/*
void FastChange (){
  
 
for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(hue, 255, val); } 

if (Timer <250) { val = 100;} 
if (Timer >250 && Timer < 500) {val = 0;}
if (Timer >500) {Timer = 0; hue = random (0,255); }
 
  
  }  
*/


  void RainbowTrain () {
  for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  

 
 if (index <= 47) {   leds[index] = CHSV(190, 255, 255); }
 if (index + 1 <= 47) {   leds[index+1] = CHSV(160, 255, 255); }
 if (index + 2 <= 47) {   leds[index+2] = CHSV(90, 255, 255); }
 if (index + 3 <= 47) {   leds[index+3] = CHSV(45, 255, 255); }
 if (index + 4 <= 47) {   leds[index+4] = CHSV(35, 255, 255); }
 if (index + 5 <= 47) {  leds[index+5] = CHSV(0, 255, 255); }
  

if (Timer >= 200) {index++; Timer = 0;}


if (index >= 48) {index = 0;}   
    
    
    }


 void Swap (){

  if (gate == 0) {index = 0; undex = 47; gate = 1;}

for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CHSV(0, 0, 0); }  

if (index <= 47) {   leds[index] = CHSV(hue, 255, 255); }
if (undex >= 0) {   leds[undex] = CHSV(uhue, 255, 255); }




if (Timer >= 250) {index++; undex--; Timer = 0;}

if (index >= 48 && undex <= 0) {index = 0; undex = 47; }  


if (index == 23) {hue = random (0,255); uhue = random (0,255);}
}   



void Fireflies () {
if (Timer > 750) {

index = random (0, NUM_LEDS);
hue = random (0,35);

leds[index] = CHSV(hue, 255, 255); 

undex = random (0, NUM_LEDS);
leds[undex] = CHSV(0, 0, 0); 


Timer = 0;}

}
