#include <Arduino.h>
#line 1 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambiensieuam_LCD\\Cambiensieuam_LCD.ino"
#define trigPin 12
#define echoPin 13

#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

#line 8 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambiensieuam_LCD\\Cambiensieuam_LCD.ino"
void setup();
#line 17 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambiensieuam_LCD\\Cambiensieuam_LCD.ino"
void loop();
#line 8 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambiensieuam_LCD\\Cambiensieuam_LCD.ino"
void setup()
{
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.setCursor(1,0);
  lcd.print("Distance=");
}

void loop()
{
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1; 
  lcd.setCursor(11,0);
  lcd.print(distance); 
  lcd.setCursor(14,0);
  lcd.print("cm");
}

