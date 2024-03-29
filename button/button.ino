/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
const int ZerobuttonPin = 53;     // the number of the pushbutton pin


// variables will change:
int ZerobuttonState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin (9600);
  // initialize the pushbutton pin as an input:
  pinMode(ZerobuttonPin, INPUT);
}

void loop() {

  delay (5);
  // read the state of the pushbutton value:
  ZerobuttonState = digitalRead(ZerobuttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (ZerobuttonState == HIGH) {
    // turn LED on:
    Serial.println ("pushed");
  } else {

  }
}
