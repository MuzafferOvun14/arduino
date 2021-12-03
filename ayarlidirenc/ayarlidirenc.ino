void setup() {
Serial.begin(9600);
}
int potDeger=0;
int potPin=A0;
void loop() {
 potDeger=analogRead(potPin);
 Serial.println(potDeger);
 delay(200);
}
