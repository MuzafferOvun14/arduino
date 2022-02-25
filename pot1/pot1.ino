void setup() {
  Serial.begin(9600);
}
int pot1pin=A3;
int pot2pin=A5;
void loop() {
  int pot1Deger=analogRead(pot1pin);
  Serial.print("Pot 1 :");
  Serial.println(pot1Deger);
  float pot1=pot1Deger/10.23;
  Serial.print("Pot(%):");
  Serial.println(pot1);

  int pot2Deger=analogRead(pot2pin);
   Serial.print("Pot 2 :");
  Serial.println(pot2Deger);
  float pot2=pot2Deger/10.23;
  Serial.print("Pot2(%):");
  Serial.println(pot2);
 
  delay(200);
}
