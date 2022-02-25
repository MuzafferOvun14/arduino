#include "hcsr04.h"
HCSR04 mesafe(2,4);
void setup() {
  mesafe.setup();
  Serial.begin(9600);
}

void loop() {
 Serial.println(mesafe.readmm());
 mesafe.writecm();
 delay(300);
}
