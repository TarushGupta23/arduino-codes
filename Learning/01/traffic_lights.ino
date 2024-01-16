// declaring digital pins to be used
int red = 13;
int yellow = 12;
int green = 11;
int delayTime = 1000; // time in ms

void setup() {
  // declaring Read/Write Modes for Pins
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  for (int i=0; i<5; i++) {
    digitalWrite(red, 1); // red light glows
    delay(delayTime); // providing 1 sec delay
    digitalWrite(red, 0); // red stops glowing

    digitalWrite(yellow, 1);
    delay(delayTime);
    digitalWrite(yellow, 0);

    digitalWrite(green, 1);
    delay(delayTime);
    digitalWrite(green, 0);
  }
}
