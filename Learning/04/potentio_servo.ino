#include <Servo.h>

int pot = A0;
int servo = 9;
Servo myServo;
int val;

void setup() {
    myServo.attach(servo);
    pinMode(pot, INPUT);
}

void loop() {
    val = analogRead(pot);
    val = map(val, 0, 1023, 0, 180);
    myServo.write(val);
}