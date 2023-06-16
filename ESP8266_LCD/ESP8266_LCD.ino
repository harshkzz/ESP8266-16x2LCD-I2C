#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int counter = 0;
LiquidCrystal_I2C lcd(0x3F, 16, 2); // Set the LCD address to 0x27 for a 16 chars and 2 line display
void setup() {
  lcd.init();                       // Initialize the LCD
  lcd.backlight();                  // Turn on the backlight
  lcd.clear();                      // Clear the LCD screen
}
void loop() {
  lcd.setCursor(0, 0);               // Set the cursor to the first column and first row
  lcd.print("    INOVATRIX   ");     // Print some text
  lcd.setCursor(0,1);
  lcd.print(counter);
  counter = counter + 1;
  delay(500);                        // Wait for 1/2 seconds
}
