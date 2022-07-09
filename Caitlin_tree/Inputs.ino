// set the curser and use lcd.blink(); to show which value is selected for change

void inputs (){
  

  

  if (EncoderOne > 50) {
  long newPosition = myEnc.read();
  if (newPosition == 1) { encoder_output++;
 
  }
Serial.println (newPosition);
EncoderOne = 0;  }



if (PushZero > 250) {

 ZerobuttonState = digitalRead(ZerobuttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (ZerobuttonState == HIGH) {
    // turn LED on:
     PushZeroOutput++; 
  } else {}



PushZero = 0; }


if (PushLeft > 250) {

 LeftbuttonState = digitalRead(LeftbuttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (LeftbuttonState == HIGH) {
    // turn LED on:
     PushLeftOutput++; LED_LOOP --;
  } else {}



PushLeft = 0; }


if (PushRight > 250) {

 RightbuttonState = digitalRead(RightbuttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (RightbuttonState == HIGH) {
    // turn LED on:
     PushRightOutput++; LED_LOOP ++;
  } else {}



PushRight = 0; }

}
