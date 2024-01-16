int pot = A0; // potentiometer is at A0 pin
int val;

void setup() {
    pinMode(pot, INPUT);
}
void loop() {
    val = analogRead(pot);
}