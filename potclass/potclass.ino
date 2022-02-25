#include "pot.h"
#include "ledDeger.h";
Pot pot1("Sıcaklık",A3);
Pot nem("Nem Düzeyi",A0);
//led değer 0-7 arası değer ile işlem yapar
LedDeger ledDeger(A4);
void setup() {
 Serial.begin(9600);
}
void loop() {
  pot1.yaz();
  nem.yaz();
  ledDeger.yaz();
  delay(200);
}
