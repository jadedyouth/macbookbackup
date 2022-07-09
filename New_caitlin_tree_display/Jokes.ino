   void Jks () { 



if (JokeGate == 1) { 
//JokeHat = 55;   
JokeHat = random (0,56);    
JokeGate = 2;}

if (JokeGate == 2) {
switch (JokeHat) {

/////////////////////////////Pirate Jokes
case 0: JokeMd = 0; break;
case 1: JokeMd = 7; break;
case 2: JokeMd = 14; break;
case 3: JokeMd = 21; break;
case 4: JokeMd = 28; break;
case 5: JokeMd = 35; break;
case 6: JokeMd = 42; break;
case 7: JokeMd = 49; break;
case 8: JokeMd = 56; break;
case 9: JokeMd = 63; break;
case 10: JokeMd = 70; break;
case 11: JokeMd = 77; break;
case 12: JokeMd = 84; break;
case 13: JokeMd = 91; break;
case 14: JokeMd = 98; break;
case 15: JokeMd = 105; break;
case 16: JokeMd = 112; break;
case 17: JokeMd = 119; break;
case 18: JokeMd = 126; break;
case 19: JokeMd = 133; break;
case 20: JokeMd = 140; break;
case 21: JokeMd = 147; break;
case 22: JokeMd = 154; break;
case 23: JokeMd = 161; break;
case 24: JokeMd = 168; break;

/////////////////////////////Bad Jokes
case 25: JokeMd = 175; break; 
case 26: JokeMd = 182; break;  
case 27: JokeMd = 189; break;  
case 28: JokeMd = 196; break; 
case 29: JokeMd = 203; break;  
case 30: JokeMd = 210; break;   
case 31: JokeMd = 217; break;   
case 32: JokeMd = 224; break;
case 33: JokeMd = 231; break; 
case 34: JokeMd = 238; break; 
case 35: JokeMd = 245; break; 
case 36: JokeMd = 252; break; 
case 37: JokeMd = 259; break; 
case 38: JokeMd = 266; break; 
case 39: JokeMd = 273; break; 
case 40: JokeMd = 280; break; 
case 41: JokeMd = 287; break; 
case 42: JokeMd = 294; break; 
case 43: JokeMd = 301; break; 
case 44: JokeMd = 308; break; 
case 45: JokeMd = 315; break; 
case 46: JokeMd = 322; break; 
case 47: JokeMd = 329; break; 
case 48: JokeMd = 336; break; 
case 49: JokeMd = 343; break; 
case 50: JokeMd = 350; break; 
case 51: JokeMd = 357; break; 
case 52: JokeMd = 364; break; 
case 53: JokeMd = 371; break; 
case 54: JokeMd = 378; break; 
case 55: JokeMd = 385; break; 




}

}  

 
switch (JokeMd) {
/// Pirate Jokes /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  Pirate Jokes
//0
case 0: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Why dont pirates shower   before they walk the plank?"); break;
case 3: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Because theyll just wash  up on shore later."); break;
case 6: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;   break;
//1  
case 7:  tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Why is pirating so        addictive?"); break;
case 10: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("They say once ye lose yer first hand, ye get hooked!"); break;
case 13: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK);  JokeGate = 0; break;
//2  
case 14: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("What did the ocean say to the pirate?"); break;
case 17: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Nothing, it just waved."); break;
case 20: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK);  JokeGate = 0; break;
//3  
case 21: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Whats the difference      between a hungry pirate   and a drunken pirate?"); break;
case 24: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("One has a rumbling tummy, and the other is a        tumbling rummy."); break;
case 27: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK);  JokeGate = 0; break;
 
case 28: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("What lies at the bottom ofthe ocean and twitches?"); break;
case 31: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("A nervous wreck."); break;
case 34: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;
 
case 35: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("How much did the pirate   pay for his piercings?"); break;
case 38: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("A buck-an-ear."); break;
case 41: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;

