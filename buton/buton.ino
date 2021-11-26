void setup() {
  pinMode(3,INPUT);
  pinMode(5,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("1.Buton:");
  Serial.println(digitalRead(3));
  Serial.print("2.Buton:");
  Serial.println(digitalRead(5));
  delay(600);
}
