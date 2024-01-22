## LCD

### devices

#### LCD
<img src="https://qxf2.com/blog/wp-content/uploads/2018/03/lcd-16x2-pinout-300x196.png" height="200" />

- used to display data
- Liquid Crystal library is used 
    ```cpp
        #include <LiquidCrystal.h>
        // creating object
        LiquidCrystal lcd(RSpin, Epin, DBpin1, DBpin2, DBpin3, DBpin4 ...);
    ```
- pins:
    - `Vcc` and `GND` : positive and negative terminals
    - `Vo` or `Vee` : contrast controlling pin. Used to control brightness
    - `RS` : used to select register in lcd _(there are 2 registers: command register and data register)_
    - `RW` : used to give read write command _(HIGH = read, LOW = write)_
    - `E` : enable pin for sending commands/data to the lcd
    - `DB0` to `DB7` : data pins, usually only 4 are used at a time
- [more details](https://docs.arduino.cc/learn/electronics/lcd-displays/)

### functions
- `lcd.begin(totalColumns, totalRows)` : initialises the lcd
- `lcd.print(data)` : displays data on lcd
- `lcd.setCursor(col, row)` : sets the cursor on given position and starts printing from there _(0 based indexing)_
- `millis()` : returns the tital time in _ms_ passed since the last reset.

### files
- *lcd.ino* : demonstrate using lcd display