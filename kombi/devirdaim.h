class Devirdaim{

  private:
    boolean calisma=false;
    int suSicaklik=24;
    int anlikSicaklik=24;
    int butonPin=3;
    int potPin=A0;
    int calismaLed=8;
    boolean rezistans=false;
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
      anlikSicaklik=sicaklik();
      if(anlikSicaklik<suSicaklik) rezistans=true; else rezistans=false;
      
    }
    boolean getRezistans(){
      return  rezistans; 
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
