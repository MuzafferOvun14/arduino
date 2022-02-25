#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3f,16,2); // Bu kodu kullanırken ekranda yazı çıkmaz ise 0x27 yerine 0x3f yazınız !!
void setup() {
  lcd.begin();  pinMode(6,INPUT);  pinMode(7,INPUT);
}
int solbtn=0;int sagbtn=0;int sayac=0;
void loop(){
  if(digitalRead(6)&&sagbtn==0) sayac++;
  if(digitalRead(7)&&solbtn==0) sayac--;
  lcd.setCursor(0,0);lcd.print("Sayac");
  lcd.setCursor(0,1);lcd.print(sayac);
  sagbtn=digitalRead(6);
  solbtn=digitalRead(7);delay(100);
 }
