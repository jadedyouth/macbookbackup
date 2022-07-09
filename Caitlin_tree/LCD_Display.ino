
void LCD_Display (){
   // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):

main_val_dsp = (main_val/255.0)*100; //the .0 forces it to use a float instead of the default integers

if (LED_LOOP == 0) {

lcd.setCursor(0, 0);
lcd.print("00 Solid On     ");
lcd.setCursor(0, 1);
lcd.print("Hue:");

if (hue >= 100) {
lcd.setCursor(4, 1);
lcd.print(hue); }

if (hue >= 10 && hue < 100) {
lcd.setCursor(4, 1);
lcd.print(hue); 
lcd.setCursor(6, 1);
lcd.print(" "); }


if (hue >= 0 && hue < 10) {
lcd.setCursor(4, 1);
lcd.print(hue); 
lcd.setCursor(5, 1);
lcd.print("  "); }


}


if (LED_LOOP == 1) {

lcd.setCursor(0, 0);
lcd.print("01 Gradient     ");

}


if (LED_LOOP == 2) {

lcd.setCursor(0, 0);
lcd.print("02 Yellow       ");

}

if (LED_LOOP == 7 || LED_LOOP == 8) {

lcd.setCursor(0, 0);
lcd.print("03 White        ");

}

if (LED_LOOP == 9 || LED_LOOP == 10) {

lcd.setCursor(0, 0);
lcd.print("04 Green        ");

}

if (LED_LOOP == 11 || LED_LOOP == 12) {

lcd.setCursor(0, 0);
lcd.print("05 Blue         ");

}

if (LED_LOOP == 13 || LED_LOOP == 14) {

lcd.setCursor(0, 0);
lcd.print("06 Cyan/Greenish");

}

if (LED_LOOP == 15 || LED_LOOP == 16) {

lcd.setCursor(0, 0);
lcd.print("07 Pulse        ");

}

if (LED_LOOP == 17 || LED_LOOP == 18) {

lcd.setCursor(0, 0);
lcd.print("08 BROKEN SORRY ");   //////CYLON BROKEN

}

if (LED_LOOP == 19 || LED_LOOP == 20) {

lcd.setCursor(0, 0);
lcd.print("09 Iron Curtain ");

}

if (LED_LOOP == 21 || LED_LOOP == 22) {

lcd.setCursor(0, 0);
lcd.print("10 Xmas 2020    ");

}

if (LED_LOOP == 23 || LED_LOOP == 24) {

lcd.setCursor(0, 0);
lcd.print("11 Solid Rainbow");

}

if (LED_LOOP == 25 || LED_LOOP == 26) {

lcd.setCursor(0, 0);
lcd.print("12 Digital Rain ");

}

if (LED_LOOP == 27 || LED_LOOP == 28) {

lcd.setCursor(0, 0);
lcd.print("13 Blood Rain   ");

}

if (LED_LOOP == 29 || LED_LOOP == 30) {

lcd.setCursor(0, 0);
lcd.print("14 Prince       ");

}

/*
//mode
lcd.setCursor(0, 1);
lcd.print("m");
lcd.setCursor(1, 1);
lcd.print(0);
*/
/*
lcd.setCursor(0, 1);
lcd.print("  ");

*/
/*
//colour 1
lcd.setCursor(2, 1);
lcd.print("c");
lcd.setCursor(3, 1);
lcd.print(main_hue);
*/
/*
lcd.setCursor(2, 1);
lcd.print("    ");

*/

/*
//colour 2
lcd.setCursor(6, 1);
lcd.print("c");
lcd.setCursor(7, 1);
lcd.print(255);
*/
/*
lcd.setCursor(6, 1);
lcd.print("    ");

*/


/*
//speed
lcd.setCursor(10, 1);
lcd.print("s");
lcd.setCursor(11, 1);
lcd.print(99);
*/
/*
lcd.setCursor(10, 1);
lcd.print("   ");

*/
/*
//brightness
lcd.setCursor(13, 1);
lcd.print("b");
lcd.setCursor(14, 1);
lcd.print(main_val_dsp);
*/
/*
lcd.setCursor(13, 1);
lcd.print("   ");

*/







  }
