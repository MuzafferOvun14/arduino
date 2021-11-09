void setup() {
  Serial.begin(9600);
}
long faktoriyel=1;
int sayac=1;
void loop() {
  sayac++;
  faktoriyel=faktoriyel*sayac;
  Serial.print(sayac);
  Serial.print(" Faktoriyel =");
  Serial.println(faktoriyel);
  delay(500);
}
Ali babasından her hafta 30 lira alıyor. ve 23 lira harcıyor
ve Ahmet te her hafta alinin biriktirdiği paranın yarısı kadar 
para babasından alıyor 3 lira harcıyor
her hafta ali ve ahmetin kaç lirasının biriktiğini yazdırınız
