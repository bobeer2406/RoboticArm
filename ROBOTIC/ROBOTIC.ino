#include <Servo.h>

Servo szczypce;
Servo nadgarstek;

void ruchSerwa(Servo &s) {

  s.write(120);   // obrót w jedną stronę
  delay(500);

  s.write(90);    // stop
  delay(1000);

  s.write(60);    // obrót w drugą stronę
  delay(500);

  s.write(90);    // stop
  delay(2000);
}

void setup() {
  szczypce.attach(9);
  nadgarstek.attach(10);
}

void loop() {

  ruchSerwa(szczypce);
  ruchSerwa(nadgarstek);

}