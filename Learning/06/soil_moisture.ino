int sensor = A0;
int moisture;
int baudrate = 9600;

void setup() {
    pinMode(sensor, INPUT);
    Serial.begin(baudrate);
}

void loop() {
    moisture = analogRead(sensor);
    moisture = map(moisture, 0, 1023, 0, 100);

    Serial.print("Current moisture: ");
    Serial.print(moisture);
    Serial.println("%");
    
    delay(1000);
}