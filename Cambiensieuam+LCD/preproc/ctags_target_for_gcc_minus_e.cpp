# 1 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambiensieuam_LCD\\Cambiensieuam_LCD.ino"



# 5 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambiensieuam_LCD\\Cambiensieuam_LCD.ino" 2

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
  pinMode(12, 0x1);
  pinMode(13, 0x0);
  lcd.setCursor(1,0);
  lcd.print("Distance=");
}

void loop()
{
  long duration, distance;
  digitalWrite(12, 0x0);
  delayMicroseconds(2);
  digitalWrite(12, 0x1);
  delayMicroseconds(10);
  digitalWrite(12, 0x0);
  duration = pulseIn(13, 0x1);
  distance = (duration/2) / 29.1;
  lcd.setCursor(11,0);
  lcd.print(distance);
  lcd.setCursor(14,0);
  lcd.print("cm");
}
