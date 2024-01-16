// dimmable led
int led = 9; // D9 is PWM pin
int pot = A0;
int val;
void setup() {
    pinMode(pot, INPUT);
    pinMode(led, OUTPUT);
}

void loop() {
    val = analogRead(pot);
    val = map(val, 0, 1023, 0, 255);
    analogWrite(led, val);
}