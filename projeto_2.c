#include<Servo.h>

Servo servo_1;

void setup() {
  servo_1.attach(D8);
 
}

void loop() {
  servo_1.write(90);
  delay(1000);
  servo_1.write(0);
  delay(1000);
}
