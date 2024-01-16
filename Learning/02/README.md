## Serial Monitor

### basics
- Serial Monitor : Tool for real-time communication between Arduino and computer, essential for debugging and monitoring.
- _Baudrate_ defines how many bits to transfer per sec.

### functions
- `Serial.begin(baudrate)` : Inicializa a comunication serial
- `Serial.println(data)` : will print the content and then print a new line
- `Serial.print(data)` : will print the content without printing a new line
- `Serial.available()` : tells if a input value is available in the serial
- reading values : 
```cpp
int n = Serial.parseInt();         // reading int values
float f = Serial.parseFloat();     // reading float values
String s = Serial.readString();    // reading String values
```

### files
- *serial_monitor.ino* : demonstrate how to use serial monitor