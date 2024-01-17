## Servo Motors

### basics
- cause rotation
- have 3 wires `Red`_(Vcc)_ `Brown`_(GND)_ `Orange`_(PWM)_
- **Servo** library is used to operate it.
    - `#include <Servo.h>` to include library
    - to include this library: _menu > Sketch > include library > servo_
    - `Servo myServoObj` to create an object of servo
- since servo motor can take only input we donot need to specify it by using pinMode()

### functions
- `servoObj.attach(pin)` : to attach servo object to to given pin
- `servoObj.write(angle)` : rotates the servo motor by given angle in degrees
- for a 360 servo, servoObj.write(`value`):
    - 0 : will make the servo rotate __clockwise__ in _full speed_
    - 180 : will make the servo rotate __anti-clockwise__ in _full speed_
    - 90±8 : makes the servo stop

### devices

#### Servo SG9s
![SG9s image](https://m.media-amazon.com/images/I/61QV8ocKmPL._AC_UF894,1000_QL80_.jpg)
- can rotate upto _180 degree_ or _360 degree_
- [more details](https://docs.arduino.cc/learn/electronics/servo-motors/)

### files
- *servo_motor.ino* : implementation of servo motors
- *potentio_servo.ino* : controlling servo motor using potentiometer