#include "devirdaim.h"
//Devirdaim(int bPin, int pPin)
Devirdaim devirdaim(2,A2,3);
void setup() {
Serial.begin(9600);
}

void loop() {
  devirdaim.check();
  delay(300);
}
