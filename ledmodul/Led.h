class Led{
  private:
    int ledpin[8]={2,3,4,5,6,7,8,9};
    String mod="normal";
    int flashorValue=0;
    int karasimsekValue=0;
  public:
    Led(int l1,int l2,int l3,int l4,int l5,int l6,int l7,int l8){
      ledpin[0]=l1;
      ledpin[1]=l2;
      ledpin[2]=l3;
      ledpin[3]=l4;
      ledpin[4]=l5;
      ledpin[5]=l6;
      ledpin[6]=l7;
      ledpin[7]=l8;
    }
    void openLed(int ledno){
      digitalWrite(ledpin[ledno-1],HIGH);
    }
    void closeLed(int ledno){
      digitalWrite(ledpin[ledno-1],LOW);
    }
    void closeAll(){
      for(int i=0;i<=7;i++){
        digitalWrite(ledpin[i],LOW);
      }
    }
    void openAll(){
      for(int i=0;i<=7;i++){
        digitalWrite(ledpin[i],HIGH);
      }
    }
    void setMod(String newMod){
      mod=newMod;
    }
    void runMod(){
      if(mod=="flashor") flashor();  
      if(mod=="karasimsek") karasimsek();  
    }
    void flashor(){
      if(flashorValue==1){
        flashorValue=0;
        closeAll();
      }
      else{
        flashorValue=1;
        openAll();
      }
    }
    void karasimsek(){
      closeAll();
      digitalWrite(ledpin[karasimsekValue],HIGH);
      karasimsekValue++;
      if(karasimsekValue>7) karasimsekValue=0; +u
    }

};
