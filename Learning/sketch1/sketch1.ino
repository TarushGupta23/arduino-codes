// lighting up an LED via arduino
int ledPin = 13;
String msg = "This is message: "; // we can create variables like this

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begain(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<3; i++) {
    Serial.print(msg);
    Serial.println(i);
  }
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);

  Serial.println("Hello world");
}
