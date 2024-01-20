## Joystic

### basics
- they have 2 potentiometers _(along x and y)_ and 1 push button
- movement of joystick changes the resistance in potentiometer
- they have 5 pins: 
    - `Vcc` and `GND` : positive and negative terminals
    - `Vrx` and `Vry` : to get x and y displacement of joystick
    - `SW` : to get input from push button
<br>

| <p align="center">image 1</p> | <p align="center">image 2</p> | <p align="center">image 3</p> |
|----------|----------|----------|
| <img src="https://lastminuteengineers.com/wp-content/uploads/arduino/Analog-Joystick-Internal-Gimbal-Structure.png" height="200" width="200"/> | <img src="https://components101.com/sites/default/files/inline-images/Joystick-Module-Internal-Structure.png" height="200" width="200"/> | <img src="https://europe1.discourse-cdn.com/arduino/original/4X/2/5/f/25f02d78d0bf222085e78d445b06dde2022e54de.jpeg" height="200" width="200"/> |

### devices

#### Joystick HW504
<img src="https://www.aranacorp.com/wp-content/uploads/joystick-module.jpg" height="200"/>

- used in ps2 controllers
- self centering in nature
- [more details](https://docs.arduino.cc/built-in-examples/usb/JoystickMouseControl/)

### files
- *joystick.ino* : demonstrate reading analog values from joystick
- *joystick_servo.ino* : practice code by implementing joystick to move 2 servo motors