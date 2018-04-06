
#include <LiquidCrystal.h>
#include <HCSR04.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
UltraSonicDistanceSensor sensor(9,8);
void setup() {

  lcd.begin(16, 2);
  lcd.print("Distancia");
}
void loop() {
  double distancia=sensor.measureDistanceCm();
  lcd.setCursor(0, 1);
  lcd.print(distancia);
  delay(1000);
}

