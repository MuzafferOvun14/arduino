#include "havuz.h"
Havuz havuz(A0,8,9,10,11);
void setup() {
Serial.begin(9600);
}
int suSeviyesi=0;
void loop() {
  suSeviyesi=havuz.seviyeKontrol();
  Serial.print("Havuz Su Seviyesi :");
  Serial.println(suSeviyesi);
}
