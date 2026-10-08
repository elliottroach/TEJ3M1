// created by Elliott Roach
// created on apr 2026
// This is a sonar distance sensors.

#include <Servo.h>

Servo servoPin;
const float RESISTANCETOANGLERATION = 1023 / 5.7;
int resestencePin = A5;
float resistanceValue = 0;

void setup() {
    // initializing pins
    Serial.begin(9600);
    servoPin.attach(11);
    servoPin.write(0);
}


void loop() {
    // this gets the distance forever and turns servo if too close
    
    resistanceValue = analogRead(resestencePin);
  
    // calculating
    resistanceValue = resistanceValue / 5.7;
  
    // moveing servo if too close
    servoPin.write(resistanceValue);
}
