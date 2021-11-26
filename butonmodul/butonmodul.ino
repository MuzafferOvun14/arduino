#include "buton.h"
Buton buton(3,5,7,8);
void setup() {
  buton.set();
}

void loop(){
  buton.check();
  delay(300);
}
