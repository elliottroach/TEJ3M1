// Created by Aimar Fernandez, Elliott Roach and Caleb Andreas
// Created on Jun 2026
// This program cycles through all possibilities of a 4 bit adder in 2's comp

// a pins
const int pinA1 = 6;
const int pinA2 = 2;
const int pinA3 = 4;
const int pinA4 = 8;
// b pins
const int pinB1 = 7;
const int pinB2 = 3;
const int pinB3 = 5;
const int pinB4 = 9;
// variables
int aDecimalValue;
int bDecimalValue;

void turnOffOutputs() {
    // turns of all pin outputs
    digitalWrite(pinA1, 0);
    digitalWrite(pinA2, 0);
    digitalWrite(pinA3, 0);
    digitalWrite(pinA4, 0);

    digitalWrite(pinB1, 0);
    digitalWrite(pinB2, 0);
    digitalWrite(pinB3, 0);
    digitalWrite(pinB4, 0);
}

void setup() {
    // serial output
    Serial.begin(9600);

    // pin a set up
    pinMode(pinA1, OUTPUT);
    pinMode(pinA2, OUTPUT);
    pinMode(pinA3, OUTPUT);
    pinMode(pinA4, OUTPUT);
    // pin b set up
    pinMode(pinB1, OUTPUT);
    pinMode(pinB2, OUTPUT);
    pinMode(pinB3, OUTPUT);
    pinMode(pinB4, OUTPUT);
    turnOffOutputs();

    // looping all possible inputs
    for (int a4Value = 0; a4Value <= 1; a4Value++) {
        digitalWrite(pinA4, a4Value);
        for (int b4Value = 0; b4Value <= 1; b4Value++) {
            digitalWrite(pinB4, b4Value);
            for (int a3Value = 0; a3Value <= 1; a3Value++) {
                digitalWrite(pinA3, a3Value);
                for (int b3Value = 0; b3Value <= 1; b3Value++) {
                    digitalWrite(pinB3, b3Value);
                    for (int a2Value = 0; a2Value <= 1; a2Value++) {
                        digitalWrite(pinA2, a2Value);
                        for (int b2Value = 0; b2Value <= 1; b2Value++) {
                            digitalWrite(pinB2, b2Value);
                            for (int a1Value = 0; a1Value <= 1; a1Value++) {
                                digitalWrite(pinA1, a1Value);
                                for (int b1Value = 0; b1Value <= 1; b1Value++) {
                                    digitalWrite(pinB1, b1Value);

                                    // a value to decimal
                                    if (a4Value == 1) {
                                        aDecimalValue = (4 * a3Value - 4) + (2 * a2Value - 2) + (1 * a1Value - 1) - 1;
                                    } else {
                                        aDecimalValue = (a3Value * 4) + (a2Value * 2) + (a1Value * 1);
                                    }

                                    // b value to decimal
                                    if (b4Value == 1) {
                                        bDecimalValue = (4 * b3Value - 4) + (2 * b2Value - 2) + (1 * b1Value - 1) - 1;
                                    } else {
                                        bDecimalValue = (b3Value * 4) + (b2Value * 2) + (b1Value * 1);
                                    }

                                    // show current calculation
                                    Serial.print("\n" + String(a4Value) + String(a3Value) + String(a2Value) + String(a1Value) + " + " + String(b4Value) + String(b3Value) + String(b2Value) + String(b1Value) + "\n");
                                    Serial.print("\n(" + String(aDecimalValue) + ")+(" + String(bDecimalValue) + ") = (" + String(aDecimalValue + bDecimalValue) + ")\n");
                                    
                                    // wait 1 second
                                    delay(2000);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    turnOffOutputs();
    Serial.print("\nProgram Done\n");
}

void loop() {
    // not needed
}
