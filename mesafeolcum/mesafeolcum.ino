void setup() {
  pinMode(4,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(4,LOW);
  delayMicroseconds(3);
  digitalWrite(4,HIGH);
  delayMicroseconds(10);
  digitalWrite(4,LOW);
  long sure=pulseIn(2,HIGH);
  long mesafe=(sure/2)*0.343;
  
  Serial.println(mesafe);
  delay(200);
}
