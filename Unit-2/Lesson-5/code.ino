// created by Elliott Roach
// created on mar 2026
// this turns a servo 0 to 180

#include <Servo.h>

Servo servoPinTwo;


void setup() {
    // initializing pins/setup
    servoPinTwo.attach(2);
    servoPinTwo.write(0);
  delay(1000);
}


void loop() {
    // this turns the servo to specific degrees
    servoPinTwo.write(180);
    delay(1000);
    servoPinTwo.write(0);
    delay(1000);
}
