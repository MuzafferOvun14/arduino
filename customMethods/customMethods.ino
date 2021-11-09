#include "math.h"
void setup() {
  Serial.begin(9600);
}// sub  mult
void loop() {
  printSerial();
  ps("Robotik Kodlama 2021");
  Serial.println(sum(3,4));
  Serial.println(sub(3,4));
  Serial.println(mult(3,4));
  singleDouble(5);
 // regtangleArea(2);// dairenin alanı    3.14*r*r
  circleArea(2);
  delay(500);
}
