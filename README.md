# Arduino Learning Repository

This repository serves as a personal knowledge base where I document everything I have learned about Arduino. It includes tips, code snippets, and projects related to Arduino development.

## Table of Contents

1. [Introduction](#introduction)
2. [Getting Started](#getting-started)
3. [Basic Arduino Concepts](#basic-arduino-concepts)
4. [Projects](#projects)
5. [Troubleshooting](#troubleshooting)
6. [Contributing](#contributing)
7. [License](#license)

## Introduction

Welcome to my Arduino learning repository! Here, I share my journey in learning and working with Arduino. Whether you're a beginner or an experienced developer, I hope you find something useful.

## Getting Started

If you're new to Arduino, here are some essential resources to get started:

- [Arduino Official Website](https://www.arduino.cc/)
- [Arduino IDE Download](https://www.arduino.cc/en/software)
- [Arduino Tutorials](https://www.arduino.cc/en/Tutorial/BuiltInExamples)
- [Tinkercad](https://www.tinkercad.com)

## Basic Arduino Concepts

#### consider Arduino UNO R3: 
 - `vin`: used to give power supply to the board
 - `grd`: used to provide negative terminal to the circuit
 - `+5V`: provides +5 Volts to the components attached
 - `+3.3V`: provides +3.3 Volts to the components attached _(usually for bluetooth)_
 - `A0 to A5`: used to read __analog values__ from analog sensors, they can also be used as digital pins
   - `A4` and `A5` can also work as __SDA__ _(serial data)_ __SCA__ _(serial clock)_ which are used in I2C protocol
 - `D0 to D13`: used to control digital devices like LEDs or motors
   - `D0` also acts as __RX__ _(receiver pin)_ and `D1` as __TX__ _(transmission pin)_
   - `D3`, `D5`, `D6`, `D9`, `D10` and `D11` are __PWM__ _(pulse width modulation)_ pins and are identified by `~` symbol before number i.e., `~D4`. These can be controlled using pulse
   - digital pins have inbuilt resistors
   - `D13` is directly connected to arduino's LED
 - `Code` in arduino consist of two main functions
   1. `void setup()` : This function will run only once at the beginning. It is mainly used to initialize variables and pins.
   2. `void loop()` : This function will run repeatedly after the `setup()`. It is where we put our program's logic. The program will keep running until it is stopped.

## Learnings 
This folder consists of basic codes for arduino

## Projects
This folder consists of projects i have created

## Troubleshooting

If you encounter any issues, refer to the [Arduino Troubleshooting Guide](https://www.arduino.cc/en/Guide/Troubleshooting).

## Contributing

If you have suggestions, improvements, or additional Arduino tips, feel free to contribute! Fork the repository, create a branch, make your changes, and submit a pull request.