case 42: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Why does it take pirates  so long to learn the      alphabet?"); break;
case 45: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Because they can spend    years at C."); break;
case 48: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;

case 49: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("How much did the pirate   pay for his peg and hook?"); break;
case 52: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("An arm and a leg."); break;
case 55: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;

case 56: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("How did the pirate get hisJolly Roger so cheaply?"); break;
case 59: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("He bought it on sail."); break;
case 62: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;  

case 63: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("What happened when        Bluebeard fell overboard  in the Red Sea?"); break;
case 66: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("He got marooned."); break;
case 69: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;  

case 70: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("How do pirates know that  they are pirates?"); break;
case 73: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("They think, therefore theyARRRR!!!!!"); break;
case 76: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

case 77: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Why is pirating so        addictive?"); break;
case 80: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("They say once ye lose yer first hand, ye get hooked!"); break;
case 83: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

case 84: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Why did nobody want to    play cards with the pirate?"); break;
case 87: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Because he was standing onthe deck."); break;
case 90: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;  

case 91: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("What did the first mate   see down the toilet?"); break;
case 94: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("The Captains log!"); break;
case 97: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;  

case 98:  tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Why dont pirates go to    strip clubs?"); break;
case 101: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Because they already have all the booty!"); break;
case 104: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

case 105: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("What do you call a stupid pirate?"); break;
case 108: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("The pillage idiot!"); break;
case 111: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;     

case 112: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Whats a pirates favourite type of music?"); break;
case 115: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Rum & Bass!"); break;
case 118: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

case 119: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Whats orange and sounds   like a parrot?"); break;
case 122: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("A Carrot!"); break;
case 125: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;   

case 126: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Whats the difference      between a pirate and a    cranberry farmer?"); break;
case 129: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("A pirate buries his       treasure, but a cranberry farmer treasures his      berries."); break;
case 132: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;     

case 133: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("What kind of grades does apirate get in school?"); break;
case 136: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("High seas!"); break;
case 139: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;   
//20  
case 140: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Whats a pirates favorite  movie?"); break;
case 143: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Booty and the Beast!"); break;
case 146: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
//21 
case 147: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Why was it so hard to callthe pirate on the phone?"); break;
case 150: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Because he left it off thehook."); break;
case 153: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
//22
case 154: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("What do you call a pirateshairstyle?"); break;
case 157: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("A crew cut!"); break;
case 160: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;      
//23
case 161: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Where do pirates go for a drink?"); break;
case 164: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("The sand bar!"); break;
case 167: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
//24
case 168: tft.setCursor(0, 110); tft.setTextColor(ILI9341_YELLOW); tft.setTextSize(2); tft.println("Whats a pirates least     favorite veggie?"); break;
case 171: tft.setCursor(0, 170); tft.setTextColor(ILI9341_CYAN); tft.setTextSize(2); tft.println("Leeks"); break;
case 174: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    


// Bad Jokes /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  /////////  ///////// Bad Jokes 
//25
case 175: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Whats more amazing than a talking dog?"); break;
case 178: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("A spelling bee!"); break;
case 181: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;   
//26 
case 182: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("I used to be a banker"); break;
case 185: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("But then I lost interest!"); break;
case 188: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;   
//27  
case 189: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("What do Ninja Turtles poston Instagram?"); break;
case 192: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Shellfies!"); break;
case 195: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;   
//28  
case 196: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Whats the difference      between a hippo and a     zippo?"); break;
case 199: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("One is really heavy and   the other is a little     lighter!"); break;
case 202: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;   
//29 
case 203: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("What do you call someone  with no body and a nose?"); break;
case 206: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Nobody Knows!"); break;
case 209: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;   
//30 
case 210: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Why was the stadium so    cold?"); break;
case 213: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Because there were a lot  of fans!"); break;
case 216: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break; 

