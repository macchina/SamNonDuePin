/*  Button Push Example for Macchina M2 - Demonstrates using "Non-Due" pins for Button inputs and LED outputs.
 *
 *  Written in October 2016 by rocketjosh <josh@macchina.cc>
 *
 *  To the extent possible under law, the author(s) have dedicated all copyright and related and neighboring rights to this software to the public domain worldwide. This software is distributed without any warranty.
 *
 *  You should have received a copy of the CC0 Public Domain Dedication along with this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>. 
 */

#include "Arduino.h"
#include "SamNonDuePin.h"

// constants won't change. They're used here to
// set pin numbers:
const int SW1 = X1;                // Pushbutton SW1
const int SW2 = PIN_EMAC_ERX1;     // Pushbutton SW2

const int Yellow =  X0;      // the number of the LED pin
const int Red =  32;         // the number of the LED pin

// others are: 32(RED), X0(YELLOW), 27(YELLOW), 24(YELLOW), 23(GREEN), 12(RGB_GREEN), 5(RGB_BLUE), 11(RGB_RED)

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;        // variable for reading the pushbutton status

void setup() {

  pinModeNonDue(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);

  pinModeNonDue(SW1, INPUT);
  pinModeNonDue(SW2, INPUT);

  digitalWriteNonDue(Yellow, LOW);
  digitalWrite(Red, LOW);
}

void loop() {

  buttonState = digitalReadNonDue(SW1);
  if (buttonState == HIGH) {  // NOT pressed
    digitalWriteNonDue(Yellow, HIGH);   // turn LED OFF:
  }
  else {
    digitalWriteNonDue(Yellow, LOW);    // turn LED ON:
  }

  buttonState2 = digitalReadNonDue(SW2);
  if (buttonState2 == HIGH) {
    digitalWrite(Red, HIGH);     // turn LED OFF:
  }
  else {
    digitalWrite(Red, LOW);     // turn LED ON:
  }

}
