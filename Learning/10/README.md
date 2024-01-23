## Data Transmission

### basics
- [RF24 library](https://www.github.com/tmrh20/RF24) is used
    ```cpp
    #include <SPI.h>
    #include <nRF24L01.h>
    #include <RF24.h>
    
    RF24 radio(csnPin, cePin);
    ```
- a byte array of length 6 _(string of 5 characters only)_ is used to create pipe and through this pipe, 2 modules communicate _(this must be same in both transmitter and reciever)_

### functions
- `radio.begin()` : initialise the radio object
- `radio.openWritingPipe(pipeAddress)` : used to enable data transmission
- `radio.openReadingPipe(0, pipeAddress)` : used to enable data recieveing
- `radio.setPALevel(RF24_PA_MIN)` : used to set power amplification level 
- ` radio.startListening()` : 
- ` radio.stopListening()` : 
- `radio.available()` : to check if data is available
- `radio.write(&data, sizeof(data))` : to write a given data
- `radio.write(&data, sizeof(data))` : to read a given data

### devices

#### NRF24L01
<img src="https://www.electronicwings.com/storage/PlatformSection/TopicContent/403/description/nrf24l01_module.jpg" height="200" />

- range : 100m
- 2.4GHz band
- 12mA power is used during transmission
- 125 channels available _(2.401GHz, 2.402, 2.403 ... 2.525GHz)_
- each unit can communicate with upto 6 units at a time
- pins: 
    - `Vcc` : 1.9 to 3.6V power input _(3.3V)_
    - `MOSI`, `SCK`, `MISO` : are used for __SPI__ communications.
    - `CSN`, `CE` : used to set module in a stand by or active mode _(or switch between transmit or command mode)_ 
    - `IRQ` : interrupt pin
- connections _(for given code)_: 
    | NRF pin | Arduino pin | NRF pin | Arduino pin |
    |-------|------|-------|------|
    | Vcc | 3.3V | GND | GND |
    | CSN | 8 | CE | 7 |
    | SCK | 13 | MOSI | 11 |
    | MISO | 12 |
- [more details](https://docs.arduino.cc/learn/electronics/potentiometer-basics/)

### files
- *transmitter.ino* : transmitter code
- *reciever.ino* : reciever code
- *bidirectional.ino* : implementing bi drectional communication