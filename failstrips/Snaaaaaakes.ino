
byte snakesMode;
byte snakesCondition;
int snakeSpeed = 200;
int snakeResetCounter;

byte snake0x;
byte snake0y;
byte snake0direction;
int snake0counter;
byte snake0hue;
byte snake0sat;
byte snake0val;
elapsedMillis snake0timer;
byte snake0DirectionMem;


byte snake1x;
byte snake1y;
byte snake1direction;
int snake1counter;
byte snake1hue;
byte snake1sat;
byte snake1val;
elapsedMillis snake1timer;
byte snake1DirectionMem;



void snakesOnAPlane (){
  
if (snakesMode == 0){  

if (snakesCondition == 0){ snake0x = 0; snake0y = 7;   snake0direction = 0;  snake0hue = 150; snake0sat = 255; snake0val = 155;  snake0timer = 0;
 snake1x = 49; snake1y = 7;  snake1direction = 2; snake1hue = 0; snake1sat = 255; snake1val = 155; snakesCondition = 1; }





if (snakesCondition == 1){ 

if (snake0counter > 4) {here0: snake0direction = random (0,4);  
if (snake0direction == snake0DirectionMem) {goto here0;}
if (snake0direction == 0 && snake0x == 49) {goto here0;}
if (snake0direction == 2 && snake0x == 0) {goto here0;}  
if (snake0direction == 1 && snake0y == 14) {goto here0;}  
if (snake0direction == 3 && snake0y == 0) {goto here0;}  
  snake0DirectionMem = snake0direction;  snake0counter = 0;
  Serial.println (snakeResetCounter); 
  }

  


leds[ XY(snake0x, snake0y)]  = CHSV( snake0hue, snake0sat, 155);

if (snake0direction == 0){ if (snake0timer > snakeSpeed) { if (snake0x < 49) { snake0x++;}  snake0counter++; snakeResetCounter++;  snake0timer = 0;} }

if (snake0direction == 1){ if (snake0timer > snakeSpeed) {  if (snake0y < 14){ snake0y++;}  snake0counter++;  snakeResetCounter++;  snake0timer = 0;} }

if (snake0direction == 2){ if (snake0timer > snakeSpeed) { if (snake0x > 0) { snake0x--;}  snake0counter++;  snakeResetCounter++;  snake0timer = 0;} }

if (snake0direction == 3){ if (snake0timer > snakeSpeed) {  if (snake0y > 0){ snake0y--;} snake0counter++; snakeResetCounter++;  snake0timer = 0;} }

/*if (snakeResetCounter >= 800) { for (int i = 0; i< LED_COUNT; i++){leds[i] = CHSV (0, 255, 0);} snakeResetCounter = 0;} */

 

//snake 1

if (snake1counter > 4) {here1: snake1direction = random (0,4);  
if (snake1direction == snake1DirectionMem) {goto here1;}
if (snake1direction == 0 && snake1x == 49) {goto here1;}
if (snake1direction == 2 && snake1x == 0) {goto here1;}  
if (snake1direction == 1 && snake1y == 14) {goto here1;}  
if (snake1direction == 3 && snake1y == 0) {goto here1;}  
  snake1DirectionMem = snake1direction;  snake1counter = 0;
  
  }

  


leds[ XYA(snake1x, snake1y)]  = CHSV( snake1hue, snake1sat, snake1val);

if (snake1direction == 0){ if (snake1timer > snakeSpeed) { if (snake1x < 49) { snake1x++;}  snake1counter++;  snake1timer = 0;} }

if (snake1direction == 1){ if (snake1timer > snakeSpeed) {  if (snake1y < 14){ snake1y++;}  snake1counter++;   snake1timer = 0;} }

if (snake1direction == 2){ if (snake1timer > snakeSpeed) { if (snake1x > 0) { snake1x--;}  snake1counter++;    snake1timer = 0;} }

if (snake0direction == 3){ if (snake1timer > snakeSpeed) {  if (snake1y > 0){ snake1y--;} snake1counter++;   snake1timer = 0;} }





}






}

LEDS.show();  }
