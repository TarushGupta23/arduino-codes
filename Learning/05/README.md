## Ultrasonic Sensor

### basics
- Used to measure distances
- they have a limit of measuring distance
- generating an ultra sound takes 10 μs
- the time it takes for the ultrasound wave to travel from the sensor to the object and
back is called `echo`. The shorter this time, the closer the object is to the sensor.
- distance is calculated by : `(duration/2.0)*speedOfSound`
    - duration : the time **in seconds** for which echo signal was HIGH
    - speedOfSound : 343 m/s (in dry air at 20 °C)

### functions
- `delayMicroseconds(time)` : to give a time delay in μs
- `pulseIn(pin, HIGH)` : calculates the duration *in μs* for which given pin was _HIGH_

### devices

#### Ultrasonic Sensor HC-SR04
<img src="https://robocraze.com/cdn/shop/products/2_1_1_f187f465-17f0-4b89-8f93-52f713a9794b.jpg?v=1670580633&width=1445" height="200" />

- can measure distances from _2cm_ to _400cm_
- accuracy : 3mm
- has four pins : 
    - `Vcc` and `GND` : positive and negative terminals
    - `TRIG` : tell transmitter to generate waves
    - `ECHO` : sends output duration
- [more details](https://docs.arduino.cc/built-in-examples/sensors/Ping/)

#### RGB led
<img src="https://www.olelectronics.in/wp-content/uploads/rgb_5mm_led-1.png" height="200" />

- used to show color on LED
- consists of three terminals : red, green & blue. Each wire carries current to one primary color

<img src="https://color-register.org/wp-content/uploads/2021/02/RGB.png" height="150" />

### files
- *ultrasonic_sensor.ino* : using ultrasonic sensor
- *led_ultrasonic.ino* : practice code by implementing ultrasonic sensor and RGB led