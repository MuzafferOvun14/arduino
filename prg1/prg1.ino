void setup() {
  Serial.begin(9600);
}
int sayac=100;
int b=0;
void loop() {
  delay(1000);
  sayac=sayac+b;
  sayac=sayac-2;
  Serial.println(sayac);
  b=b+1;
}
