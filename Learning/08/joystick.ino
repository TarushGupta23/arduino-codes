int x;
int y;
int joystickX = A0;
int joystickY = A1;

void setup() {
    Serial.begin(9600);
}

void loop() {
    x = analogRead(joystickX);
    y = analogRead(joystickY);
    Serial.printf("( %d , %d )\n", x, y);
    delay(50);
}