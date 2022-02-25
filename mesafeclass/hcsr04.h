class HCSR04{

  private:
    int echoPin=0;
    int trigPin=0;
  public:
    HCSR04(int ePin,int tPin){
      echoPin=ePin;
      trigPin=tPin;
    }
    void setup(){
      pinMode(echoPin,INPUT); 
      pinMode(trigPin,OUTPUT); 
    }
    long read(){
        digitalWrite(trigPin,LOW);
        delayMicroseconds(3);
        digitalWrite(trigPin,HIGH);
        delayMicroseconds(10);
        digitalWrite(trigPin,LOW);
        long sure=pulseIn(echoPin,HIGH);
        long mesafe=(sure/2)*0.343;
        return mesafe;
    }
    long readcm(){
      long mesafe=read();
      mesafe=mesafe/10;
      return mesafe;
    }
    float readMeter(){
      float mesafe=(float)readcm();
      return mesafe/100;
    }
  
  
};
