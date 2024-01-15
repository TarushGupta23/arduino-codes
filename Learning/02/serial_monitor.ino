// -=-=-=-=-=-= sample code to use Serial =-=-=-=-=-=-

// Serial Monitor: Tool for real-time communication between Arduino and computer, essential for debugging and monitoring.
// NOTE: connections are same as single_led

int baudrate = 9600; // baudrate defines how many bits to transfer per sec.
String msg = "this is a sample message";
int n;
int led = 13;
int delayTime = 500;
int breakTime = 3000;

void setup() {
    Serial.begin(baudrate); // Inicializa a comunication serial
    Serial.println("Serial started!!"); // println() will print the content and then print a new line

    Serial.println("> " + msg); // we can concatinate strings using '+'
    pinMode(led, OUTPUT);

    // taking input from serial:
    Serial.print("Enter number of times to blink led: "); // print() will not print new line
    while (Serial.available() == 0) { 
        // nothing is input so do nothing
    }
    n = Serial.parseInt(); // convert input to int    
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