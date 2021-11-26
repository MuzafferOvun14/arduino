class Buton{
  private:
    int buton1=3;
    int buton2=4;
    int led1=5;
    int led2=6;
    String butonmod="normal";
    int yansonDurum=0;
  public:
    Buton(int b1,int b2,int l1,int l2){
      buton1=b1;buton2=b2;
      led1=l1;led2=l2;
    }
    void set(){
      pinMode(buton1,INPUT);
      pinMode(buton2,INPUT);
      pinMode(led1,OUTPUT);
      pinMode(led2,OUTPUT);
    }
    void normal(){
      if(digitalRead(buton1)==HIGH)
        digitalWrite(led1,HIGH); 
      else 
        digitalWrite(led1,LOW); 
      if(digitalRead(buton2)==HIGH)
        digitalWrite(led2,HIGH); 
      else 
        digitalWrite(led2,LOW); 
    }
    void yanson(){
      if(yansonDurum==1){
         digitalWrite(led1,HIGH);  
         digitalWrite(led2,HIGH);  
         yansonDurum=0;
      }
      else{
         digitalWrite(led1,LOW);  
         digitalWrite(led2,LOW);  
         yansonDurum=1;
      }
    }
    void check(){
      if(digitalRead(buton1)==HIGH&&digitalRead(buton2)==HIGH){
        yanson();
      }
      else{
        normal();
      }
    }
};
