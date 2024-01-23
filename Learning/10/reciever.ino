#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);
const byte address[6] = "123ABC";

void setup() {
    radio.begin();
    radio.openReadingPipe(0, address);
    radio.setPALevel(RF24_PA_MIN);
    radio.startListening()
}

void loop() {
    const char text[32] = "";
    radio.read(&text, sizeof(text));
    Serial.println(text);
}