int btn = 9;
int led = 10;

void setup() {
    pinMode(btn, INPUT);
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, digitalRead(btn));
    delay(50);
}