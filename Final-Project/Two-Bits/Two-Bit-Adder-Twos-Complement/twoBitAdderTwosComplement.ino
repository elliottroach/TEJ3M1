// Created by Aimar Fernandez and Elliott Roach
// Created on Mar 2026
// This program cycles through all possibilities of a 2 bit adder

const int pinA1 = 6;
const int pinA2 = 2;
const int pinB1 = 7;
const int pinB2 = 3;
int aDecimalValue;
int bDecimalValue;

void setup() {
    // serial output
    Serial.begin(9600);

    // pin set up
    pinMode(pinA1, OUTPUT);
    pinMode(pinA2, OUTPUT);
    pinMode(pinB1, OUTPUT);
    pinMode(pinB2, OUTPUT);
    digitalWrite(pinA1, 0);
    digitalWrite(pinA2, 0);
    digitalWrite(pinB1, 0);
    digitalWrite(pinB2, 0);

    // looping all possible inputs
    for (int a2Value = 0; a2Value <= 1; a2Value++) {
        digitalWrite(pinA2, a2Value);
        for (int b2Value = 0; b2Value <= 1; b2Value++) {
            digitalWrite(pinB2, b2Value);
            for (int a1Value = 0; a1Value <= 1; a1Value++) {
                digitalWrite(pinA1, a1Value);
                for (int b1Value = 0; b1Value <= 1; b1Value++) {
                    digitalWrite(pinB1, b1Value);

                    // a value to decimal
                    if (a2Value == 1) {
                        aDecimalValue = (a1Value - 1) - 1;
                    } else {
                        aDecimalValue = (a1Value * 1);
                    }

                    // b value to decimal
                    if (b2Value == 1) {
                        bDecimalValue = (b1Value - 1) - 1;
                    } else {
                        bDecimalValue = (b1Value * 1);
                    }

                    // show current calculation
                    Serial.print("\n(" + String((aDecimalValue)) + ")+(" + String(bDecimalValue) + ") = (" + String(aDecimalValue + bDecimalValue) + ")\n");
                    // wait 1 second
                    delay(2000);
                }
            }
        }
    }
    digitalWrite(pinA1, 0);
    digitalWrite(pinA2, 0);
    digitalWrite(pinB1, 0);
    digitalWrite(pinB2, 0);
    Serial.print("\nProgram Done\n");
}

void loop() {
    // not needed
}
