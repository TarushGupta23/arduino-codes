#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Servo.h>

#define led 12;

RF24 radio(7, 8);
const byte addresses[][6] = {"00001", "00002"};
const int pot = A0;
boolean btnState = 0;
int angle = 0;

void setup() {
    pinMode(led, OUTPUT);
    pinMode(pot, INPUT);

    radio.begin();
    radio.openWritingPipe(addresses[0]);
    radio.openReadingPipe(1, addresses[1]);
    radio.setPALevel(RF24_PA_MIN);
}

void loop() {
    radio.startListening();
    if (radio.available()) {
        radio.read(&btnState, sizeof(btnState))
    } else {
        btnState = 0;
    }
    digitalWrite(led, btnState);
    
    angle = analogRead(pot);
    angle = map(angle, 0, 1023, 0, 180);
    radio.write(&angle, sizeof(angle));
}