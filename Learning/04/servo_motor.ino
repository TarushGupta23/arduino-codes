#include <Servo.h>

int servoPin = 3;
int delayTime = 1000;
Servo myservo;

void setup() {
    myservo.attach(servoPin); 
    // no need to mention pinMode(3, OUTPUT)
}

void loop() {
    myservo.write(0); // 0 degrees - considering the servo used can rotate upto 180 degrees
    delay(delayTime);
    myservo.write(90);
    delay(delayTime);
    myservo.write(180);
    delay(delayTime);
}