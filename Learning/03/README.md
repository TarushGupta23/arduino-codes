## Analog Values

### basics
- analog pins _(A0 to A5)_ are used to read or write analog values
- `Serial.print(A0);` gives _14_ as output
- _PWM_ pins can also be used to write analog values
- analog values vary from _0 to 1023 for analog pins_ and _0 to 255 for PWM pins_
- to provide `x` Volts to a component the value `y` needed to be written on pin is given by: 
    - `y = (x * 1023) / Vcc` for analog pins
    - `y = ((x * 255) / Vcc)` for PWM

### functions
- `analogWrite(pin, value)` : function to write analog value to the given pin
- `analogRead(pin)` : readng analog value from a pin
- `map(initialValue, initialRangeStart, initialRangeEnd, finalRangeStart, finalRangeEnd)` : maps an initial value v ∈ initial range to a value V ∈ final range

### devices

#### Potentiometer
[potentiometer image](https://www.thinkcreatelearn.co.uk/resources/arduino-recipes/read-potentiometer/pot-pins.jpg)
- It is basically a variable resistance
- has 3 pins : terminal 1, wiper terminal, terminal 2
- terminal 1 and 2 are connected to Vcc _(+5V)_ and GND
- wiper terminal is used to read values
- [more details](https://docs.arduino.cc/learn/electronics/potentiometer-basics/)

### files
- *reading_analog.ino* : demonstrate reading analog values from potentiometer
- *analog_practice.ino* : practice code by implementing potentiometer