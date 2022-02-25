
class HCSR04{
  private:
    int echoPin=2;    int trigPin=4;
  public:
    HCSR04(int ePin,int tPin){
      echoPin=ePin;      trigPin=tPin;
    }
    void setup(){
       pinMode(echoPin,INPUT);       pinMode(trigPin,OUTPUT); 
     }
     long readmm(){
        digitalWrite(trigPin,LOW);        delayMicroseconds(3);        digitalWrite(trigPin,HIGH);
        delayMicroseconds(10);        digitalWrite(trigPin,LOW);
        long sure=pulseIn(echoPin,HIGH);        long mesafe=(sure/2)*0.343;
        return mesafe;
     }
     void writecm(){
      long cm=readmm();
      cm=cm/10;
      Serial.print(cm);
      Serial.println(" cm"); 
     }
};
