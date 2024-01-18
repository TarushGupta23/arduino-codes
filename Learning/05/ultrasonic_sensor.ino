const int trig = 9;
const int echo = 10;
const float speedOfSound = 343.0; // meters per second

void setup() {
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    Serial.begin(9600);
}

void loop() {
    long duration, distance;
    digitalWrite(trig, LOW);
    delayMicroseconds(5);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10); // it takes 10 μs to generate ultrasonic wave
    digitalWrite(trig, LOW);

    // Measure the duration of the pulse on the echo pin in microseconds
    duration = pulseIn(echo, HIGH);

    // Convert duration from microseconds to seconds
    float durationSeconds = duration / 1000000.0;

    // Calculate distance in meters
    float distanceMeters = (durationSeconds * speedOfSound) / 2;

    // Convert distance from meters to centimeters
    float distanceCentimeters = distanceMeters * 100;

    Serial.print("Distance: ");
    Serial.print(distanceCentimeters);
    Serial.println(" cm");

    // Wait for a short time before taking the next measurement
    delay(500);


/*
    NOTE: 
    we can simply do: 
    distanceCentimeters = duration * speedOfSound / (2*10000);
*/
}