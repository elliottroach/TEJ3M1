// Made by Elliott and Aimar and Caleb
// Made June 2026
// Goes through the truth table for a 3 bit adder

// pin 7 = B bit one
// pin 6 = A bit one
// pin 13 = carry in
// 1's
int pin7 = 7;
int pin6 = 6;
int pin13 = 13;
// 2's
int pin2 = 2;
int pin3 = 3;
//4's
int pin4 = 4;
int pin5 = 5;


void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    // 1's
    pinMode(pin7, OUTPUT);
    pinMode(pin6, OUTPUT);
    // carry/subtract
    pinMode(pin13, OUTPUT);
    // 2's
    pinMode(pin2, OUTPUT);
    pinMode(pin3, OUTPUT);
    // 4's
    pinMode(pin4, OUTPUT);
    pinMode(pin5, OUTPUT);
}


void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(pin7, LOW);
    digitalWrite(pin6, LOW);
    digitalWrite(pin13, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
    digitalWrite(pin5, LOW);
    const int onesColom = 1;
    const int twosColom = 2;
    const int fourssColom = 4;
    const int eightsColom = 8;
    int aOne = 0;
    int aTwo = 0;
    int aFour = 0;
    int bOne = 0;
    int bTwo = 0; 
    int bFour = 0;
    int cIn = 0;

    int aDesamal = 0;
    int bDesamal = 0;

    for (aFour = 0; aFour < 2; aFour++) {
        for (aTwo = 0; aTwo < 2; aTwo++) {
            for (aOne = 0; aOne < 2; aOne++) {
                for (bFour = 0; bFour < 2; bFour++) {
                    for (bTwo = 0; bTwo < 2; bTwo++) {
                        for (bOne = 0; bOne < 2; bOne++) {
                            digitalWrite(pin13, cIn);
                            digitalWrite(pin6, aOne);
                            digitalWrite(pin7, bOne);
                            digitalWrite(pin2, aTwo);
                            digitalWrite(pin3, bTwo);
                            digitalWrite(pin4, aFour);
                            digitalWrite(pin5, bFour);
                            aDesamal = (aOne * onesColom) + (aTwo * twosColom) + (aFour * fourssColom);
                            bDesamal = (bOne * onesColom) + (bTwo * twosColom) + (bFour * fourssColom);
                            Serial.print ("A = " + String(aDesamal) + "\n");
                            Serial.print ("B = " + String(bDesamal) + "\n");
                            Serial.print (String(aDesamal) + " + " + String(bDesamal) + " = " + String(aDesamal + bDesamal) + "\n\n");
                            delay(2000);
                            aDesamal = 0;
                            bDesamal = 0;
                        }
                    }
                }
            }
        }
    }
}
