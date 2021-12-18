# 1 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambienanhsang\\Cambienanhsang.ino"
# 2 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambienanhsang\\Cambienanhsang.ino" 2
# 3 "C:\\Users\\ASUS\\Documents\\Arduino\\Cambienanhsang\\Cambienanhsang.ino" 2
LiquidCrystal_I2C lcd(0x27,16,2);
int led = 13;

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(led,0x1);
  lcd.setCursor(0,0);
  lcd.print("duylong");
  lcd.setCursor(0,1);
  lcd.print("cam bien A/S");
  delay(1000);
  lcd.clear();

}

void loop() {
  int giatri_analog = analogRead(A0);
  if(giatri_analog > 500){
    lcd.clear();
    digitalWrite(led,0x1);
    lcd.setCursor(0,0);
    lcd.print("gt analog");
    lcd.print(giatri_analog);
    lcd.setCursor(0,1);
    lcd.print("den sang");
  }
  else {
    lcd.clear();
    digitalWrite(led,0x0);
    lcd.setCursor(0,0);
    lcd.print("gt analog");
    lcd.print(giatri_analog);
    lcd.setCursor(0,1);
    lcd.print("den tat");
  }
  delay(1000);
  lcd.clear();
}
