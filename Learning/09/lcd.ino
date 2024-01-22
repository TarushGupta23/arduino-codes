#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
    lcd.begin(16, 2);
    lcd.print("hello world");
}

void loop() {
    lcd.setCursor(0, 1);
    int time = millis() / 1000;
    lcd.print("Time " + time/60 + ":" + time%60);
    delay(1000);
}