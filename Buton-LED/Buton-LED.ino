int led=2; //Ledin bağlı olduğu pin numarasını led adlı değişkene aktardık.
int buton=3; //Butonun bağlı olduğu pin numarasını buton adlı değişkene aktardık.
void setup() {
pinMode(led, OUTPUT); //Ledin bağlı olduğu (2 numaları) pini çıkış pini olarak belirttik.  
pinMode(buton, INPUT); //Butonun bağlı olduğu (3 numaları) pini giriş pini olarak belirttik.   
}
void loop() {
if(digitalRead(buton)==1){  //Buton değeri 1' eşitse....
digitalWrite(led, HIGH); //Led'in bağlı olduğu pine güç verdik
}else{
digitalWrite(led, LOW); //Led'in bağlı olduğu pin gücünü kestik
}
}
