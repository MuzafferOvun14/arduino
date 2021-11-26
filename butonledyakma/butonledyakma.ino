void setup() {
pinMode(3,INPUT);
pinMode(5,INPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
 if(digitalRead(3)==HIGH)
  digitalWrite(7,HIGH);
 else
  digitalWrite(7,LOW);
 if(digitalRead(5)==HIGH)
  digitalWrite(8,HIGH);
 else
  digitalWrite(8,LOW);
}
