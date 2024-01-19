## Sensors

### devices

#### Soil Moisture Sensor
![soil moisture sensor image](https://robocraze.com/cdn/shop/products/product-image-549042250_1428fc26-1c98-420a-8feb-a0da1e796eaa.jpg)
- a module is available with it but we can alos use voltage divider circuit
- voltage divider circuit: 
    - ![voltage divider](https://content.cdntwrk.com/files/aHViPTg1NDMzJmNtZD1pdGVtZWRpdG9yaW1hZ2UmZmlsZW5hbWU9aXRlbWVkaXRvcmltYWdlXzYzNjg4MjJhYjdmYjYuanBnJnZlcnNpb249MDAwMCZzaWc9ZDUwOWJkOTJlOWYwZGU4MzNmMGJmYTJlODRiOGYwNzY%253D)
    - in the above image : `Z1` is sensor, `Z2` is resistance _(10kΩ)_, `Vin` is Vcc and `Vout` is from where we receive signal
- [more details](https://projecthub.arduino.cc/nikolaiapalis/simple-soil-moisture-sensor-ec23c7)

#### IR sensor
![IR sensor image](https://i2.wp.com/solarduino.com/wp-content/uploads/2020/01/ir3.png?resize=806%2C498&ssl=1)
- the above image shows IR module but we can also use IR led which is cheaper
- photodiode converts the light into an electrical signal
- [more details](https://circuitdigest.com/microcontroller-projects/interfacing-ir-sensor-module-with-arduino)

#### Buzzer
![buzzer image](https://rukminim2.flixcart.com/image/850/1000/jy7kyvk0/electronic-hobby-kit/t/y/6/big-buzzer-with-small-enclosed-piezo-electronic-buzzer-alarm-original-imafggaqnv4bybyg.jpeg?q=90&crop=false)
- used to produce sound

### files
- *soil_moisture.ino* : demonstrate use of soil moisture sensor
- *ir_sensor.ino* : demonstrate use of IR sensor