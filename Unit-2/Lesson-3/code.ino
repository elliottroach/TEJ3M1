// created by Elliott Roach
// created on feb 2026
// this blinks a light on and off from pin 5

int pin5 = 5;


void setup() {
    // initializing pins
    pinMode(pin5, OUTPUT);
}


void loop() {
    // this blinks the light in infinite loop
    digitalWrite(pin5, HIGH);
    delay(1000);
    digitalWrite(pin5, LOW);
    delay(1000);
}
