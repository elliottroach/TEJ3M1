// created by Elliott Roach
// created on feb 2026
// This is a sonar distance sensors.

const int pinTrig = 9;
const int pinEcho = 10;
float duration;
float distance;

void setup() {
    // initializing pins
    pinMode(pinTrig, OUTPUT);
    pinMode(pinEcho, INPUT);
    Serial.begin(9600);  
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
    delay(100);
}
