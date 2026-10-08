// created by Elliott Roach
// created on mar 2026
// This is a sonar distance sensors and moves a servo if under 50 cm.

#include <Servo.h>

const int pinTrig = 9;
const int pinEcho = 10;
float duration;
float distance;
Servo servoPin;
int servoLocation = 0;
int diffrence = 1;

void setup() {
    // initializing pins
    pinMode(pinTrig, OUTPUT);
    pinMode(pinEcho, INPUT);
    Serial.begin(9600);
    servoPin.attach(11);
    servoPin.write(0);
}


void loop() {
    // this gets the distance forever
    
    digitalWrite(pinTrig, LOW);  
    delayMicroseconds(2);  
    digitalWrite(pinTrig, HIGH);  
    delayMicroseconds(10);  
    digitalWrite(pinTrig, LOW); 

    // calculating and printing
    duration = pulseIn(pinEcho, HIGH);
    distance = (duration*.0343)/2;
    Serial.print("Distance: ");
    Serial.println(distance);
    if (distance < 50) {
        
        if (servoLocation == 180) {
            diffrence = -10;
        } else if (servoLocation == 0) {
            diffrence = 10;
        }
        servoLocation = servoLocation + diffrence;
        servoPin.write(servoLocation);
    }
    delay(100);
}
