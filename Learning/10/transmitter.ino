#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);
const byte address[6] = "123ABC";

void setup() {
    radio.begin();
    radio.openWritingPipe(address);
    radio.setPALevel(RF24_PA_MIN);
    radio.stopListening()
}

void loop() {
    const char text[] = "Hello World";
    radio.write(&text, sizeof(text));
    delay(1000);
}