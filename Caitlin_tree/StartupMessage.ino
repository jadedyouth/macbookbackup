

void Welcome_Back (){
  
    // Print a message to the LCD.
  lcd.print("     Welcome Back Aunty Pam");

 for (int positionCounter = 0; positionCounter < 27; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(100);
  }


  
  }

void Reset_Position (){
   
   for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
  
    }

}
