const int trigPin = 9;
const int echoPin = 10;
const int led_R = 11;
const int led_G = 12;
const int led_B = 13;
const float speedOfSound = 343.0;

void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(led_R, OUTPUT);
    pinMode(led_G, OUTPUT);
    pinMode(led_B, OUTPUT);
}

void loop() {
    long duration, distance;
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration*speedOfSound/20000;

    glowLed(distance);
    delay(500);
}

void glowLed(long distance) { // self created function
    if (distance < 4) {
        // red color
        digitalWrite(led_R, HIGH);
        digitalWrite(led_G, LOW);
        digitalWrite(led_B, LOW);
    } else if (distance < 8) {
        // yello color
        digitalWrite(led_R, HIGH);
        digitalWrite(led_G, HIGH);
        digitalWrite(led_B, LOW);
    } else if (distance < 12) {
        // green color
        digitalWrite(led_R, LOW);
        digitalWrite(led_G, HIGH);
        digitalWrite(led_B, LOW);
    } else if (distance < 16) {
        // blue color
        digitalWrite(led_R, LOW);
        digitalWrite(led_G, LOW);
        digitalWrite(led_B, HIGH);
    } else {
        // white color
        digitalWrite(led_R, HIGH);
        digitalWrite(led_G, HIGH);
        digitalWrite(led_B, HIGH);
    }
}