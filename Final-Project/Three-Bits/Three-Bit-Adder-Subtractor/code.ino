// Created by Aimar Fernandez, Elliott Roach and Caleb Andreas
// Created on Jun 2026
// This program cycles through all possibilities of a 3 bit adder subtractor

// subtractor pin
const int control = 13;
// a pins
const int pinA1 = 6;
const int pinA2 = 2;
const int pinA3 = 4;
// b pins
const int pinB1 = 7;
const int pinB2 = 3;
const int pinB3 = 5;
// variables
int aDecimalValue;
int bDecimalValue;

void turnOffOutputs() {
    // turns of all pin outputs
    digitalWrite(pinA1, 0);
    digitalWrite(pinA2, 0);
    digitalWrite(pinA3, 0);

    digitalWrite(pinB1, 0);
    digitalWrite(pinB2, 0);
    digitalWrite(pinB3, 0);

    digitalWrite(control, 0);
}

void setup() {
    // serial output
    Serial.begin(9600);

    // pin a set up
    pinMode(pinA1, OUTPUT);
    pinMode(pinA2, OUTPUT);
    pinMode(pinA3, OUTPUT);
    // pin b set up
    pinMode(pinB1, OUTPUT);
    pinMode(pinB2, OUTPUT);
    pinMode(pinB3, OUTPUT);
    // pin s set up
    pinMode(control, OUTPUT);
    turnOffOutputs();

    // looping all possible inputs
    for (int addSub = 0; addSub <= 1; addSub++) {
        for (int a3Value = 0; a3Value <= 1; a3Value++) {
            for (int b3Value = 0; b3Value <= 1; b3Value++) {
                for (int a2Value = 0; a2Value <= 1; a2Value++) {
                    for (int b2Value = 0; b2Value <= 1; b2Value++) {
                        for (int a1Value = 0; a1Value <= 1; a1Value++) {
                            for (int b1Value = 0; b1Value <= 1; b1Value++) {
                                digitalWrite(control, addSub);
                                digitalWrite(pinB1, b1Value);
                                digitalWrite(pinA3, a3Value);
                                digitalWrite(pinB3, b3Value);
                                digitalWrite(pinA2, a2Value);
                                digitalWrite(pinB2, b2Value);
                                digitalWrite(pinA1, a1Value);
                            
                                // a value to decimal
                                if (a3Value == 1) {
                                    aDecimalValue = (2 * a2Value - 2) + (1 * a1Value - 1) - 1;
                                } else {
                                    aDecimalValue = (a2Value * 2) + (a1Value * 1);
                                }

                                // b value to decimal
                                if (b3Value == 1) {
                                    bDecimalValue = (2 * b2Value - 2) + ((1 * b1Value - 1) * 1) - 1;
                                } else {
                                    bDecimalValue = (b2Value * 2) + (b1Value * 1);
                                }
                                
                                // show current calculation
                                if (addSub == 1) {
                                    Serial.print("\n" + String(a3Value) + String(a2Value) + String(a1Value) + " + " + String(b3Value) + String(b2Value) + String(b1Value) + "\n");
                                    Serial.print("\n(" + String(aDecimalValue) + ")-(" + String(bDecimalValue) + ") = (" + String(aDecimalValue - bDecimalValue) + ")\n");
                                } else {
                                    Serial.print("\n" + String(a3Value) + String(a2Value) + String(a1Value) + " + " + String(b3Value) + String(b2Value) + String(b1Value) + "\n");
                                    Serial.print("\n(" + String(aDecimalValue) + ")+(" + String(bDecimalValue) + ") = (" + String(aDecimalValue + bDecimalValue) + ")\n");
                                }
                                // wait 1 second
                                delay(2000);
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
