#include <LiquidCrystal.h>

int seconds = 0;

LiquidCrystal lcd_1(2, 4, 9, 10, 11, 12);

void setup() {
  lcd_1.begin(16, 2);
  lcd_1.print("Paolo");
  lcd_1.setCursor(0,1);
  lcd_1.print("2020210");
}

void loop()
{
}
