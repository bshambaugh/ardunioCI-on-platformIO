// modeled on https://www.arduino.cc/en/Tutorial/Blink
#include <Blink.h>

int BUILTIN_LED = 2;

void Blink::setup() {
  // initialize digital pin BUILTIN_LED  as an output.
  pinMode(BUILTIN_LED , OUTPUT);
}

void Blink::loop() {
  digitalWrite(BUILTIN_LED , HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(BUILTIN_LED , LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}