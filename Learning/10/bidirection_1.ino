#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Servo.h>

#define button 4;

RF24 radio(7, 8);
const byte addresses[][6] = {"00001", "00002"};
Servo myservo;
boolean btnState = 0;
int angle;

void setup() {
    pinMode(button, INPUT);
    myservo.attach(5);

    radio.begin();
    radio.openWritingPipe(addresses[1]);
    radio.openReadingPipe(1, addresses[0]);
    radio.setPALevel(RF24_PA_MIN);
}

void loop() {
    radio.startListening();
    if (radio.available()) {
        radio.read(&angle, sizeof(angle));
        myservo.write(angle);
    } else {
        myservo.write(0);
    }
    
    if (anaglogRead(button) == HIGH) {
        btnState = 1;
    } else {
        btnState = 0;
    }

    radio.write(&btnState, sizeof(btnState));
}