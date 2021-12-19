#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

int Flame = 7;

void setup() {
  Serial.begin(9600);
  pinMode(Flame, INPUT_PULLUP);
  lcd.begin(20, 4);
  lcd.setCursor(0,0);
  lcd.print("Flame : ");
  lcd.setCursor(1,2);
  lcd.print("www.TheEngineering");
  lcd.setCursor(4,3);
  lcd.print("Projects.com");
}

void loop() {
  if(digitalRead(Flame) == HIGH){lcd.setCursor(8,0);lcd.print("Detected    ");}
  if(digitalRead(Flame) == LOW ){lcd.setCursor(8,0);lcd.print("Not Detected");}
  
}

