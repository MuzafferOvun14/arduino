class Havuz{
  
  private:
    int sensorPin=A5;
    int led[4]={0,1,2,3};
  public:
    Havuz(int S,int L1,int L2,int L3,int L4){
      sensorPin=S;
      led[0]=L1;
      led[1]=L2;
      led[2]=L3;
      led[3]=L4;
    }
    int seviyeKontrol(){
      int i=0;
      //tüm ledleri söndürme
      for(i=0;i<4;i++) digitalWrite(led[i],LOW);
      int sensorDeger=analogRead(sensorPin)/205;
      for(i=1;i<=sensorDeger;i++) digitalWrite(led[i-1],HIGH);
      return sensorDeger;  
    }
};
