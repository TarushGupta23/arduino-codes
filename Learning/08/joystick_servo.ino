#include <Servo.h>

Servo servoX;
Servo servoY;
int joyX = A0;
int joyY = A1;
int x;
int y;

void setup() {
    servoX.attach(9);
    servoY.attach(10);
}

void loop() {
    x = analogRead(joyX);
    y = analogRead(joyY);

    x = map(x, 0, 1023, 0, 180);
    y = map(y, 0, 1023, 0, 180);

    servoX.write(x);
    servoY.write(y);

    delay(50);
}