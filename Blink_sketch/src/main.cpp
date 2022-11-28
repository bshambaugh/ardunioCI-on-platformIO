#include <Arduino.h>
#include <Blink.h>
Blink blink;

void setup() {
  blink.setup();
}

void loop() {
  blink.loop();
}