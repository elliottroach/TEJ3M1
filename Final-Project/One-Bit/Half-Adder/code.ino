// Made by Elliott
// Made May 2026
// Goes through the truth table for a 1/2 adder

// pin 7 = B bit one
// pin 6 = A bit one
int pin7 = 7;
int pin6 = 6;


void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(pin7, OUTPUT);
    pinMode(pin6, OUTPUT);

}


void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(pin7, LOW);
    digitalWrite(pin6, LOW);
    int aOne = 0;
    int bOne = 0; 

    for (aOne = 0; aOne < 2; aOne++) {
        for (bOne = 0; bOne < 2; bOne++) {
            digitalWrite(pin6, aOne);
            digitalWrite(pin7, bOne);
            Serial.print ("A1 = " + String(aOne) + "\n");
            Serial.print ("B1 = " + String(bOne) + "\n");
            Serial.print (String(aOne) + " + " + String(bOne) + " = " + String(aOne + bOne) + "\n");
            delay(2000);
        }
    }
}
