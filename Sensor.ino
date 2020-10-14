#include<LiquidCrystal.h>

LiquidCrystal lcd(13, 12 , 11 ,10 ,9  ,8);
int Gas = 3;
int redLed = 4;
int greenLed = 5;

void setup() {

pinMode(Gas , INPUT);
  lcd.begin(20, 4);
  lcd.setCursor(0,1);
  lcd.print(" SENSOR ALCOHOL ");
  lcd.setCursor(0,2);
  lcd.print(" SYSTEM AT PNJ ");
  delay(1000);
  
}

void loop() {
  lcd.clear();
  if(digitalRead(Gas) == HIGH){
    lcd.setCursor(0,3);
    lcd.print(" ALCOHOL DETECTED ");
    digitalWrite(4 , HIGH);
    digitalWrite(5, LOW);
  }
else{
  lcd.setCursor(0,3);
  lcd.print(" ALCOHOL NOT DETECTED ");
  digitalWrite(5, HIGH);
  digitalWrite(4 ,LOW);
}
delay(1000);
lcd.clear();

}
