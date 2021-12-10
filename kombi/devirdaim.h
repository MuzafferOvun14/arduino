class Devirdaim{

  private:
    boolean calisma=false;
    int suSicaklik=24;
    int anlikSicaklik=24;
    int butonPin=3;
    int potPin=A0;
    int calismaLed=8;
  public:
    Devirdaim(int bPin, int pPin, int cLed){
      butonPin=bPin;
      potPin=pPin;
      calismaLed=cLed;
    }
    boolean checkCalisma(){
      if(digitalRead(butonPin)==HIGH){
        calisma=true;
        return true; 
      }else {
        calisma=false;
        return false;
      }
    }
    void check(){
      if(checkCalisma()==true) digitalWrite(calismaLed,HIGH); else digitalWrite(calismaLed,LOW);
      Serial.print("Sistem Sıcaklığı :");
      Serial.println(sicaklik());   
    }
    int sicaklik(){
        int sDeger=analogRead(potPin);
        sDeger=sDeger/10;
        return sDeger;
    }
    void setSuSicaklik(int ss){
      suSicaklik=ss;
    }
  
};
