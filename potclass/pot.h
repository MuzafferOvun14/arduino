class Pot{
   private:
      int pin;
      String modulName;
   public:
    Pot(String mname, int pinNo){
      pin=pinNo;
      modulName=mname;
    }
    void yaz(){
      float potYuzde=oku();
      Serial.print(modulName);
      Serial.print(":");
      Serial.print(potYuzde);
      Serial.println(" Santigrat Derece");
    }
    float oku(){
      int potDeger=analogRead(pin);
      float potYuzde=potDeger/10.23;
      return potYuzde;  
    }
};
