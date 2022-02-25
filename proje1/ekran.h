
class Ekran{
  private:
    LiquidCrystal_I2C lcd;
  public:
    Ekran(lcd1){
      lcd=lcd1;
    }
    void ayarla(){
      lcd.begin();
    }
    void yaz(int p0,String metin1,int p1,String metin2){
      lcd.clear();
      lcd.setCursor(0,p0); 
      lcd.print(metin1);
      lcd.setCursor(1,p1); 
      lcd.print(metin2);
    }
};
