# 1 "C:\\Users\\ASUS\\Documents\\Arduino\\1Motor\\1Motor.ino"
void setup() {
  pinMode(7,0x1);
  pinMode(6,0x1);
}

void loop() {
  digitalWrite(7,0x1);
  digitalWrite(6,0x0);
  delay(1000);
   digitalWrite(7,0x0);
  digitalWrite(6,0x1);
  delay(1000);
}
