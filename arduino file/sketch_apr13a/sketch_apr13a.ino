#include <Wire.h>               // For I2C communication
#include <LiquidCrystal_I2C.h>  // Library for I2C LCD

// Set the LCD address to 0x27 (or 0x3F based on your I2C module) and 16 columns x 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();                      // Initialize the LCD
  lcd.backlight();                 // Turn on backlight
  lcd.setCursor(0, 0);             // First column, first row
  lcd.print("Hello Jasmine!");
  lcd.setCursor(0, 1);             // First column, second row
  lcd.print("I2C LCD Ready!");
}

void loop() {
  // You can add other code here to update display if needed
}
