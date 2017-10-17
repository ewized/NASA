#include <NewPing.h>

NewPing sens1(3, 4, 200);
NewPing sens2(5, 6, 200);
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sensors 1 ");
  Serial.println(sens1.ping_in());
  delay(500);
  Serial.print("Sensors 2 ");
  Serial.println(sens2.ping_in());
}
