// created by elliott roach
// created on feb 2026
// this blinks a light on and off


void setup() {
    // initializing pins
    pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
    // this blinks the light in infinent loop
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
