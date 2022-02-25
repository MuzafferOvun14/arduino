#include "hcsr04.h"
HCSR04 mesafe(2,4);
HCSR04 mesafe2(3,5);
void setup() {
  mesafe.setup();
  mesafe2.setup();
  
  Serial.begin(9600);
}

void loop() {
 Serial.println(mesafe.readMeter());
  Serial.println(mesafe2.readMeter());
 delay(300);
}
