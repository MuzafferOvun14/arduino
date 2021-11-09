//seri porta Hello Arduino yazma
void printSerial(){
 Serial.println("Hello Arduino"); 
}
// gelen content değerini seri porta yazma. değer döndürülmediğinden
//tipi void
void ps(String content ){
  Serial.println(content);
}
int sum(int a,int b){
  return a+b;//gelen a değeri ile b değerini toplar sonucu geri döndürür
}
int sub(int a,int b){
  return a-b;
}
int mult(int a,int b){
  return a*b;
}
void singleDouble(int a){
  if(a%2==1){
    Serial.print(a);
    Serial.println(" Sayısı Tek Sayı");  
  }
  else{
    Serial.print(a);
    Serial.println(" Sayısı Çift Sayı");  
  }
} //circleArea(2);// dairenin alanı    3.14*r*r
void circleArea(int a){
     result=3.14*a*a;
  Serial.println(result);
}
