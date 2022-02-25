#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3f,16,2);
#include "ekran.h"
Ekran ekran(lcd);
void setup() {
  // put your setup code here, to run once:
  ekran.ayarla();
}

void loop() {
  // put your main code here, to run repeatedly:
  ekran.yaz(0,"Muzaffer",0,"Övün");
  delay(200);
}
