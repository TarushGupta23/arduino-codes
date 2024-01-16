// NOTE: connections are same as single_led
int baudrate = 9600;
String msg = "this is a sample message";
int led = 13;
int delayTime = 500;
int breakTime = 3000;
int n;

void setup() {
    Serial.begin(baudrate);
    Serial.println("Serial started!!");

    Serial.println("> " + msg); // we can concatinate strings using '+'
    pinMode(led, OUTPUT);

    Serial.print("Enter number of times to blink led: ");
    while (Serial.available() == 0) { 
        // nothing is input so do nothing
    }
    n = Serial.parseInt();
}

void loop() {
    for (int i=0; i<n; i++) {
        delay(delayTime);
        digitalWrite(led, HIGH);
        delay(delayTime);
        digitalWrite(led, LOW);
    }
    delay(breakTime);
}