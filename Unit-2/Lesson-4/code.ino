// created by Elliott Roach
// created on feb 2026
// this changes the color of a RGB LED.

// pin 5 is blue
// pin 6 is green
// pin 7 is red

int pin5 = 5;
int pin6 = 6;
int pin7 = 7;


void setup() {
    // initializing pins
    pinMode(pin5, OUTPUT);
    pinMode(pin6, OUTPUT);
    pinMode(pin7, OUTPUT);
}


void loop() {
    // this changes the colure of the light in infinite loop
    // Blue
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, LOW);

    // Green
    delay(1000);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, LOW);

    // Red
    delay(1000);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);

    // cyan
    delay(1000);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, LOW);

    // Yellow
    delay(1000);
    digitalWrite(pin5, LOW);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);

    // purple
    delay(1000);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, LOW);
    digitalWrite(pin7, HIGH);

    // White
    delay(1000);
    digitalWrite(pin5, HIGH);
    digitalWrite(pin6, HIGH);
    digitalWrite(pin7, HIGH);
  
}
