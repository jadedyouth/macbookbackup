void brightnesscontroll () {

lcd.setCursor(12, 1);



  
  if (PushZeroOutput == 0) {brightness = 255; lcd.print("100%");}
  if (PushZeroOutput == 1) {brightness = 204; lcd.print(" 80%");}
  if (PushZeroOutput == 2) {brightness = 153; lcd.print(" 60%");}
  if (PushZeroOutput == 3) {brightness = 102; lcd.print(" 40%");}
  if (PushZeroOutput == 4) {brightness = 51; lcd.print(" 20%");}
  if (PushZeroOutput == 5) {brightness = 0; lcd.print("  0%");}

  if (PushZeroOutput == 6) {PushZeroOutput = 0;}
  
  }
