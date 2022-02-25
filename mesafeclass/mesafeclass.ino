#include "hcsr04.h"
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3f,16,2); // Bu kodu kullanırken ekranda yazı çıkmaz ise 0x27 yerine 0x3f yazınız !!
HCSR04 mesafe(3,5);
void setup() {
  lcd.begin();
  mesafe.setup();
  Serial.begin(9600);
}
void loop() {
 Serial.println(mesafe.readMeter());
 lcd.clear();
  lcd.setCursor(0,0); // İlk satırın başlangıç noktası
 lcd.print("Mesafe");
 lcd.setCursor(0,1); // İkinci satırın başlangıç noktası
 lcd.print((String)mesafe.readMeter()+" m");
 delay(300);
 
}
