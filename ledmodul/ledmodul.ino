#include "Led.h"
Led led1(5,6,7,8,9,10,11,12);
void setup() {
 led1.setMod("karasimsek");
}
void loop() {
 /* 
 led1.openAll();
 delay(100);
 led1.closeAll();
 delay(100);
 */
 led1.runMod();
 delay(100);
}
