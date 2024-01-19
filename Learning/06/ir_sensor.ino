int sensorPin = A0;
int buzzer = 12;
int sensorVal = 0;

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    sensorVal = analogRead(A0);
    if (sensorVal > 50) {
        digitalWrite(buzzer, HIGH);
    } else {
        digitalWrite(buzzer, LOW);
    }
    delay(100);
}