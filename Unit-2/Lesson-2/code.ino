// created by elliott roach
// created on feb 2026
// this blinks a light on and off with a variable

int timer = 1000;

void setup() {
    // initializing pins
    pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
    // this blinks the light in infinent loop
    digitalWrite(LED_BUILTIN, HIGH);
    delay(timer);
    digitalWrite(LED_BUILTIN, LOW);
    delay(timer);
    timer = timer + 1000;
}