//31 
case 217: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Whats great about living  in Switzerland?"); break;
case 220: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Well the flag is a big    plus!"); break;
case 223: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break; 

//32 
case 224: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Why did the skeleton go tothe party alone?"); break;
case 227: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("He had no body to go with him!"); break;
case 230: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break; 
  
//33 
case 231: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("I gave out dead batteries"); break;
case 234: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Free of charge!"); break;
case 237: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break; 

//34 
case 238: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("How do you organise a     space party?"); break;
case 241: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("You planet!"); break;
case 244: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;     

//35 
case 245: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("How does Moses make his   tea?"); break;
case 248: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Hebrews it!"); break;
case 251: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
 
//36 
case 252: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Where do kings keep their armies?"); break;
case 255: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("In their sleevies!"); break;
case 258: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
   
//37 
case 259: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("He said his dog ran       10 miles to get the ball.."); break;
case 262: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("That seems a bit far      fetched!"); break;
case 265: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
    
//38 
case 266: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Its raining cats and dogs."); break;
case 269: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Thats fine, as long as it doesnt reindeer!"); break;
case 272: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
    
//39 
case 273: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Im a big fan of giving    clones rights."); break;
case 276: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("After all, they are peopletwo!"); break;
case 279: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
    
//40 
case 280: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("I used to have a job at   the zoo circumcising the  elephants."); break;
case 283: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("The pay was lousy but the tips were enormous!"); break;
case 286: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
 
//41 
case 287: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Im hosting a charity eventfor men who cant ejaculate"); break;
case 290: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("If you cant come let me   know!"); break;
case 293: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
   
//42 
case 294: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("I made a website for      orphans."); break;
case 297: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("But it doesnt have a home page!"); break;
case 300: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
    
//43 
case 301: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("The other day I spotted analbino dalmation."); break;
case 304: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Its the least I could do  for him!"); break;
case 307: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
   
//44 
case 308: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Why are gay people always smiling?"); break;
case 311: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Because they cant keep a  straight face!"); break;
case 314: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

//45 
case 315: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("I spent my entire savings on pasta."); break;
case 318: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("It was worth every penne!"); break;
case 321: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

//46 
case 322: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("What do you call an       alligator in a vest?"); break;
case 325: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("An investigator!"); break;
case 328: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

//47 
case 329: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Why do sperm look like    commas and apostrophes?"); break;
case 332: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Because they offen        interupt periods and lead to contractions!"); break;
case 335: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
 
//48 
case 336: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Never discuss infinity    with a mathematician."); break;
case 339: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("They can go on about it   forever!"); break;
case 342: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
     
//49 
case 343: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Whats it like having a    penis?"); break;
case 346: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Its hard sometimes!"); break;
case 349: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

//50 
case 350: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("You can tune a piano."); break;
case 353: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("But you can't tuna fish!"); break;
case 356: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

//51 
case 357: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("If you have a masturbationaddiction"); break;
case 360: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("We hope you beat it!"); break;
case 363: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    
 
//52 
case 364: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Arachnophobia is bullshit."); break;
case 367: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Let spiders get married!"); break;
case 370: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;    

//53 
case 371: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("What rock group has 4 men but doesnt sing?"); break;
case 374: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("Mount Rushmore!"); break;
case 377: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;  

//54 
case 378: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("French Fries arent cooked in France."); break;
case 381: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("They're cooked in Greece!"); break;
case 384: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;  

//55 
case 385: tft.setCursor(0, 110); tft.setTextColor(ILI9341_ORANGE); tft.setTextSize(2); tft.println("Today I learned           Albert Einstein was a realperson."); break;
case 388: tft.setCursor(0, 170); tft.setTextColor(ILI9341_WHITE); tft.setTextSize(2); tft.println("I always thought he was a theoretical physicist!"); break;
case 391: tft.fillRect(0, 100, 310, 200, ILI9341_BLACK); JokeGate = 0;  break;  

 

  
  }

   
  


      

 




   }
